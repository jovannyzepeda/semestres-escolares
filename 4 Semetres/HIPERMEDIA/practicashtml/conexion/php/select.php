<?php

	$con=mysqli_connect("localhost","root","cruel1293","ejemplo");
	// Check connection
	if (mysqli_connect_errno()) {
  	echo "Failed to connect to MySQL: " . mysqli_connect_error();
		}

	$result = mysqli_query($con,"SELECT * FROM pruba");

	while($row = mysqli_fetch_array($result)) {
  		echo $row['nombre'];
  		echo "       ";
  		echo $row['edad'];
  		echo "    <br>    ";
		}

	mysqli_close($con);

?> 