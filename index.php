<!DOCTYPE html>
<html lang="cs">
<head>
    <meta charset="utf-8" />
    <title>
      Luach zmanim - Výpočet časů pro židovské modlitby a začátky i konce svátků
    </title>
    <meta http-equiv="Content-Language" content="cs">  
  <link href="normalizace.css" rel="stylesheet"> 
   <link href="select2_js_css/select2.min.css" rel="stylesheet">  
     <link rel="stylesheet" href="jquery_js_css/jquery-ui.css"> <!-- pro flex i pick -->
  <link rel="stylesheet" href="flexcal_min_js_css/flexcal.css"> <!-- pro flex -->
   <link rel="stylesheet" href="jquery_js_css/svatky.css"> <!-- pro flex --> 
  	<style>
.wp-core-ui .button,.wp-core-ui .button-primary,.wp-core-ui .button-secondary{display:inline-block;text-decoration:none;font-size:13px;line-height:26px;height:28px;margin:0;padding:0 10px 1px;cursor:pointer;border-width:1px;border-style:solid;-webkit-appearance:none;-webkit-border-radius:3px;border-radius:3px;white-space:nowrap;-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box}.wp-core-ui button::-moz-focus-inner,.wp-core-ui input[type=button]::-moz-focus-inner,.wp-core-ui input[type=reset]::-moz-focus-inner,.wp-core-ui input[type=submit]::-moz-focus-inner{border-width:0;border-style:none;padding:0}.wp-core-ui .button-group.button-large .button,.wp-core-ui .button.button-large{height:30px;line-height:28px;padding:0 12px 2px}.wp-core-ui .button-group.button-small .button,.wp-core-ui .button.button-small{height:24px;line-height:22px;padding:0 8px 1px;font-size:11px}.wp-core-ui .button-group.button-hero .button,.wp-core-ui .button.button-hero{font-size:14px;height:46px;line-height:44px;padding:0 36px}.wp-core-ui .button:active,.wp-core-ui .button:focus{outline:0}.wp-core-ui .button.hidden{display:none}.wp-core-ui input[type=reset],.wp-core-ui input[type=reset]:active,.wp-core-ui input[type=reset]:focus,.wp-core-ui input[type=reset]:hover{background:0 0;border:none;-webkit-box-return ":none;box-return ":none;padding:0 2px 1px;width:auto}.wp-core-ui .button,.wp-core-ui .button-secondary{color:#555;border-color:#ccc;background:#f7f7f7;-webkit-box-return ":inset 0 1px 0 #fff,0 1px 0 rgba(0,0,0,.08);box-return ":inset 0 1px 0 #fff,0 1px 0 rgba(0,0,0,.08);vertical-align:top}.wp-core-ui p .button{vertical-align:baseline}.wp-core-ui .button-secondary:focus,.wp-core-ui .button-secondary:hover,.wp-core-ui .button.focus,.wp-core-ui .button.hover,.wp-core-ui .button:focus,.wp-core-ui .button:hover{background:#fafafa;border-color:#999;color:#23282d}.wp-core-ui .button-secondary:focus,.wp-core-ui .button.focus,.wp-core-ui .button:focus{-webkit-box-return ":0 0 0 1px #5b9dd9,0 0 2px 1px rgba(30,140,190,.8);box-return ":0 0 0 1px #5b9dd9,0 0 2px 1px rgba(30,140,190,.8)}.wp-core-ui .button-secondary:active,.wp-core-ui .button.active,.wp-core-ui .button.active:hover,.wp-core-ui .button:active{background:#eee;border-color:#999;color:#32373c;-webkit-box-return ":inset 0 2px 5px -3px rgba(0,0,0,.5);box-return ":inset 0 2px 5px -3px rgba(0,0,0,.5)}.wp-core-ui .button.active:focus{-webkit-box-return ":inset 0 2px 5px -3px rgba(0,0,0,.5),0 0 0 1px #5b9dd9,0 0 2px 1px rgba(30,140,190,.8);box-return ":inset 0 2px 5px -3px rgba(0,0,0,.5),0 0 0 1px #5b9dd9,0 0 2px 1px rgba(30,140,190,.8)}.wp-core-ui .button-disabled,.wp-core-ui .button-secondary.disabled,.wp-core-ui .button-secondary:disabled,.wp-core-ui .button-secondary[disabled],.wp-core-ui .button.disabled,.wp-core-ui .button:disabled,.wp-core-ui .button[disabled]{color:#a0a5aa!important;border-color:#ddd!important;background:#f7f7f7!important;-webkit-box-return ":none!important;box-return ":none!important;text-return ":0 1px 0 #fff!important;cursor:default}.wp-core-ui .button-primary{background:#00a0d2;border-color:#0073aa;-webkit-box-return ":inset 0 1px 0 rgba(120,200,230,.5),0 1px 0 rgba(0,0,0,.15);box-return ":inset 0 1px 0 rgba(120,200,230,.5),0 1px 0 rgba(0,0,0,.15);color:#fff;text-decoration:none}.wp-core-ui .button-primary.focus,.wp-core-ui .button-primary.hover,.wp-core-ui .button-primary:focus,.wp-core-ui .button-primary:hover{background:#0091cd;border-color:#0073aa;-webkit-box-return ":inset 0 1px 0 rgba(120,200,230,.6);box-return ":inset 0 1px 0 rgba(120,200,230,.6);color:#fff}.wp-core-ui .button-primary.focus,.wp-core-ui .button-primary:focus{border-color:#0e3950;-webkit-box-return ":inset 0 1px 0 rgba(120,200,230,.6),0 0 0 1px #5b9dd9,0 0 2px 1px rgba(30,140,190,.8);box-return ":inset 0 1px 0 rgba(120,200,230,.6),0 0 0 1px #5b9dd9,0 0 2px 1px rgba(30,140,190,.8)}.wp-core-ui .button-primary.active,.wp-core-ui .button-primary.active:focus,.wp-core-ui .button-primary.active:hover,.wp-core-ui .button-primary:active{background:#0073aa;border-color:#005082;color:rgba(255,255,255,.95);-webkit-box-return ":inset 0 1px 0 rgba(0,0,0,.1);box-return ":inset 0 1px 0 rgba(0,0,0,.1);vertical-align:top}.wp-core-ui .button-primary-disabled,.wp-core-ui .button-primary.disabled,.wp-core-ui .button-primary:disabled,.wp-core-ui .button-primary[disabled]{color:#94cde7!important;background:#298cba!important;border-color:#1b607f!important;-webkit-box-return ":none!important;box-return ":none!important;text-return ":0 -1px 0 rgba(0,0,0,.1)!important;cursor:default}.wp-core-ui .button-group{position:relative;display:inline-block;white-space:nowrap;font-size:0;vertical-align:middle}.wp-core-ui .button-group>.button{display:inline-block;-webkit-border-radius:0;border-radius:0;margin-right:-1px;z-index:10}.wp-core-ui .button-group>.button-primary{z-index:100}.wp-core-ui .button-group>.button:hover{z-index:20}.wp-core-ui .button-group>.button:first-child{-webkit-border-radius:3px 0 0 3px;border-radius:3px 0 0 3px}.wp-core-ui .button-group>.button:last-child{-webkit-border-radius:0 3px 3px 0;border-radius:0 3px 3px 0}.wp-core-ui .button-group>.button:focus{position:relative;z-index:1}@media screen and (max-width:782px){.wp-core-ui .button,.wp-core-ui .button.button-large,.wp-core-ui .button.button-small,a.preview,input#publish,input#save-post{padding:6px 14px;line-height:normal;font-size:14px;vertical-align:middle;height:auto;margin-bottom:4px}#media-upload.wp-core-ui .button{padding:0 10px 1px;height:24px;line-height:22px;font-size:13px}.media-frame.mode-grid .bulk-select .button{margin-bottom:0}.wp-core-ui .save-post-status.button{position:relative;margin:0 14px 0 10px}.wp-core-ui.wp-customizer .button{padding:0 10px 1px;font-size:13px;line-height:26px;height:28px;margin:0;vertical-align:inherit}.interim-login .button.button-large{height:30px;line-height:28px;padding:0 12px 2px}}
html{background:#f1f1f1;margin:0 20px}body{background:#fff;color:#444;font-family:"Open Sans",sans-serif;margin:140px auto 25px;padding:20px 20px 10px;max-width:700px;background-color:rgb(240,248,255);-webkit-font-smoothing:subpixel-antialiased;-webkit-box-return ":0 1px 3px rgba(0,0,0,.13);box-return ":0 1px 3px rgba(0,0,0,.13)}a{color:#0073aa;text-decoration:none}a:hover{color:#00a0d2}h1{border-bottom:1px solid #dedede;clear:both;color:#666;font-size:24px;margin:30px 0;padding:0 0 7px;font-weight:400}h2{font-size:16px}dd,dt,li,p{padding-bottom:2px;font-size:14px;line-height:1.5}.code,code{font-family:Consolas,Monaco,monospace}dl,ol,ul{padding:5px 5px 5px 22px}a img{border:0}abbr{border:0;font-variant:normal}label{cursor:pointer}#logo{margin:6px 0 14px;border-bottom:none;text-align:center}#logo a{background-image:url(images/menora_hodiny.png);background-image:none,url(images/menora_hodiny.png);-webkit-background-size:84px;background-size:121px;background-position:center top;background-repeat:no-repeat;color:#999;height:121px;font-size:20px;font-weight:400;line-height:1.3em;margin:-130px auto 25px;padding:0;text-decoration:none;width:121px;text-indent:-9999px;outline:0;overflow:hidden;display:block}.step{margin:20px 0 15px}.step,th{text-align:left;padding:0}.language-chooser.wp-core-ui .step .button.button-large{height:36px;vertical-align:middle;font-size:14px}textarea{border:1px solid #dfdfdf;font-family:"Open Sans",sans-serif;width:100%;-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box}.form-table{border-collapse:collapse;margin-top:1em;width:100%}.form-table td{margin-bottom:9px;padding:10px 20px 10px 0;border-bottom:8px solid #fff;font-size:14px;vertical-align:top}.form-table th{font-size:14px;text-align:left;padding:16px 20px 10px 0;width:100px;vertical-align:top}.form-table code{line-height:18px;font-size:14px}.form-table p{margin:4px 0 0;font-size:11px}.form-table input{line-height:20px;font-size:15px;padding:3px 5px; margin: 2px; border:1px solid #ddd;-webkit-box-return ":inset 0 1px 2px rgba(0,0,0,.07);box-return ":inset 0 1px 2px rgba(0,0,0,.07)}input,submit{font-family:"Open Sans",sans-serif}.form-table input[type=email],.form-table input[type=password],.form-table input[type=text],.form-table input[type=url]{width:206px}.form-table th p{font-weight:400}.form-table.install-success td{vertical-align:middle;padding:16px 20px 10px 0}.form-table.install-success td p{margin:0;font-size:14px}.form-table.install-success td code{margin:0;font-size:18px}#error-page{margin-top:50px}#error-page p{font-size:14px;line-height:18px;margin:25px 0 20px}#error-page code,.code{font-family:Consolas,Monaco,monospace}#pass-strength-result{background-color:#eee;border-color:#ddd!important;border-style:solid;border-width:1px;margin:5px 5px 5px 0;padding:5px;text-align:center;width:200px;display:none}#pass-strength-result.bad{background-color:#ffb78c;border-color:#ff853c!important}#pass-strength-result.good{background-color:#ffec8b;border-color:#fc0!important}#pass-strength-result.short{background-color:#ffa0a0;border-color:#f04040!important}#pass-strength-result.strong{background-color:#c3ff88;border-color:#8dff1c!important}.message{border:1px solid #c00;padding:.5em .7em;margin:5px 0 15px;background-color:#ffebe8}#admin_email,#dbhost,#dbname,#pass1,#pass2,#prefix,#pwd,#uname,#user_login{direction:ltr}.rtl input,.rtl submit,.rtl textarea,body.rtl{font-family:Tahoma,sans-serif}:lang(he-il) .rtl input,:lang(he-il) .rtl submit,:lang(he-il) .rtl textarea,:lang(he-il) body.rtl{font-family:Arial,sans-serif}@media only screen and (max-width:799px){body{margin-top:115px}#logo a{margin:-125px auto 30px}}@media screen and (max-width:782px){.form-table{margin-top:0}.form-table td,.form-table th{display:block;width:auto;vertical-align:middle}.form-table th{padding:20px 0 0}.form-table td{padding:5px 0;border:0;margin:0}input,textarea{font-size:16px}.form-table span.description,.form-table td input[type=email],.form-table td input[type=password],.form-table td input[type=text],.form-table td input[type=url],.form-table td select,.form-table td textarea{width:100%;font-size:16px;line-height:1.5;padding:7px 10px;display:block;max-width:250px;-webkit-box-sizing:border-box;-moz-box-sizing:border-box;box-sizing:border-box}}body.language-chooser{max-width:300px}.language-chooser select{padding:8px;width:100%;display:block;border:1px solid #ddd;background-color:#fff;color:#32373c;font-size:16px;font-family:Arial,sans-serif;font-weight:400}.language-chooser p{text-align:right}.screen-reader-input,.screen-reader-text{position:absolute;margin:-1px;padding:0;height:1px;width:1px;overflow:hidden;clip:rect(0 0 0 0);border:0}.spinner{background:url(../images/spinner.gif) 0 0/20px 20px no-repeat;-webkit-background-size:20px 20px;visibility:hidden;opacity:.7;filter:alpha(opacity=70);width:20px;height:20px;margin:2px 5px 0}.step .spinner{display:inline-block;margin-top:8px;margin-right:15px;vertical-align:top}@media print,(-webkit-min-device-pixel-ratio:1.25),(min-resolution:120dpi){.spinner{background-image:url(../images/spinner-2x.gif)}}
    .slunce {
} [class*="col-"] {
  padding-top: 2px;
  padding-bottom: 15px;
  background-color: #f5f9ed;
  background-color: rgba(96%,98%,93%);
  border: 0px solid #ddd;
  border: 0px solid rgba(86,61,124,.2);
}
.col-md-4 {
    width: 33.3333%; 
    float: left;
    min-height: 50px;
    padding-left: 2px;
    padding-right: 2px;
    position: relative;
    box-sizing: border-box;
}
.row {
margin-left: -0px;
    margin-right: -0px;
 margin-bottom: 5px;  }
   .row:after
  {
 clear: both;
  } 
 .row:after, .row:before 
{

display: table;
content: " ";
box-sizing: border-box;

  } 

 .col-md-4 img {
background-image: none, url("images/menora_hodiny.png");
    background-position: top center;
    background-repeat: no-repeat;
    
    color: #999;
    display: block;
    font-size: 20px;
    font-weight: 400;
    max-height: 121px;
    width: 100%;
    line-height: 1.3em;
    margin: 0px auto 10px;
    outline: 0 none;
    overflow: hidden;
    padding: 0;
    text-decoration: none;
    text-indent: -9999px;
    text-align: center; 
 }	</style>

  
  <script src="jquery_js_css/jquery-1.11.2.js"></script> <!-- pro flex i pick, starší verze jquery dle stránek s příkladem, s novou nezkoušel --> 
  <script src="jquery_js_css/jquery-ui.js"></script> <!-- pro flex i pick -->
  <script src="jquery_js_css/datepicker-cs.js"></script><!-- pro flex i pick, lokalizace --> 
  <script src="flexcal_min_js_css/jquery.textpopup.js"></script>  <!-- pro flex, zachovat toto pořadí načítání - nejdřív textpopup -->
  <script src="flexcal_min_js_css/jquery.flexcal.js"></script>  <!-- pro flex, zachovat pořadí toto pořadí načítání -->
  <script src="select2_js_css/select2.min.js"></script>  <!-- pro flex, zachovat pořadí toto pořadí načítání -->
  
  
  <script>
  $( document ).ready(function() {


        $('#flex3').flexcal({
        position: 'bl',
        calendars: [['cs', 'Český'], 'jewish', 'he-jewish'],
        
        });
        $(".js-example-basic-single").select2();
});
                                   
    </script>
 
</head>
<body class="wp-core-ui"> 
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
        
        
// Daylight Savings Time in the USA
//   Begin: First Sunday of April
//   End: Last Sunday of October
function isDaylightSavingsTime($month, $day, $year) {
  $jdDSTBegin = gregoriantojd(4, 1, $year); // 1 April
  while (jddayofweek($jdDSTBegin, 0) != 0) // gets the weekday, 0 = Sunday
    $jdDSTBegin++; // counts to the next day until Sunday

  $jdDSTEnd = gregoriantojd(10, 31, $year); // 31 October
  while (jddayofweek($jdDSTEnd, 0) != 0) // gets the weekday, 0 = Sunday
    $jdDSTEnd--; // counts to the previous day until Sunday

  $jdCurrent = gregoriantojd($month, $day, $year);
  if ($jdCurrent >= $jdDSTBegin && $jdCurrent < $jdDSTEnd)
    return true;
  else
    return false;
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
				 settype( $hodin, 'integer' );
				 $min = $c % 60;
         				 if ( $min < 0 ) {
								$hodin = $hodin-1;
								 $min = 60 + $min;
				} 
				if ( $min <= 60 and $min > 0 ) {
								if ( $min < 10 ) {
												$min = "0" . $min;
												 } 
								$hodin = $hodin;
								 } 
				if ( $min == 60 and $min >= 0 ) {
								$min = "00";
								 $hodin = $hodin;
								 } 
				 echo "<li>$co" . $hodin . ":" . $min . "</li>";
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
$alos = GetSunriseDegreesBelowHorizon($mesic, $den, $rok, 16.15, $location[0], $location[1], $location[2] );
if ($alos != "") {
if (isDaylightSavingsTime($mesic, $den, $rok))
      $alos = AddMinutes($alos, 60);
     
}
 else
    return false;
    
    
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
				 return "<a href=\"$href\" target=\"_blank\"><img src=\"torahicon.gif\" border=0></a></li>";
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
				 echo $hebrewDay . ".&nbsp;" . $hebrewYear."</p>";
				 //Hier fangen Feiertage an

echo "            <font color=\"#00607F\" face=\"Arial\">";

if($hebrewDay == 29 && $hebrewMonthName == "Elul") {
	echo "Erev Roš Hašana";
}	

if($hebrewDay == 1 && $hebrewMonthName == "Tishri") {
	echo "První den Roš Hašana";
}

if($hebrewDay == 2 && $hebrewMonthName == "Tishri") {
	echo "Druhý den Roš Hašana";
}

$jdTzomGedalia = jewishtojd(1, 3, $hebrewMonth);
$datumTzomGedalia = getdate(jdtounix($jdTzomGedalia));
$wochentagTzomGedalia = $datumTzomGedalia["wday"];

if ($wochentagTzomGedalia == 6) {
	if($hebrewDay == 4 && $hebrewMonthName == "Tishri") {
		echo "Půst Gedaliův";
	}
}

else
{
	if($hebrewDay == 3 && $hebrewMonthName == "Tishri") {
		echo "Půst Gedaliův";
	}
}

$jdtzomtammus = jewishtojd(11, 17, $hebrewMonth);
$tzomtammus = getdate(jdtounix($jdtzomtammus));
$wochentagTzomTammus = $tzomtammus["wday"];

if ($wochentagTzomTammus == 6) {

	if($hebrewDay == 18 && $hebrewMonthName == "Tammuz") {
		echo "Půst sedmnáctého tamuzu";
	}
}
else
{
	if($hebrewDay == 17 && $hebrewMonthName == "Tammuz") {
		echo "Půst sedmnáctého tamuzu";
	}
}

$jdtischabeaw = jewishtojd(12, 9, $hebrewMonth);
$tischabeaw = getdate(jdtounix($jdtischabeaw));
$wochentagtischabeaw = $tischabeaw["wday"];

if ($wochentagtischabeaw == 6) {
	if($hebrewDay == 10 && $hebrewMonthName == "Av") {
		echo "Půst devátého avu";
	}
}
else
{
	if($hebrewDay == 9 && $hebrewMonthName == "Av") {
		echo "Půst devátého avu";
	}
}

if (istJuedischesSchaltjahr(intval($hebrewMonth)))
{
	$purimMonat = "AdarII";
	$purimMonatNr = 7;
}
else
{
	$purimMonat = "AdarI";
	$purimMonatNr = 6;
}

$jdtaanitesther = jewishtojd($purimMonatNr, 13, $hebrewMonth);
$taanitesther = getdate(jdtounix($jdtaanitesther));
$wochentagtaanitesther = $taanitesther["wday"];
if ($wochentagtaanitesther == 6) {
	if ($hebrewDay == 11 && $hebrewMonthName == $purimMonat) {
		echo "Půst esteřin";
	}
}
else
{
	if ($hebrewDay == 13 && $hebrewMonthName == $purimMonat) {
		echo "Půst esteřin";
	}
}

if ($hebrewDay == 14 && $hebrewMonthName == $purimMonat) {
	echo "Purim";
}

if($hebrewDay == 10 && $hebrewMonthName == "Tishri") {
	echo "Jom Kipur (Yizkor)";
}

if($hebrewDay == 14 && $hebrewMonthName == "Nisan") {
	echo "Předvečer Pesachu\n";
}

$stag = 14;
for (;;) {
	$jd = jewishtojd($hebrewMonth, $stag, $hebrewMonth);
	$wday = $jd % 7;
	if ($wday == 5) break;
	$stag--;
}

if($hebrewDay == $stag && $hebrewMonthName == "Nisan") {
	echo "Šabat Hagadol";
}

if($hebrewDay == 15 && $hebrewMonthName == "Nisan") {
	echo "První den Pesachu\n";
}

if($hebrewDay == 16 && $hebrewMonthName == "Nisan") {
	echo "druhý den Pesachu\n";
}

if($hebrewDay == 17 && $hebrewMonthName == "Nisan") {
	echo "Pesach Chol Hamoed\n";
}

if($hebrewDay == 18 && $hebrewMonthName == "Nisan") {
	echo "Pesach Chol Hamoed\n";
}

if($hebrewDay == 19 && $hebrewMonthName == "Nisan") {
	echo "Pesach Chol Hamoed\n";
}


if($hebrewDay == 20 && $hebrewMonthName == "Nisan") {
	echo "Pesach Chol Hamoed\n";
}

if($hebrewDay == 21 && $hebrewMonthName == "Nisan") {
	echo "Sedmý den Pesachu\n";
}

if($hebrewDay == 22 && $hebrewMonthName == "Nisan") {
	echo "Osmý den Pesachu (Jizkor)\n";
}

if($hebrewDay == 10 && $hebrewMonthName == "Tevet") {
	echo "Půst desátého Tevetu\n";
}

if($hebrewDay == 15 && $hebrewMonthName == "Shevat") {
	echo "Nový rok stromů\n";
}

if($hebrewDay == 18 && $hebrewMonthName == "Iyyar") {
	echo "Lag Ba-Omer\n";
}

if($hebrewDay == 15 && $hebrewMonthName == "Av") {
	echo "Tu Beav\n";
}

if($hebrewDay == 15 && $hebrewMonthName == "Tishri") {
	echo "První den Sukot\n";
}

if($hebrewDay == 16 && $hebrewMonthName == "Tishri") {
	echo "Druhý den Sukot\n";
}

if($hebrewDay == 17 && $hebrewMonthName == "Tishri") {
	echo "Sukot Chol&nbsp;Hamoed\n";
}

if($hebrewDay == 18 && $hebrewMonthName == "Tishri") {
	echo "Sukot Chol&nbsp;Hamoed\n";
}

if($hebrewDay == 19 && $hebrewMonthName == "Tishri") {
	echo "Sukot Chol&nbsp;Hamoed\n";
}

if($hebrewDay == 20 && $hebrewMonthName == "Tishri") {
	echo "Sukot Chol&nbsp;Hamoed\n";
}

if($hebrewDay == 21 && $hebrewMonthName == "Tishri") {
	echo "Hošana&nbsp;Raba\n";
}

if($hebrewDay == 22 && $hebrewMonthName == "Tishri") {
	echo "Šmini&nbsp;Aceret&nbsp;(Jizkor)\n";
}

if($hebrewDay == 23 && $hebrewMonthName == "Tishri") {
	echo "Simchat&nbsp;Tora\n";
}

if($hebrewDay == 25 && $hebrewMonthName == "Kislev") {
	echo "První den Chanuky\n";
}

if($hebrewDay == 26 && $hebrewMonthName == "Kislev") {
	echo "Druhý den Chanuky\n";
}

if($hebrewDay == 27 && $hebrewMonthName == "Kislev") {
	echo "Třetí den Chanuky\n";
}

if($hebrewDay == 28 && $hebrewMonthName == "Kislev") {
	echo "Čtvrtý den Chanuky\n";
}

if($hebrewDay == 29 && $hebrewMonthName == "Kislev") {
	echo "Pátý den Chanuky\n";
}

$kislevLaenge = cal_days_in_month(CAL_JEWISH, 3, $hebrewYear);
if ($kislevLaenge == 29) { // If Kislev has got 29 days
	if($hebrewDay == 1 && $hebrewMonthName == "Tevet") {
		echo "Šestý den Chanuky\n";
	}
	if($hebrewDay == 2 && $hebrewMonthName == "Tevet") {
		echo "Sedmý den Chanuky\n";
	}
	if($hebrewDay == 3 && $hebrewMonthName == "Tevet") {
		echo "Osmý den Chanuky\n";
	}
} else { // if Kislev has got 30 days
	if($hebrewDay == 30 && $hebrewMonthName == "Kislev") {
		echo "Šestý den Chanuky\n";
	}
	if($hebrewDay == 1 && $hebrewMonthName == "Tevet") {
		echo "Sedmý den Chanuky\n";
	}
	if($hebrewDay == 2 && $hebrewMonthName == "Tevet") {
		echo "Osmý den Chanuky\n";
	}
}

if($hebrewDay == 6 && $hebrewMonthName == "Sivan") {
	echo "První den Šavuot\n";
}

if($hebrewDay == 7 && $hebrewMonthName == "Sivan") {
	echo "Druhý den Šavuot&nbsp;(Jizkor)\n";
}

//Hier enden Feiertage

//Hier beginnen Israelische Staatsfeiertage

if($hebrewDay == 28 && $hebrewMonthName == "Iyyar") {
echo "Den Jerusaléma";
}

if($hebrewDay == 14 && $hebrewMonthName == "Iyyar") {
echo "Pesach šeni";
}

if(istJuedischesSchaltjahr($hebrewYear)) {
	if($hebrewDay == 14 && $hebrewMonthName == "AdarI") {
		echo "Purim Katan";
	}
}

if(istJuedischesSchaltjahr($hebrewYear)) {
	if($hebrewDay == 15 && $hebrewMonthName == "AdarI") {
		echo "Šušan Purim<br>Katan";
	}
}

if($hebrewDay == 15 && $hebrewMonthName == $purimMonat) {
	echo "Šušan Purim";
}

//**********************Be careful, now it will be difficult!******************************

// 5 Iyar
$jdHatzmaut = jewishtojd(9, 5, $hebrewYear);
$Hatzmaut = getdate(jdtounix($jdHatzmaut));
$wochentagHatzmaut = $Hatzmaut["wday"];

if($year >= 2004 && $wochentagHatzmaut == 1 &&$hebrewDay == 6 && $hebrewMonthName == "Iyyar") {
	echo "Jom Ha'acmaut";
} else {
	if($wochentagHatzmaut == 6) { // Saturday
		if($hebrewDay == 3 && $hebrewMonthName == "Iyyar") {
			echo "Jom Ha'acmaut";
		}
	 }
	else
	{
		if($wochentagHatzmaut == 5) { // Friday
			if($hebrewDay == 4 && $hebrewMonthName == "Iyyar") {
				echo "Jom Ha'acmaut";
			}
		} else {
			if ($year >= 2004 && $wochentagHatzmaut == 1) {
				;
			} else {
				if($hebrewDay == 5 && $hebrewMonthName == "Iyyar") {
					echo "Jom Ha'acmaut";
				}
			}
		}
	}
}

//##################################################################

// 4 Iyar
$jdHazikaron = jewishtojd(9, 4, $hebrewYear);
$Hazikaron = getdate(jdtounix($jdHazikaron));
$wochentagHazikaron = $Hazikaron["wday"];

if($year >= 2004 && $wochentagHazikaron == 0 &&$hebrewDay == 5 && $hebrewMonthName == "Iyyar") {
	echo "Yom Hazikaron";
} else {
	if($wochentagHazikaron == 5) { // Freitag
		if($hebrewDay == 2 && $hebrewMonthName == "Iyyar") {
			echo "Jom hazikaron";
		}
	}
	else
	{
		if($wochentagHazikaron == 4) { // Donnerstag
			if($hebrewDay == 3 && $hebrewMonthName == "Iyyar") {
							echo "Jom hazikaron";
			}
		}
		else
		{
			if ($year >= 2004 && $wochentagHazikaron == 0) {
				;
			} else {
				if($hebrewDay == 4 && $hebrewMonthName == "Iyyar") {
					echo "Jom hazikaron";
				}
			}
		}
	}
}

//******************************************************************************************
//******************************************************************************************

//***************************************Yom Hashoa************************************			
			
$jdHaschoa = jewishtojd(8, 27, $hebrewYear);
$Haschoa = getdate(jdtounix($jdHaschoa));
$wochentagHaschoa = $Haschoa["wday"];

if($year >= 1997 && $wochentagHaschoa == 0 && $hebrewDay  == 28 && $hebrewMonthName == "Nisan") {				
	echo "Jom hašoa";
} else {
	if($wochentagHaschoa == 6) { //also Samstag

		if($hebrewDay == 25 && $hebrewMonthName == "Nisan") {
			echo "Jom hašoa";
		}
	}
	else
	{
		if($wochentagHaschoa == 5) { //also Freitag

			if($hebrewDay == 26 && $hebrewMonthName == "Nisan") {
				echo "Jom hašoa";
			}
		}
		else
		{
			if($year >= 1997 && $wochentagHaschoa == 0 && $hebrewDay  == 27 && $hebrewMonthName == "Nisan") {				 
				;
			} else {
				if($hebrewDay == 27 && $hebrewMonthName == "Nisan") {
					echo "Jom hašoa";
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
        
								$holidayLinks = getLinkForShabbatHolidayReading( $hebrewMonth, $hebrewDay, $hebrewYear );
  if ($holidayLinks != "") {
    $holidayLinkCount = count($holidayLinks);
    for ($holidayLinkIndex = 0; $holidayLinkIndex < $holidayLinkCount; $holidayLinkIndex++) {
      $holidayLink = $holidayLinks[$holidayLinkIndex];
      echo makeLink($holidayLink) . "";  
   }
  }
  else echo "";
}
}
         if  ($hebrewMonthName == "Tishri") { $hebrewMonthName = "Tišri"; }
         if  ($hebrewMonthName == "Tammuz") { $hebrewMonthName = "Tamuz"; }
         if  ($hebrewMonthName == "Iyyar") { $hebrewMonthName = "Ijar"; }        
         if  ($hebrewMonthName == "Shevat") { $hebrewMonthName = "Ševat"; }
         if  ($hebrewMonthName == "Heshvan") {$hebrewMonthName = "Chešvan"; }

?>
<h1 id="logo"><a href="http://luach.ketubah.cz/" tabindex="-1">Kalendář Luach - židovské svátky a čtení z tóry na šabat</a></h1>
<h3>Luach zmanim<h3> 
<h2>Výpočet kalendářních dnů a časů pro židovské modlitby a svátky</h2>
<p class="">Luach je určný především pro Čechy, Moravu a Slovensko.</p>
<p>Časy jsou měřené dle astronomického algoritmu Jeana Meeuse, který je aproximální a funguje naprosto spolehlivě v našem století a v našich zeměpisných délkách a šířkách.</p>
<?php

?>
</span>
<FORM METHOD="GET" ACTION="index.php" class="form-table"> 
<fieldset>
<label>Místo / Destination:</label><br />
<select name="activelocation" class="js-example-basic-single">
<?php fillLocationList($activelocation); ?>
</select><br /><br />
<!-- Datepicker -->
<label>Datum / Date: </label><br />
<input type="text" NAME="datum" id="flex3" title="Tip pro přepnutí v kalendáři na předchozí nebo následující rok- klikněte v horní liště kalendář na měsíc nebo rok a následně použijte klávesovou zkratku ALT+page up/down" VALUE="<?php echo date("j.n.Y", mktime( 0, 0, 0, $mesic, $den, $rok ) ); ?>"><br />
 
<INPUT TYPE="SUBMIT" VALUE="Výpočet"> 
</fieldset>
</FORM>
<?php $pocetdni = date( 'w', mktime( 0, 0, 0, $mesic, $den, $rok ) ); ?>
<div class="HebDatum">
<div class="row">
<div class="col-md-4">Východ slunce: <?php echo $vychod; ?><br /><br /><img src="images/vychod_slunce.png"></div>
<div class="col-md-4"><?php echo $activelocation; ?><br /><?php echo $den . ". " . $mesic2 . " " . $rok; ?><br /><?php echo "<br />".$hebrewMonthName."&nbsp"; $pocetdni = date( 'w', mktime( 0, 0, 0, $mesic, $den, $rok ) ); Hdate( $mesic, $den, $rok, $pocetdni, 1 ); ?></div>
<div class="col-md-4">Západ slunce: <?php echo $zapad; ?><br /><br /><img src="images/zapad_slunce.png"></div>
</div>
 </div><ul>
<?php 

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

if ( date( 'D', mktime( 0, 0, 0, $mesic, $den, $rok ) ) == "Sat" ) {
        //************************ TORAH SECTIONS

	$torasections = getTorahSections($hebrewMonth, $hebrewDay, $hebrewYear);
	if ($torasections != "") {
  echo "<li>Šabat:&nbsp;";
		echo "$torasections";
  echo "\n";
	}
	}


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

								if ( $sabatminuty < 10 ) {
												$sabatminuty = "0" . $sabatminuty;
												 } 
								$sabathodiny = $CasZapadu[0]-1;
								 } 
				if ( $sabatminuty == 60 ) {
								$sabatminuty = "00";
								 $sabathodiny = $CasZapadu[0]++;
								 } 

				echo "<li>Začátek šabatu (18 min. před západem):&nbsp;" . $sabathodiny . ":" . $sabatminuty . "</li>";

} 

$roshCh = isRoshHodesh( $hebrewDay, $hebrewMonth);
if ($roshCh == true){ echo "<li><b>Roš-Chodeš</b></li>"; }

if (omerzaehlen($hebrewDay, $hebrewMonth, $hebrewYear) > "0") {echo "<li>Omer: ".omerzaehlen($hebrewDay, $hebrewMonth, $hebrewYear)."</li>"; }

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
echo "<li>Proporcionální hodina (Ša'a zmanit): " . $zmanit[0] . $zmanit[1] . " min.</li>";
// výsledek funkce hms, která převádí sekundy na hodiny, minuty a sekundy
$zmanitB = $zmanit * 60;
$zmanitB = hms( $zmanitB );
// výpočet jeciat šabat
echo "<li>Svítání, <i>alot hašachar</i> (vycházející slunce je 16.1 stupňů pod horizontem):&nbsp;".$alos[0].":".$alos[1]."</li>";
echo "<li>Je už vidět, <i>mišejakir</i> (vycházející slunce je 6 stupňů pod horizontem):&nbsp;".$val4."</li>";

$daka_zmanit = $zmanit / 60;
vypocet_casu( $zmanit, $CasVychodu0, 3, 0, 'Konec recitace šmá: ' );
vypocet_casu( $zmanit, $CasVychodu0, 4, 0, 'Konec ranní modlitby (tefila): ' );
vypocet_casu( $zmanit, $CasVychodu0, 6, 0, 'Poledne: ' );
vypocet_casu( $zmanit, $CasVychodu0, 6, 30, 'Mincha gedola: ' );
vypocet_casu( $zmanit, $CasVychodu0, 9, $zmanit / 2, 'Mincha ketana: ' );
$havdalaNahoru = $havdalaNahoru[0] . ":" . $havdalaNahoru[1];
echo "<li>Východ hvězd, <i>cejt hakochavim</i> (viditelnost tří malých hvězd): " . $havdalaNahoru . "\n</li>";
// $val3_ = date("H:i:s", $val3);
// $Val2_NH = $Val2_NH - $val1_V;
// $zmanit_minut = $minutyZ - $minutyV;
// $zmanit_sekundy = $sekundyZ - $sekundyV;
// $zmanit_nasekund = ($zmanit_hodin * 60 * 60) + ($zmanit_minut * 60) + $zmanit_sekundy;
// echo "</br>Toto je cas východu tří malých hvězd: " . $val3_NS_S . "</br>";
// výpočet východu hvězd dle Rabejnu Tam +72 min.
$tam72 = AddMinuty( $CasZapadu, 72 );
vypocet_casu( 60, $CasZapadu0, 1, 12, 'Východ hvězd, <i>cejt hakochavim</i> (R. Tam - 72 neproporcionálních min.): ');
vypocet_casu( 60, $CasZapadu0, 0.5, 0, 'Východ hvězd dle Ovadia Josefa (Sfaradim): ' );
vypocet_casu( $zmanit, $CasZapadu0, 0, ( $daka_zmanit * 72 ), 'Východ hvězd, <i>cejt hakochavim</i> (R. Tam - 72 proporcionálních min.): ');
//vypocet_casu( $zmanit, $CasZapadu0, 0, 18, '18. neproporcionalnich minut po západu: ' );
//vypocet_casu( $zmanit, $CasZapadu0, 0, $daka_zmanit * 18, '18. proporcionalnich minut po západu: ' );
$MaharshalTam72Shma = AddMinuty( $tam72, 900 );
//echo "Konec čtení Š'ma dle Mahršala: " . $MaharshalTam72Shma[0] . ":" . $MaharshalTam72Shma[1] . "<br/>";
?>
</ul></body></html>                       