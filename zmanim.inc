<?php   
function ChangeTableBackground($bgcolor) {
  if ($bgcolor == "ffffff")
    return "e0e0e0";
  else
    return "ffffff";
}

function CalculateZmanimForDay($month, $day, $year, $latitude, $longitude, $timezone, $caption) {
  $sunrise = GetSunrise($month, $day, $year, $latitude, $longitude, $timezone);
  if ($sunrise != "") {
    if (isDaylightSavingsTime($month, $day, $year))     
      $sunrise = AddMinutes($sunrise, 60);
  }  
  $sunset = GetSunset($month, $day, $year, $latitude, $longitude, $timezone);
  if ($sunset != "") {
    if (isDaylightSavingsTime($month, $day, $year))
      $sunset = AddMinutes($sunset, 60);
  }
  
  echo "<table align=\"center\" cellspacing=0 cellpadding=3>\n";

  echo "<tr><td align=center colspan=2>$caption</td></tr>\n";

  $bgcolor = "ffffff";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Alot HaShachar (16.1&#176; below horizon)</td>\n";
  echo "<td>";
  $myTime = GetSunriseDegreesBelowHorizon($month, $day, $year, 16.1, $latitude, $longitude, $timezone);
  if ($myTime != "") {
    if (isDaylightSavingsTime($month, $day, $year))
      $myTime = AddMinutes($myTime, 60);
  }
  if ($myTime != "") echo FormatTime($myTime); else echo "---";
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Alot HaShachar (72 minutes before sunrise)</td>\n";
  echo "<td>";
  $myTime = SubtractMinutes($sunrise, 72);
  if ($myTime != "") echo FormatTime($myTime); else echo "---";
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Earliest Tallit (11&#176; below horizon)</td>\n";
  echo "<td>";
  $myTime = GetSunriseDegreesBelowHorizon($month, $day, $year, 11, $latitude, $longitude, $timezone);
  if ($myTime != "") {
    if (isDaylightSavingsTime($month, $day, $year))
      $myTime = AddMinutes($myTime, 60);
  }
  if ($myTime != "") echo FormatTime($myTime); else echo "---";
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Earliest Tallit (10.2&#176; below horizon)</td>\n";
  echo "<td>";
  $myTime = GetSunriseDegreesBelowHorizon($month, $day, $year, 10.2, $latitude, $longitude, $timezone);
  if ($myTime != "") {
    if (isDaylightSavingsTime($month, $day, $year))
      $myTime = AddMinutes($myTime, 60);
  }
  if ($myTime != "") echo FormatTime($myTime); else echo "---";
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>HaNetz HaChama</td>\n";
  echo "<td>";
  if ($sunrise != "") echo FormatTime($sunrise); else echo "---";
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Kriat Shema (M\"A)</td>\n";
  echo "<td>";
  if ($sunrise != "" && $sunset != "") {
    $myTime = GetProportionalHours(3, $sunrise, $sunset);
    $myTime = SubtractMinutes($myTime, 36);
    echo FormatTime($myTime); 
  } else {
    echo "---";
  }
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Kriat Shema (GR\"O)</td>\n";
  echo "<td>";
  if ($sunrise != "" && $sunset != "") {
    $myTime = GetProportionalHours(3, $sunrise, $sunset);
    echo FormatTime($myTime); 
  } else {
    echo "---";
  }
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Tefila (M\"A)</td>\n";
  echo "<td>";
  if ($sunrise != "" && $sunset != "") {
    $myTime = GetProportionalHours(4, $sunrise, $sunset);
    $myTime = SubtractMinutes($myTime, 24);
    echo FormatTime($myTime); 
  } else {
    echo "---";
  }
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Tefila (GR\"O)</td>\n";
  echo "<td>";
  if ($sunrise != "" && $sunset != "") {
    $myTime = GetProportionalHours(4, $sunrise, $sunset);
    echo FormatTime($myTime); 
  } else {
    echo "---";
  }
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Chatzot (GR\"O)</td>\n";
  echo "<td>";
  if ($sunrise != "" && $sunset != "") {
    $myTime = GetProportionalHours(6, $sunrise, $sunset);
    echo FormatTime($myTime); 
  } else {
    echo "---";
  }
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Chatzot (M\"A)</td>\n";
  echo "<td>";
  if ($sunrise != "" && $sunset != "") {
    $myTime = GetProportionalHours(6, $sunrise, $sunset);
    echo FormatTime($myTime); 
  } else {
    echo "---";
  }
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Mincha Gedola (GR\"O)</td>\n";
  echo "<td>";
  if ($sunrise != "" && $sunset != "") {
    $myTime = GetProportionalHours(6.5, $sunrise, $sunset);
    echo FormatTime($myTime); 
  } else {
    echo "---";
  }
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Mincha Gedola (M\"A)</td>\n";
  echo "<td>";
  if ($sunrise != "" && $sunset != "") {
    $myTime = GetProportionalHours(6.5, $sunrise, $sunset);
    $myTime = AddMinutes($myTime, 6);
    echo FormatTime($myTime); 
  } else {
    echo "---";
  }
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Mincha K'tana (GR\"O)</td>\n";
  echo "<td>";
  if ($sunrise != "" && $sunset != "") {
    $myTime = GetProportionalHours(9.5, $sunrise, $sunset);
    echo FormatTime($myTime); 
  } else {
    echo "---";
  }
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Mincha K'tana (M\"A)</td>\n";
  echo "<td>";
  if ($sunrise != "" && $sunset != "") {
    $myTime = GetProportionalHours(9.5, $sunrise, $sunset);
    $myTime = AddMinutes($myTime, 42);
    echo FormatTime($myTime); 
  } else {
    echo "---";
  }
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Plag HaMincha (GR\"O)</td>\n";
  echo "<td>";
  if ($sunrise != "" && $sunset != "") {
    $myTime = GetProportionalHours(10.75, $sunrise, $sunset);
    echo FormatTime($myTime); 
  } else {
    echo "---";
  }
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Plag HaMincha (M\"A)</td>\n";
  echo "<td>";
  if ($sunrise != "" && $sunset != "") {
    $myTime = GetProportionalHours(10.75, $sunrise, $sunset);
    $myTime = AddMinutes($myTime, 57);
    echo FormatTime($myTime); 
  } else {
    echo "---";
  }
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Shkiat HaChama</td>\n";
  echo "<td>";
  if ($sunset != "") echo FormatTime($sunset); else echo "---";
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Tzait HaChochavim (5.95&#176; below horizon)</td>\n";
  echo "<td>";
  $myTime = GetSunsetDegreesBelowHorizon($month, $day, $year, 5.95, $latitude, $longitude, $timezone);
  if ($myTime != "") {
    if (isDaylightSavingsTime($month, $day, $year))
      $myTime = AddMinutes($myTime, 60);
  }
  if ($myTime != "") echo FormatTime($myTime); else echo "---";
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>7.08&#176; below horizon</td>\n";
  echo "<td>";
  $myTime = GetSunsetDegreesBelowHorizon($month, $day, $year, 7.08, $latitude, $longitude, $timezone);
  if ($myTime != "") {
    if (isDaylightSavingsTime($month, $day, $year))
      $myTime = AddMinutes($myTime, 60);
  }
  if ($myTime != "") echo FormatTime($myTime); else echo "---";
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>3 Medium Stars (7.5&#176; below horizon)</td>\n";
  echo "<td>";
  $myTime = GetSunsetDegreesBelowHorizon($month, $day, $year, 7.5, $latitude, $longitude, $timezone);
  if ($myTime != "") {
    if (isDaylightSavingsTime($month, $day, $year))
      $myTime = AddMinutes($myTime, 60);
  }
  if ($myTime != "") echo FormatTime($myTime); else echo "---";
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>3 Small Stars (8.75&#176; below horizon)</td>\n";
  echo "<td>";
  $myTime = GetSunsetDegreesBelowHorizon($month, $day, $year, 8.75, $latitude, $longitude, $timezone);
  if ($myTime != "") {
    if (isDaylightSavingsTime($month, $day, $year))
      $myTime = AddMinutes($myTime, 60);
  }
  if ($myTime != "") echo FormatTime($myTime); else echo "---";
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Rabbeinu Tam (sunset + 72 minutes)</td>\n";
  echo "<td>";
  $myTime = AddMinutes($sunset, 72);
  if ($myTime != "") echo FormatTime($myTime); else echo "---";
  echo "</td>\n";
  echo "</tr>\n";

  $bgcolor = ChangeTableBackground($bgcolor);
  echo "<tr bgcolor=\"#$bgcolor\">\n";
  echo "<td>Sha'a Zmanit</td>\n";
  $min = GetShaaZmanit($sunrise, $sunset);
  echo "<td>$min min</td>\n";
  echo "</tr>\n";

  echo "</table>\n";  
}
?>
