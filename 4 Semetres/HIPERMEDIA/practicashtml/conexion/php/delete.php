<?php 
$con = mysqli_connect("localhost","root","cruel1293","ejemplo");
if(mysqli_connect_errno()){
	echo "error al conectar".mysqli_connect_errno();
}
mysqli_query($con, "DELETE from pruba where nombre ='franco'");
mysqli_close($con);
 ?> 
