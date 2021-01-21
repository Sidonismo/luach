<!DOCTYPE html>
<html lang="cs">
<head>
    <meta charset="utf-8" />
    <title>
      Luach zmanim - Výpočet časů pro židovské modlitby a začátky i konce svátků
    </title>
    <meta http-equiv="Content-Language" content="cs">
  <link href="normalizace.css" rel="stylesheet">  
	<link href="jquery-ui.css" rel="stylesheet">
	<style>
	body{
		font-family: serif;
		margin: 50px;
	}
	.demoHeaders {
		margin-top: 2em;
	}
	#dialog-link {
		padding: .4em 1em .4em 20px;
		text-decoration: none;
		position: relative;
	}
	#dialog-link span.ui-icon {
		margin: 0 5px 0 0;
		position: absolute;
		left: .2em;
		top: 50%;
		margin-top: -8px;
	}
	#icons {
		margin: 0;
		padding: 0;
	}
	#icons li {
		margin: 2px;
		position: relative;
		padding: 4px 0;
		cursor: pointer;
		float: left;
		list-style: none;
	}
	#icons span.ui-icon {
		float: left;
		margin: 0 4px;
	}
	.fakewindowcontain .ui-widget-overlay {
		position: absolute;
	}
	select {
		width: 200px;
	}
	</style>
  
  <script src="jquery.js"></script>
  <script src="jquery-ui.js"></script>
  <script src="datepicker-he.js"></script>  
  <script src="datepicker-cs.js"></script>


  <script>
  $( function() {
    $( "#datepicker" ).datepicker( $.datepicker.regional[ "cs" ] );
    $( "#locale" ).on( "change", function() {
      $( "#datepicker" ).datepicker( "option",
        $.datepicker.regional[ $( this ).val() ] );
    });
  } );
  </script>

</head>
<body> 
<?php
// zahrnutí seznamu měst s jejich gps udaji
include( "locations.inc" );
include( "times.inc" );
include( "torah.inc" );

// převzetí udaju z formulare
if ( isSet( $_REQUEST["activelocation"] ) ) {
				$activelocation = $_REQUEST["activelocation"];
				 } 
else {
				$activelocation = "Praha";
				 } 

if ( !isSet( $_REQUEST["datum"] ) || $_REQUEST["datum"] == 0 ) {
				$sirka = 50.05;
				 $delka = 14.24;
				 $zona = 1;
				 $datum = ( date( 'j.n.Y' ) );
				 } 
else {
				$datum = $_REQUEST["datum"];
				 } 

// nastavení proměných pro zeměpisnou šířku a délku lokace
$lokace = vyhledani( $activelocation );
$location = searchLocation( $activelocation );
$sirka = $lokace[0];
$delka = $lokace[1];
$zona = $lokace[2];

// nastavení proměných pro vyžadované datum
$datum_pole = explode( ".", $datum );
$rok = ( double )$datum_pole[2];
$mesic = ( double )$datum_pole[1];
$den = ( double )$datum_pole[0];

// výpočet letního času
function is_daylight_time( $time )


{
				 list( $dom, $dow, $month, $hour, $min )
				 = explode( ":", date( "d:w:m:H:i", $time ) );
				 if ( $month > 4 && $month < 10 ) {
								$retval = 1; # od května do září
								 } elseif ( $month == 4 && $dom > 7 ) {
								$retval = 1; # po prvním dubnovém týdnu
								 } elseif ( $month == 4 && $dom <= 7 && $dow == 0 && $hour >= 2 ) {
								$retval = 1; # po rduhé hodině ranní v neděli ($dow=0) v dubnu
								 } elseif ( $month == 4 && $dom <= 7 && $dow != 0 && ( $dom - $dow > 0 ) ) {
								$retval = 1; # po první dubnové neděli
								 } elseif ( $month == 10 && $dom < 25 ) {
								$retval = 1; # před posledním týdnem v říjnu
								 } elseif ( $month == 10 && $dom >= 25 && $dow == 0 && $hour < 2 ) {
								$retval = 1; # před druhou hodinou ranní v poslední říjnový týden
								 } elseif ( $month == 10 && $dom >= 25 && $dow != 0
								 && ( $dom-24 - $dow < 1 ) ) {
								$retval = 1; # před nedělí v posledním týdnu v říjnu
								 } else {
								$retval = 0;
								 } 
				return( $retval );
				 } 
$DST = is_daylight_time( date( "U" ) );
if ( $DST ) {
				$zona = ( $zona + 1 );
				} 
if ( $zona == "13" ) {
				$zona = "-11";
				} 


