<!DOCTYPE <!DOCTYPE html>
<html lang="es">
  <head>
    <title>Pasteleria buitres de CUCEI</title>
    <meta name="viewport" content="width=device-width, initial-scale=1" charset="UTF-8" -moz-transition: all 4s ease;/>
    <link rel="stylesheet" type="text/css" href="estilo.css">
    <script> type="text/javascript" href="moderno.js"</script>
  </head>
  <body>
  <header>
    <nav>
      <ul>
        <li><a href="inicio.html">INICIO</a></li>
        <li><a href="sucursales.html">Sucursales</li>
        <li><a href="productos.php">Productos</a></li>
        <li><a href="cotizaciones.html">Cotizaciones</a></li>
        <li><a href="contacto.html">Contacto</a></li>
      </ul>
    </nav>
    </header>
    <br><br>
    <section class="informacion">
    <select>

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
    </section>
    <footer>
      Derechos reservados por la pasteleria Buitres de CUCEI
      <p class="mini">Telefonos: 555-555-555-555</p>
    </footer>
  </body>
</html>