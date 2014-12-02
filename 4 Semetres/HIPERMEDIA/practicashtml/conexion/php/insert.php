<?php 
	$con=mysqli_connect("localhost","root","cruel1293","ejemplo");
	// Check connection
	if (mysqli_connect_errno()) {
  	echo "Failed to connect to MySQL: " . mysqli_connect_error();
		}
	$hol=mysqli_query($con,"INSERT INTO pruba (nombre,edad)
	VALUES ('marco miguel',35)");
	mysqli_close($con);
	if($hol==true){
		echo "correcto";
	}else echo "errir";
 ?> 