// nastavení proměné pro jméno vyžadovaného měsíce
if ( $mesic == 1 ) $mesic2 = "ledna";
if ( $mesic == 2 ) $mesic2 = "únoru";
if ( $mesic == 3 ) $mesic2 = "brezna";
if ( $mesic == 4 ) $mesic2 = "dubna";
if ( $mesic == 5 ) $mesic2 = "kvetna";
if ( $mesic == 6 ) $mesic2 = "cervna";
if ( $mesic == 7 ) $mesic2 = "cervence";
if ( $mesic == 8 ) $mesic2 = "srpna";
if ( $mesic == 9 ) $mesic2 = "září";
if ( $mesic == 10 ) $mesic2 = "října";
if ( $mesic == 11 ) $mesic2 = "listopadu";
if ( $mesic == 12 ) $mesic2 = "prosince";

// funkce hms, která převádí sekundy na hodiny, minuty a sekundy
function hms( $val )


{
				 $v = $val;
				 $h = intval( $v / 3600 );
				 $v -= ( $h * 3600 );
				 $m = intval( $v / 60 );
				 $v -= ( $h * 60 );
				 $s = $v % 60;
				 if ( $h < 10 ) {
								$h = "0" . $h;
								 } 
				if ( $m < 10 ) {
								$m = "0" . $m;
								 } 
				if ( $s < 10 ) {
								$s = "0" . $s;
								 } 
				return $h . ":" . $m . ":" . $s;
				 } 

// času
function vypocet_casu( $z, $e, $k, $chaci, $co )


{
				 $c = ( $z * $k ) + $e;
				 $c += $chaci;
				 $hodin = $c / 60;
				 echo $hodin . "<br><br>";
				 settype( $hodin, 'integer' );
				 echo $hodin . "<br><br>";
				 $min = $c % 60;
				 echo $min . "<br><br>"; 
				 echo "<br>$co" . $hodin . ":" . $min . "<br><br>";
				 } 

// vytáhne z date_sun_info nautický čas
$h = date_sun_info( strtotime( $rok . "-" . $mesic . "-" . $den ), $sirka, $delka );
foreach ( $h as $key => $val ) {
				if ( $key == "sunrise" ) {
								$vychod = date( "H:i:s", $val );
								 } 
				if ( $key == "sunset" ) {
								$zapad = date( "H:i:s", $val );
								 } 
				if ( $key == "transit" ) {
								$val9 = date( "H:i:s", $val );
								 } 
				if ( $key == "civil_twilight_end" ) {
								$val1 = date( "H:i:s", $val );
								 } 
				if ( $key == "nautical_twilight_end" ) {
								$val2 = date( "H:i:s", $val );
								 } 
				if ( $key == "astronomical_twilight_end" ) {
								$val3 = date( "H:i:s", $val );
								 } 
				if ( $key == "civil_twilight_begin" ) {
								$val4 = date( "H:i:s", $val );
								 } 
				if ( $key == "nautical_twilight_begin" ) {
								$val5 = date( "H:i:s", $val );
								 } 
				if ( $key == "astronomical_twilight_begin" ) {
								$val6 = date( "H:i:s", $val );
								 } 
				} 
// ///////////////////////////////////////////
// tri malé hvězdy dle tichnutu
$havdala = GetSunsetDegreesBelowHorizon( $mesic, $den, $rok, 8.75, $location[0], $location[1], $location[2] );
$havdala[0] = $havdala[0] + $zona-1;
function istJuedischesSchaltjahr( $juedischesJahr )
{
				 $x = $juedischesJahr % 19;
				 if ( $x == 0 || $x == 3 || $x == 6 || $x == 8 || $x == 11 || $x == 14 || $x == 17 )
								 return true;
				 else
								 return false;
				} 

function omerzaehlen( $htag, $hmonat, $hjahr )
{
				
				 $omerstart = jewishtojd( 8, 16, $hjahr ); // Begin of omer counting: 16 Nisan
				 $aktuell = jewishtojd( $hmonat, $htag, $hjahr ); // Current date
				 $omerzahl = $aktuell - $omerstart + 1; // Omer count if between 1 and 49
				 if ( $omerzahl >= 1 && $omerzahl <= 49 ) // If it is a valid omer count ...
								return $omerzahl; // ... return it
				 else
								 return 0; // ... otherwiese return 0 indicating no omer counting on that day
				} 

function isRoshHodesh( $tag, $monat )
{
				
				 if ( $tag == 30 )
								 return true;
				
				
				 if ( $tag == 1 )
				 {
								if ( $monat == 1 ) return false;
								 return true;
								 } 
				
				return false;
				} 

function makeLink( $href )
{
				 return "<a href=\"$href\" target=\"_blank\"><img src=\"torahicon.gif\" border=0></a>";
				} 
        
$jdDate = gregoriantojd ( $mesic, $den, $rok );
				 $prvniMesic = gregoriantojd ( $mesic, 1, $rok );
				 $druhyMesic = gregoriantojd ( $mesic + 1, 1, $rok );
				 $gregorianMonthName = jdmonthname ( $jdDate, 1 );
				 $hebrewDate = jdtojewish ( $jdDate );
				 list( $hebrewMonth, $hebrewDay, $hebrewYear ) = explode( '/', $hebrewDate );
				 $hebrewMonthName = jdmonthname ( $jdDate, 4 );
				 $prvniMonthName = jdmonthname ( $prvniMesic, 4 );
				 $druhyMonthName = jdmonthname ( $druhyMesic, 4 );  

