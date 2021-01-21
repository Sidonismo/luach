<?php require __DIR__ . '/vendor/autoload.php'; ?>
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

use Carbon\Carbon;

printf("Now: %s", Carbon::now());

?>
<h1>Blue</h1>