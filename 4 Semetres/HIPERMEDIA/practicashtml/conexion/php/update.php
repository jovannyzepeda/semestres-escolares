<?php 
	$con = mysqli_connect("localhost","root","cruel1293","ejemplo");
	if(mysqli_connect_error()){
		echo "error al conectarse".mysqli_connect_error();
	}
	mysqli_query($con, "UPDATE pruba set nombre ='franco' where nombre='miguel'");
	mysqli_close($con);

 ?> 