function isDiaspora() {
  return true;
}               
// /////////////////////////////////////////////////////////////////////
function Hdate( $month, $day, $year, $denTyden, $podminka )

{
				 $jdDate = gregoriantojd ( $month, $day, $year );
				 $prvniMesic = gregoriantojd ( $month, 1, $year );
				 $druhyMesic = gregoriantojd ( $month + 1, 1, $year );
				 $gregorianMonthName = jdmonthname ( $jdDate, 1 );
				 $hebrewDate = jdtojewish ( $jdDate );
				 list( $hebrewMonth, $hebrewDay, $hebrewYear ) = explode( '/', $hebrewDate );
				 $hebrewMonthName = jdmonthname ( $jdDate, 4 );
				 $prvniMonthName = jdmonthname ( $prvniMesic, 4 );
				 $druhyMonthName = jdmonthname ( $druhyMesic, 4 );
				 echo $hebrewDay . ". &nbsp;" . $hebrewMonthName . "&nbsp;" . $hebrewYear;
				 // Hier fangen Feiertage an
				echo "            <font color=\"blue\" face=\"Arial\">";
				
				if ( $hebrewDay == 29 && $hebrewMonthName == "Elul" ) {
								echo "Erev Rosh<br>HaShana";
								} 
				
				if ( $hebrewDay == 1 && $hebrewMonthName == "Tishri" ) {
								echo "1st day of<br>Rosh HaShana";
								} 
				
				if ( $hebrewDay == 2 && $hebrewMonthName == "Tishri" ) {
								echo "2nd day of<br>Rosh HaShana";
								} 
				
				$jdTzomGedalia = jewishtojd( 1, 3, $hebrewMonth );
				$datumTzomGedalia = getdate( jdtounix( $jdTzomGedalia ) );
				$wochentagTzomGedalia = $datumTzomGedalia["wday"];
				
				if ( $wochentagTzomGedalia == 6 ) {
								if ( $hebrewDay == 4 && $hebrewMonthName == "Tishri" ) {
												echo "Tzom Gedalia";
												 } 
								} 
				
				else
								 {
								if ( $hebrewDay == 3 && $hebrewMonthName == "Tishri" ) {
												echo "Tzom Gedalia";
												 } 
								} 
				
				$jdtzomtammus = jewishtojd( 11, 17, $hebrewMonth );
				$tzomtammus = getdate( jdtounix( $jdtzomtammus ) );
				$wochentagTzomTammus = $tzomtammus["wday"];
				
				if ( $wochentagTzomTammus == 6 ) {
								
								if ( $hebrewDay == 18 && $hebrewMonthName == "Tammuz" ) {
												echo "Tzom Tammuz";
												 } 
								} 
				else
								 {
								if ( $hebrewDay == 17 && $hebrewMonthName == "Tammuz" ) {
												echo "Tzom Tammuz";
												 } 
								} 
				
				$jdtischabeaw = jewishtojd( 12, 9, $hebrewMonth );
				$tischabeaw = getdate( jdtounix( $jdtischabeaw ) );
				$wochentagtischabeaw = $tischabeaw["wday"];
				
				if ( $wochentagtischabeaw == 6 ) {
								if ( $hebrewDay == 10 && $hebrewMonthName == "Av" ) {
												echo "Tisha BeAw";
												 } 
								} 
				else
								 {
								if ( $hebrewDay == 9 && $hebrewMonthName == "Av" ) {
												echo "Tisha BeAw";
												 } 
								} 
				
				if ( istJuedischesSchaltjahr( intval( $hebrewMonth ) ) )
								 {
								$purimMonat = "AdarII";
								 $purimMonatNr = 7;
								} 
				else
								 {
								$purimMonat = "AdarI";
								 $purimMonatNr = 6;
								} 
				
				$jdtaanitesther = jewishtojd( $purimMonatNr, 13, $hebrewMonth );
				$taanitesther = getdate( jdtounix( $jdtaanitesther ) );
				$wochentagtaanitesther = $taanitesther["wday"];
				if ( $wochentagtaanitesther == 6 ) {
								if ( $hebrewDay == 11 && $hebrewMonthName == $purimMonat ) {
												echo "Taanit Esther";
												 } 
								} 
				else
								 {
								if ( $hebrewDay == 13 && $hebrewMonthName == $purimMonat ) {
												echo "Taanit Esther";
												 } 
								} 
				
				if ( $hebrewDay == 14 && $hebrewMonthName == $purimMonat ) {
								echo "Purim";
								} 
				
				if ( $hebrewDay == 10 && $hebrewMonthName == "Tishri" ) {
								echo "Yom Kipur<br>(Yizkor)";
								} 
				
				if ( $hebrewDay == 14 && $hebrewMonthName == "Nisan" ) {
								echo "Erev<br>Pesach\n";
								} 
				
				$stag = 14;
				for ( ;; ) {
								$jd = jewishtojd( $hebrewMonth, $stag, $hebrewMonth );
								 $wday = $jd % 7;
								 if ( $wday == 5 ) break;
								 $stag--;
								} 
				
				if ( $hebrewDay == $stag && $hebrewMonthName == "Nisan" ) {
								echo "Shabbat Hagadol";
								} 
				
				if ( $hebrewDay == 15 && $hebrewMonthName == "Nisan" ) {
								echo "1st day of<br>Pesach\n";
								} 
				
				if ( $hebrewDay == 16 && $hebrewMonthName == "Nisan" ) {
								echo "2nd day of<br>Pesach\n";
								} 
				
				if ( $hebrewDay == 17 && $hebrewMonthName == "Nisan" ) {
								echo "Chol Hamoed\n";
								} 
				
				if ( $hebrewDay == 18 && $hebrewMonthName == "Nisan" ) {
								echo "Chol Hamoed\n";
								} 
				
				if ( $hebrewDay == 19 && $hebrewMonthName == "Nisan" ) {
								echo "Chol Hamoed\n";
								} 
				
				
				if ( $hebrewDay == 20 && $hebrewMonthName == "Nisan" ) {
								echo "Chol Hamoed\n";
								} 
				
				if ( $hebrewDay == 21 && $hebrewMonthName == "Nisan" ) {
								echo "7th day of <br>Pesach\n";
								} 
				
				if ( $hebrewDay == 22 && $hebrewMonthName == "Nisan" ) {
								echo "8th day of<br>Pesach<br>(Yizkor)\n";
								} 
				
				if ( $hebrewDay == 10 && $hebrewMonthName == "Tevet" ) {
								echo "Tzom Tevet\n";
								} 
				
				if ( $hebrewDay == 15 && $hebrewMonthName == "Shevat" ) {
								echo "Tu Bi<br>Shevat\n";
								} 
				
				if ( $hebrewDay == 18 && $hebrewMonthName == "Iyyar" ) {
								echo "Lag Ba<br>Omer\n";
								} 
				
				if ( $hebrewDay == 15 && $hebrewMonthName == "Av" ) {
								echo "Tu Beav\n";
								} 
				
				if ( $hebrewDay == 15 && $hebrewMonthName == "Tishri" ) {
								echo "1st day of Sukot\n";
								} 
				
				if ( $hebrewDay == 16 && $hebrewMonthName == "Tishri" ) {
								echo "2nd day of Sukot\n";
								} 
				
				if ( $hebrewDay == 17 && $hebrewMonthName == "Tishri" ) {
								echo "Chol<br>Hamoed\n";
								} 
				
				if ( $hebrewDay == 18 && $hebrewMonthName == "Tishri" ) {
								echo "Chol<br>Hamoed\n";
								} 
				
				if ( $hebrewDay == 19 && $hebrewMonthName == "Tishri" ) {
								echo "Chol<br>Hamoed\n";
								} 
				
				if ( $hebrewDay == 20 && $hebrewMonthName == "Tishri" ) {
								echo "Chol<br>Hamoed\n";
								} 
				
				if ( $hebrewDay == 21 && $hebrewMonthName == "Tishri" ) {
								echo "Hoshanah<br>Rabah\n";
								} 
				
				if ( $hebrewDay == 22 && $hebrewMonthName == "Tishri" ) {
								echo "Shemini<br>Atzeret<br>(Yizkor)\n";
								} 
				
				if ( $hebrewDay == 23 && $hebrewMonthName == "Tishri" ) {
								echo "Simchat<br>Thorah\n";
								} 
				
				if ( $hebrewDay == 25 && $hebrewMonthName == "Kislev" ) {
								echo "1st day of Chanukah\n";
								} 
				
				if ( $hebrewDay == 26 && $hebrewMonthName == "Kislev" ) {
								echo "2nd day of Chanukah\n";
								} 
				
				if ( $hebrewDay == 27 && $hebrewMonthName == "Kislev" ) {
								echo "3rd day of Chanukah\n";
								} 
				
				if ( $hebrewDay == 28 && $hebrewMonthName == "Kislev" ) {
								echo "4th day of Chanukah\n";
								} 
				
				if ( $hebrewDay == 29 && $hebrewMonthName == "Kislev" ) {
								echo "5th day of Chanukah\n";
								} 
				
				$kislevLaenge = cal_days_in_month( CAL_JEWISH, 3, $hebrewYear );
				if ( $kislevLaenge == 29 ) { // If Kislev has got 29 days
								if ( $hebrewDay == 1 && $hebrewMonthName == "Tevet" ) {
												echo "6th day of Chanukah\n";
												 } 
								if ( $hebrewDay == 2 && $hebrewMonthName == "Tevet" ) {
												echo "7th day of Chanukah\n";
												 } 
								if ( $hebrewDay == 3 && $hebrewMonthName == "Tevet" ) {
												echo "8th day of Chanukah\n";
												 } 
								} else { // if Kislev has got 30 days
								if ( $hebrewDay == 30 && $hebrewMonthName == "Kislev" ) {
												echo "6th day of Chanukah\n";
												 } 
								if ( $hebrewDay == 1 && $hebrewMonthName == "Tevet" ) {
												echo "7th day of Chanukah\n";
												 } 
								if ( $hebrewDay == 2 && $hebrewMonthName == "Tevet" ) {
												echo "8th day of Chanukah\n";
												 } 
								} 
				
				if ( $hebrewDay == 6 && $hebrewMonthName == "Sivan" ) {
								echo "1st day of Schavuot\n";
								} 
				
				if ( $hebrewDay == 7 && $hebrewMonthName == "Sivan" ) {
								echo "2nd day Schavuot<br>(Yizkor)\n";
								} 
				
				// Hier enden Feiertage
				// Hier beginnen Israelische Staatsfeiertage
				if ( $hebrewDay == 28 && $hebrewMonthName == "Iyyar" ) {
								echo "Yom Yerushalaim";
								} 
				
				if ( $hebrewDay == 14 && $hebrewMonthName == "Iyyar" ) {
								echo "Pesach Sheni";
								} 
				
				if ( istJuedischesSchaltjahr( $hebrewYear ) ) {
								if ( $hebrewDay == 14 && $hebrewMonthName == "AdarI" ) {
												echo "Purim Katan";
												 } 
								} 
				
				if ( istJuedischesSchaltjahr( $hebrewYear ) ) {
								if ( $hebrewDay == 15 && $hebrewMonthName == "AdarI" ) {
												echo "Shushan Purim<br>Katan";
												 } 
								} 
				
				if ( $hebrewDay == 15 && $hebrewMonthName == $purimMonat ) {
								echo "Shushan Purim";
								} 
				
				// **********************Be careful, now it will be difficult!******************************
				// 5 Iyar
				$jdHatzmaut = jewishtojd( 9, 5, $hebrewYear );
				$Hatzmaut = getdate( jdtounix( $jdHatzmaut ) );
				$wochentagHatzmaut = $Hatzmaut["wday"];
				
				if ( $year >= 2004 && $wochentagHatzmaut == 1 && $hebrewDay == 6 && $hebrewMonthName == "Iyyar" ) {
								echo "Yom Haatzmaut";
								} else {
								if ( $wochentagHatzmaut == 6 ) { // Saturday
												if ( $hebrewDay == 3 && $hebrewMonthName == "Iyyar" ) {
																echo "Yom Haatzmaut";
																 } 
												} 
								else
												 {
												if ( $wochentagHatzmaut == 5 ) { // Friday
																if ( $hebrewDay == 4 && $hebrewMonthName == "Iyyar" ) {
																				echo "Yom Haatzmaut";
																				 } 
																} else {
																if ( $year >= 2004 && $wochentagHatzmaut == 1 ) {
																				;
																				 } else {
																				if ( $hebrewDay == 5 && $hebrewMonthName == "Iyyar" ) {
																								echo "Yom Haatzmaut";
																								 } 
																				} 
																} 
												} 
								} 
				
				// ##################################################################
				// 4 Iyar
				$jdHazikaron = jewishtojd( 9, 4, $hebrewYear );
				$Hazikaron = getdate( jdtounix( $jdHazikaron ) );
				$wochentagHazikaron = $Hazikaron["wday"];
				
				if ( $year >= 2004 && $wochentagHazikaron == 0 && $hebrewDay == 5 && $hebrewMonthName == "Iyyar" ) {
								echo "Yom Hazikaron";
								} else {
								if ( $wochentagHazikaron == 5 ) { // Freitag
												if ( $hebrewDay == 2 && $hebrewMonthName == "Iyyar" ) {
																echo "Yom Hazikaron";
																 } 
												} 
								else
												 {
												if ( $wochentagHazikaron == 4 ) { // Donnerstag
																if ( $hebrewDay == 3 && $hebrewMonthName == "Iyyar" ) {
																				echo "Yom Hazikaron";
																				 } 
																} 
												else
																 {
																if ( $year >= 2004 && $wochentagHazikaron == 0 ) {
																				;
																				 } else {
																				if ( $hebrewDay == 4 && $hebrewMonthName == "Iyyar" ) {
																								echo "Yom Hazikaron";
																								 } 
																				} 
																} 
												} 
								} 
				
				// ******************************************************************************************
				// ******************************************************************************************
				// ***************************************Yom Hashoa************************************
				$jdHaschoa = jewishtojd( 8, 27, $hebrewYear );
				$Haschoa = getdate( jdtounix( $jdHaschoa ) );
				$wochentagHaschoa = $Haschoa["wday"];
				
				if ( $year >= 1997 && $wochentagHaschoa == 0 && $hebrewDay == 28 && $hebrewMonthName == "Nisan" ) {
								echo "Yom Hashoa";
								} else {
								if ( $wochentagHaschoa == 6 ) { // also Samstag
												
												if ( $hebrewDay == 25 && $hebrewMonthName == "Nisan" ) {
																echo "Yom Hashoa";
																 } 
												} 
								else
												 {
												if ( $wochentagHaschoa == 5 ) { // also Freitag
																
																if ( $hebrewDay == 26 && $hebrewMonthName == "Nisan" ) {
																				echo "Yom Hashoa";
																				 } 
																} 
												else
																 {
																if ( $year >= 1997 && $wochentagHaschoa == 0 && $hebrewDay == 27 && $hebrewMonthName == "Nisan" ) {
																				;
																				 } else {
																				if ( $hebrewDay == 27 && $hebrewMonthName == "Nisan" ) {
																								echo "Yom Hashoa";
																								 } 
																				} 
																} 
												} 
								} 
				
				echo "</font>\n";
				
				
				// ********************************End of Yom Hashoa*************************************
				// ******************************************************************************************
				// ******************************************************************************************
				if ( date( 'D', mktime( 0, 0, 0, $month, $day, $year ) ) == "Sat" ) { // Saturday
        echo "Šabat ";
								$holidayLinks = getLinkForShabbatHolidayReading( $hebrewMonth, $hebrewDay, $hebrewYear );
  if ($holidayLinks != "") {
    $holidayLinkCount = count($holidayLinks);
    for ($holidayLinkIndex = 0; $holidayLinkIndex < $holidayLinkCount; $holidayLinkIndex++) {
      $holidayLink = $holidayLinks[$holidayLinkIndex];
      echo makeLink($holidayLink) . "&nbsp;";
    }
  }
  else echo "bla";
}
}
?>
&ldquo;&ldquo;&ldquo;&ldquo;<?php
echo $den . ". " . $mesic2 . " " . $rok . " v " . $activelocation . ", v hebrejském kalendáři ";
// echo "</br>První sluneční paprsky:" . $val6;
// echo "</br>Nauticky ranní soumrak:" . $val5;
// echo "</br>Je už vidět:" . $val4;
// echo "</br>Východ slunce:" . $vychod;
//echo "a pravé poledne:" . $val9;
// echo "</br>Západ slunce:" . $zapad;
// echo "</br>Občanský soumrak:" . $val1;
// echo "</br>Havdala 3 male hvězdy:" . $havdala[0] . ":" . $havdala[1] . "\n";
// echo "</br>Hvězdy jsou již zřetelné:" . $val2;
// echo "</br>Naprostá tma:" . $val3;
$pocetdni = date( 'w', mktime( 0, 0, 0, $mesic, $den, $rok ) );

