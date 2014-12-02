import java.io.*;

public class LecturaArchivo {

	public static void main(String[] args) {
		String NOMBRE_ARCHIVO="estructurasDeDatos1.txt";
		String nombreArchivo=NOMBRE_ARCHIVO; //nombre de archivo simple
		//String nombreArchivo="."+File.separator+"files"+File.separator+NOMBRE_ARCHIVO;  //ruta relativa
		/*String nombreArchivo="C:\\Users\\Luis Alberto\\Desktop\\test\\java"+ //ruta absoluta (Windows)
			File.separator+"files"+File.separator+NOMBRE_ARCHIVO;*/  
		/*String nombreArchivo="/home/alberto/test/java"+ //ruta absoluta (Linux)
			File.separator+"files"+File.separator+NOMBRE_ARCHIVO;*/
		//Crear objeto File
		File archivo=new File(nombreArchivo);
		try{
			//Crear el reader para leer cada línea del archivo
			BufferedReader in=new BufferedReader(new FileReader(archivo));
			String s;
			
			//Leer cada línea del archivo y hacer eco a la consola
			System.out.println("Abriendo archivo: "+nombreArchivo);
			s=in.readLine();
			while(s!=null){
				System.out.println("Leer: "+s);
				s=in.readLine();
			}
			//Cerrar el buffered reader, lo que también cierra el file reader
			in.close();
		}catch(FileNotFoundException e){
			//Si el archivo no existe
			System.err.println("Archivo no se encontró: "+archivo);
			e.printStackTrace(System.err);//que pasa si borras el archivo
		}catch(IOException e){
			//Atrapar cualquier otra excepción
			e.printStackTrace();
		}
	}

}
