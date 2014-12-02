<!Doctype html>
<html>
<head>
	<title>Cotizacion</title>
	<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" -moz-transition: all 4s ease;/>
	<link rel="stylesheet" type="text/css" href="nifty_05.css"/>
<body>
<div id="general">
	<div id="rotulo"> 
	<h1>Pasteleria .....</h1>
	</div>
	<div id="principal"> 
	<p>
	¿Tienes un evento y necesitas una cotizacion?</p>
	<h2>Obten tu cotizacion ahora</h2>
	<p>
	<form method="post" action="comunicacion.php">
  	<label for="nombre">Nombre</label>
  	<input type="text" id = "nombre" required="required" name="nombre" placeholder="Nombres Apellidos">
  	<br>
  	<br>
  	<label for="correo">Correo</label>
  	<input type="email" required="required" placeholder="nombre@hotmail.com" name="correo">
  	<br>
  	<br>
  	<label for="producto">Producto</label><br>
  	 <select>
  	 <option>Productos</option>
        <?php 
  /*Conexion a la bd*/
  $con=mysqli_connect("localhost","root","cruel1293","pasteleria");
  // Check connection
  if (mysqli_connect_errno()) {
    echo "Failed to connect to MySQL: " . mysqli_connect_error();
    }

  $result = mysqli_query($con,"SELECT * FROM productos");

  while($row = mysqli_fetch_array($result)) {?>
    <option value="<?php echo $row['idproductos']?>"><?php echo $row['nombre_producto']?></option>
    <?php } ?>
    </select>
  	<br>
  	<br>
  	<label for="pzas">Piezas</label>
  	<input type="text" required="required" name="pzas">
  	<br>
  	<br>
  	<label for="especificacion">Especificaciones</label>
  	<textarea rows="8" cols="50" id="especificaciones" name="especificaciones"></textarea>
  	<br>
  	<button type="submit">Cotizar</button>
  	<input type="reset" name="borrado" value="Borrar">
  	</form>
	</p>
	</div>
	<div id="secundario"> <h2>¿Ya conoces la promocion de la semana?</h2>
	<br>
	<img src="imagenes/cofe.jpg" class="dos">
	</div>
	<div id="piedepagina">Derechos reservados</div>
</div>
</body>
</html>