Hdate( $mesic, $den, $rok, $pocetdni, 1 ); 
echo "Slunce vychází v " . $vychod . " a zapadá v " . $zapad." a pravé poledne je v:" . $val9;;
$datum0 = mktime( 0, 0, 0, $mesic, $den, $rok );
// výpočet východu a západu slunce
$zenith0 = 90 + 50 / 60;
$vychod0 = date_sunrise( $datum0, SUNFUNCS_RET_TIMESTAMP, $sirka, $delka, $zenith0, $zona );
$zapad0 = date_sunset( $datum0, SUNFUNCS_RET_TIMESTAMP, $sirka, $delka, $zenith0, $zona );
$vychod0 = date( 'H:i:s', $vychod0 );
$zapad0 = date( 'H:i:s', $zapad0 );
// echo "<br/>Dnes $den. $mesic2 $rok vychází slunce v $vychod0 a zapadá v $zapad0, konec hlášení...<br/>";
// výpočet východu a západu slunce
// přidává minuty k minutám a hodinám pokud jsou v dvoumístném poli
function AddMinuty( $time, $min )


{
				 if ( $time == "" ) return "";
				 $time2 = $time;
				 $time2[1] += $min;
				 while ( $time2[1] >= 60 ) {
								$time2[1] -= 60;
								 $time2[0]++;
								 if ( $time2[0] >= 24 )
												 $time2[0] = "0";
								 } 
				return $time2;
				 } 
