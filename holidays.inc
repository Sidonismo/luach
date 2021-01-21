<?php

//Hier fangen Feiertage an

echo "            <font color=\"blue\" face=\"Arial\">";

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
	echo "Osmý den Pesachu (Yizkor)\n";
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
	echo "Šmini&nbsp;Aceret&nbsp;(Yizkor)\n";
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
	echo "Druhý den Šavuot&nbsp;(Yizkor)\n";
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

if($jahr >= 2004 && $wochentagHatzmaut == 1 &&$hebrewDay == 6 && $hebrewMonthName == "Iyyar") {
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
			if ($jahr >= 2004 && $wochentagHatzmaut == 1) {
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

if($jahr >= 2004 && $wochentagHazikaron == 0 &&$hebrewDay == 5 && $hebrewMonthName == "Iyyar") {
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
			if ($jahr >= 2004 && $wochentagHazikaron == 0) {
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

if($jahr >= 1997 && $wochentagHaschoa == 0 && $hebrewDay  == 28 && $hebrewMonthName == "Nisan") {				
	echo "Yom Hashoa";
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
			if($jahr >= 1997 && $wochentagHaschoa == 0 && $hebrewDay  == 27 && $hebrewMonthName == "Nisan") {				 
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


//********************************End of Yom Hashoa*************************************
//******************************************************************************************
//******************************************************************************************		

if ($wochentag == 6) { // Saturday
  $holidayLinks = getLinkForShabbatHolidayReading($hebrewMonth, $hebrewDay, $hebrewYear);
  if ($holidayLinks != "") {
    $holidayLinkCount = count($holidayLinks);
    for ($holidayLinkIndex = 0; $holidayLinkIndex < $holidayLinkCount; $holidayLinkIndex++) {
      $holidayLink = $holidayLinks[$holidayLinkIndex];
      echo makeLink($holidayLink) . "&nbsp;";
    }
  }
}

?>
