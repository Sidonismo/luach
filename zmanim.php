<html>
<body>

<?php include("dst.inc"); ?>
<?php include("times.inc"); ?>
<?php include("locations.inc"); ?>
<?php include("zmanim.inc"); ?>

<?php
$day = $_REQUEST["day"];
$month = $_REQUEST["month"];
$monthStr = jdmonthname(gregoriantojd($month, 1, 2000), 1);
$year = $_REQUEST["year"];
$locName = $_REQUEST["locname"];
$location = searchLocation($locName);
if ($location != "") {
  $caption = "Zmanim for $day $monthStr $year, $locName";
  CalculateZmanimForDay($month, $day, $year, $location[0], $location[1], $location[2], $caption);
}

?>

</body>
</html>