// přidává minuty k minutám a hodinám
function SubtractMinuty( $time, $min )


{
				 if ( $time == "" ) return "";
				 $time2 = $time;
				 $time2[1] -= $min;
				 while ( $time2[1] < 0 ) {
								$time2[1] += 60;
								 $time2[0]--;
								 } 
				return $time2;
				 if ( $time2[0] <= 0 )
								 $time2[0] = "24";
				 } 


// rozdělí hodiny od minut a předá je do dvoumístního pole
$hodinyV = $vychod[0] . $vychod[1];
$minutyV = $vychod[3] * 10 + $vychod[4];
$sekundyV = $vychod[6] * 10 + $vychod[7];
$CasVychodu0 = $hodinyV * 60 + $minutyV;
$CasVychodu = array( $hodinyV, $minutyV, $sekundyV );

// rozdělí hodiny od minut a předá je do dvoumístního pole
$hodinyZ = $zapad[0] . $zapad[1];
$minutyZ = $zapad[3] * 10 + $zapad[4];
$sekundyZ = $zapad[6] * 10 + $zapad[7];
$CasZapadu0 = $hodinyZ * 60 + $minutyZ;
$CasZapadu = array( $hodinyZ, $minutyZ, $sekundyZ );
// rozdělí hodiny od minut a předá je do dvoumístního pole
$CasHms = $hodinyZ * 3600 + $minutyZ * 60 + $sekundyZ;

