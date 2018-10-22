<?php

function head ( $title, $discription, $keywords ){

print "
<html>
  <head>
    <link rel=stylesheet HREF='style.css' TYPE='text/css'>
      <title>$title - Top Sketch - TopSketch.com </title>

      <SCRIPT language=\"JavaScript\">
		if (document.images)
		{
			pic1= new Image(721,230); 
  			pic1.src=\"images/banner2.jpg\"; 
		}
	</SCRIPT>

  </head>
  <body>
	
    <center>

	<a href='http://www.topsketch.com' class='banner'>&nbsp;</a>

	<a href='http://www.topsketch.com'> TopSketch.com </a> <b>/</b> 
	<a href='howtosketch.php'> How To Sketch </a> <b>/</b> 
	<a href='comiczone.php'> Comic Zone </a> 

       <br><br>
  
    <div class='body'>

";

}

function foot(){
print "
    </div></center>
  </body>
</html>

";

}

?>