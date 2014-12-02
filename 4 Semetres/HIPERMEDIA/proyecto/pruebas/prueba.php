<?php

	$con=mysqli_connect("localhost","root","cruel1293","pasteleria");
	// Check connection
	if (mysqli_connect_errno()) {
  	echo "Failed to connect to MySQL: " . mysqli_connect_error();
		}

	$result = mysqli_query($con,"SELECT * FROM productos");

	while($row = mysqli_fetch_array($result)) {
  			 echo $row['idproductos'];
   	 		echo "    ";
	   	 echo $row['nombre_producto'];
	   	 echo "    ";
		}

	mysqli_close($con);

?> 