// zjisti zda je patek
if ( date( 'D', mktime( 0, 0, 0, $mesic, $den, $rok ) ) == "Fri" ) {
				// zjisti kolik je 18 min. pred zapadem
				$sabatminuty = $CasZapadu[1]-18;
				 $sabathodiny = $CasZapadu[0];
				 if ( $sabatminuty < 0 ) {
								$sabathodiny = $CasZapadu[0]-1;
								 $sabatminuty = 60 + $sabatminuty;
				} 
				if ( $sabatminuty <= 60 and $sabatminuty > 0 ) {
								if ( $sabatminuty < 10 ) {
												$sabatminuty = "0" . $sabatminuty;
												 } 
								$sabathodiny = $CasZapadu[0];
								 } 
				if ( $sabatminuty == 60 and $sabatminuty >= 0 ) {
								$sabatminuty = "00";
								 $sabathodiny = $CasZapadu[0];
								 } 
				echo "</br>Začátek šabatu:" . $sabathodiny . ":" . $sabatminuty . "</br>";

} 
if ( date( 'D', mktime( 0, 0, 0, $mesic, $den, $rok ) ) == "Sat" ) {
        //************************ TORAH SECTIONS

	$torasections = getTorahSections($hebrewMonth, $hebrewDay, $hebrewYear);
	if ($torasections != "") {
  echo "            <font color=\"blue\" face=\"Courier New\">";
		echo "$torasections";
  echo "ggggggggggggggggggggggggggggggggggggggg</font>\n";
	}
	}
