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
  <?php include("locations.inc"); 
  
  if (isSet($_REQUEST["activelocation"])) {
	$activelocation = $_REQUEST["activelocation"];
} else {
	$activelocation = "Praha";
}
?>
<h1>Luach zmanim<h1> 
<h3>Výpočet kalendárních dnů a časů pro židovské modlitby a svátky</h3>
<p>Luach je určný především pro Čechy, Moravu a Slovensko.</p>
<p>Časy jsou měřené dle astronomického algoritmu Jeana Meeuse, který je aproximální a funguje naprosto spolehlivě v našem století a v našich zeměpisných délkách a šířkách.</p>
<FORM METHOD="GET" ACTION="luach_2016.php"> 
<TABLE width=400 border=0 cellspacing=0 cellpadding=5>
<TR><TD>
<select name="activelocation">
<?php fillLocationList($activelocation); ?>
</select>
</TD></TR>
<!-- <TR><TD colspan=2 class=vlevo>   
<INPUT maxlength=3 size=3 TYPE="text" value="50" NAME="sirka"> stupňů a
<INPUT maxlength=2 size=1 TYPE="text" value="5" NAME="minut1"> minut
</TD></TR>
<TR><TD colspan=2 class=vlevo> 
<SELECT NAME="sirka2"> 
<OPTION maxlength="10" size="10" VALUE="severni">severní</OPTION> 
<OPTION maxlength="10" size="10" VALUE="jizni">jižní</OPTION> 
</SELECT> šířky. 
</TD></TR>
<TR><TD colspan=2 class=vlevo>
<INPUT maxlength="3" size="3" TYPE="text" value="14" NAME="delka"> stupňů a
<INPUT maxlength="2" size="1" TYPE="text" value="24" NAME="minut2"> minut 
</TD></TR> 
<TR><TD colspan=2 class=vlevo> 
<SELECT NAME="delka2">
<OPTION VALUE="vychodni">východní</OPTION> 
<OPTION VALUE="zapadni">západní</OPTION> 
</SELECT> délky. 
</TD></TR>
<TR><TD>Časové pásmo: 
</TD></TR> <TR><TD>
<SELECT NAME="zona"> 
<?php for ($x = -12;$x < 13;$x++): ?> 
<OPTION <?php if ($x == 1) echo " selected ";
?> VALUE="<?php echo $x;
?>">GMT <?php if ($x > -1) echo "+";
echo $x;
?>:00</OPTION> 
<?php endfor;
?> 
</SELECT>
</TD></TR>-->
<TR><TD>
Datum:
 <!-- Datepicker -->
<input type="text" NAME="datum" id="datepicker" VALUE="<?php echo date("j.n.Y"); ?>">
</TD></TR>
<TR><TD>
 <select id="locale">
    <option value="cs" selected="selected">Česky</option>
    <option value="">English</option>
    <option value="he">Hebrew (&#8235;(&#1506;&#1489;&#1512;&#1497;&#1514;</option>
  </select>
</TD></TR><TR><TD colspan=2> 
<INPUT TYPE="SUBMIT" VALUE="Výpočet"> 
<INPUT TYPE="RESET" VALUE="Původní hodnoty"> 
</TD></TR>
</TABLE>
</FORM>
<script>

$( "#accordion" ).accordion();



var availableTags = [
	"ActionScript",
	"AppleScript",
	"Asp",
	"BASIC",
	"C",
	"C++",
	"Clojure",
	"COBOL",
	"ColdFusion",
	"Erlang",
	"Fortran",
	"Groovy",
	"Haskell",
	"Java",
	"JavaScript",
	"Lisp",
	"Perl",
	"PHP",
	"Python",
	"Ruby",
	"Scala",
	"Scheme"
];
$( "#autocomplete" ).autocomplete({
	source: availableTags
});



$( "#button" ).button();
$( "#button-icon" ).button({
	icon: "ui-icon-gear",
	showLabel: false
});



$( "#radioset" ).buttonset();



$( "#controlgroup" ).controlgroup();



$( "#tabs" ).tabs();



$( "#dialog" ).dialog({
	autoOpen: false,
	width: 400,
	buttons: [
		{
			text: "Ok",
			click: function() {
				$( this ).dialog( "close" );
			}
		},
		{
			text: "Cancel",
			click: function() {
				$( this ).dialog( "close" );
			}
		}
	]
});

// Link to open the dialog
$( "#dialog-link" ).click(function( event ) {
	$( "#dialog" ).dialog( "open" );
	event.preventDefault();
});



$( "#datepicker" ).datepicker({
	inline: true
});



$( "#slider" ).slider({
	range: true,
	values: [ 17, 67 ]
});



$( "#progressbar" ).progressbar({
	value: 20
});



$( "#spinner" ).spinner();



$( "#menu" ).menu();



$( "#tooltip" ).tooltip();



$( "#selectmenu" ).selectmenu();


// Hover states on the static widgets
$( "#dialog-link, #icons li" ).hover(
	function() {
		$( this ).addClass( "ui-state-hover" );
	},
	function() {
		$( this ).removeClass( "ui-state-hover" );
	}
);
</script>
</body></html>