$roshCh = isRoshHodesh( $hebrewDay, $hebrewMonth);
if ($roshCh == true){ echo "R.CH"; }

if (omerzaehlen($hebrewDay, $hebrewMonth, $hebrewYear) > "0") {echo "Omer".omerzaehlen($hebrewDay, $hebrewMonth, $hebrewYear); }

// snaha vypocitat stupne slunce pod horizontem
$val1_ = $val1;
$val2_ = $val2;

$val1_NH = $val1_[0] . $val1_[1];
$val1_NM = $val1_[3] * 10 + $val1_[4];
$val1_NS = $val1_[6] * 10 + $val1_[7];
$val1_total = ( $val1_NH * 60 * 60 ) + ( $val1_NM * 60 ) + $val1_NS;

$val2_NH = $val2_[0] . $val2_[1];
$val2_NM = $val2_[3] * 10 + $val2_[4];
$val2_NS = $val2_[6] * 10 + $val2_[7];

$val3_NH = $val2_NH - $val1_NH;
$val3_NM = $val2_NM - $val1_NM;
$val3_NS = $val2_NS - $val1_NS;

$val3_NS_S = ( $val3_NH * 60 * 60 ) + ( $val3_NM * 60 ) + $val3_NS;
$val3_NS_S = ( $val3_NS_S / 1000 ) * 370;
$val3_NS_S = $val3_NS_S + $val1_total;

$havdala_prumer = explode( ':', hms( $val3_NS_S ) );
$havdala_prumer[0] = ( double )$havdala_prumer[0];
$havdala_prumer[1] = ( double )$havdala_prumer[1];
$havdala_prumer[2] = ( double )$havdala_prumer[2];
$val3_NS_S = $havdala_prumer[0] . ":" . $havdala_prumer[1] . ":" . $havdala_prumer[2];
$havdala = $havdala[0] . ":" . $havdala[1] . ":29";
$input = array( $val3_NS_S, $havdala );
$output = date( 'H:i:s', array_sum( array_map( 'strtotime', $input ) ) / count( $input ) );
// echo "</br>Průměrný čas tří malých hvězd:" . $output . "\n</br>";
// vypocita nejpozdejsi cas z obou variant
if ( $val3_NS_S >= $havdala ) {
				$havdalaNahoru = $val3_NS_S;
				 } 
else {
				$havdalaNahoru = $havdala;
				 } 
$havdalaNahoru = explode( ':', $havdalaNahoru );
if ( $havdalaNahoru[2] > 29 ) {
				$havdalaNahoru[1] = $havdalaNahoru[1] + 1;
				 } 
if ( $havdalaNahoru[1] < 10 ) {
				$havdalaNahoru[1] = "0" . $havdalaNahoru[1];
				 } 
 
$havdalaNahoru = $havdalaNahoru[0] . ":" . $havdalaNahoru[1];
echo "</br>Východ tří malých hvězd:" . $havdalaNahoru . "\n</br>";
// $val3_ = date("H:i:s", $val3);
// $Val2_NH = $Val2_NH - $val1_V;
// $zmanit_minut = $minutyZ - $minutyV;
// $zmanit_sekundy = $sekundyZ - $sekundyV;
// $zmanit_nasekund = ($zmanit_hodin * 60 * 60) + ($zmanit_minut * 60) + $zmanit_sekundy;
// echo "</br>Toto je cas východu tří malých hvězd: " . $val3_NS_S . "</br>";
// výpočet východu hvězd dle Rabejnu Tam +72 min.
$tam72 = AddMinuty( $CasZapadu, 72 );
echo "Východ hvězd dle Rabejnu Tama (72 neproporcionálních minut): " . $tam72[0] . ":" . $tam72[1] . "<br/>";;

// výpočet východu hvězd dle Rabejnu Tam +90 min.
$tam90 = AddMinuty( $CasZapadu, 90 );
echo "Východ hvězd dle Rabejnu Tama (90 neproporcionálních minut): " . $tam90[0] . ":" . $tam90[1] . "<br/>";

// výpočet východu hvězd dle Rabejnu Tam +120 min.
$tam120 = AddMinuty( $CasZapadu, 120 );
echo "Východ hvězd dle Rabejnu Tama (120 neproporcionálních minut): " . $tam120[0] . ":" . $tam120[1] . "<br/>";

$MaharshalTam72Shma = AddMinuty( $tam72, 900 );
echo "Konec čtení Šema dle Mahršala a Rabejnu Tama (72 neproporcionálních minut): " . $MaharshalTam72Shma[0] . ":" . $MaharshalTam72Shma[1] . "<br/>";

$MaharshalTam90Shma = AddMinuty( $tam90, 900 );
echo "Konec čtení Šema dle Mahršala a Rabejnu Tama (90 neproporcionálních minut): " . $MaharshalTam90Shma[0] . ":" . $MaharshalTam90Shma[1] . "<br/>";

$MaharshalTam120Shma = AddMinuty( $tam120, 900 );
echo "Konec čtení Šema dle Mahršala a Rabejnu Tama (120 neproporcionálních minut): " . $MaharshalTam120Shma[0] . ":" . $MaharshalTam120Shma[1] . "<br/>";

$zmanit_hodin = $hodinyZ - $hodinyV;
$zmanit_minut = $minutyZ - $minutyV;
$zmanit_sekundy = $sekundyZ - $sekundyV;
$zmanit_nasekund = ( $zmanit_hodin * 60 * 60 ) + ( $zmanit_minut * 60 ) + $zmanit_sekundy;
$zmanit_naminut = $zmanit_nasekund / 60;
$zmanit = $zmanit_naminut / 12;
$zmanitS = $zmanit_nasekund / 12 / 12;
settype( $zmanit, 'string' );
settype( $zmanitS, 'string' );
$minutyP = $zmanit[0] . $zmanit[1];
$sekundyP = $zmanitS[0] * 10 + $zmanitS[1];
$CasZmanit = array( $minutyP, $sekundyP );
echo "<br>zmanit = " . $zmanit[0] . $zmanit[1] . ":" . $zmanit_sekundy . " min.<br><br>";
// výsledek funkce hms, která převádí sekundy na hodiny, minuty a sekundy
$zmanitB = $zmanit * 60;
echo hms( $zmanitB ) . "<br>";

vypocet_casu( $zmanit, $CasVychodu0, 3, 0, 'Sof zman kriat šmá: ' );
vypocet_casu( $zmanit, $CasVychodu0, 4, 0, 'Sof zman tfila: ' );
vypocet_casu( $zmanit, $CasVychodu0, 6, 0, 'Chacot hajom: ' );
vypocet_casu( $zmanit, $CasVychodu0, 6, 30, 'Mincha gedola: ' );
vypocet_casu( $zmanit, $CasVychodu0, 9, $zmanit / 2, 'Mincha ketana: ' );
// výpočet jeciat šabat
vypocet_casu( 60, $CasZapadu0, 1, 12, 'Tcejt hakochavim tam 72 nepr.: ' );
$daka_zmanit = $zmanit / 60;
vypocet_casu( $zmanit, $CasZapadu0, 0, $daka_zmanit * 18, 'Tcejt hakochavim 18 proporcionalnich minut: ' );
vypocet_casu( $zmanit, $CasZapadu0, 0, ( $daka_zmanit * 72 ), 'Jeciat šabat tam proporcional: ' );


$shma = AddMinuty( $CasVychodu, $zmanit * 3 );
echo "....................................<br/>Čas čtení šmá dle Gaona a Baal haTanja: " . $shma[0] . ":" . $shma[1] . "<br/>";


$zapad_tichnut = explode( ':', $zapad );
?>
</body></html>