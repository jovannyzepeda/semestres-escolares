import java.io.*;

public class EscrituraArchivo {

	public static void main(String[] args) {
		//Crear objeto File
		File archivo=new File("MiArchivo.txt");
		
		try{
			//Crear un buffered reader para leer cada l�nea de la entrada est�ndar
			BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
			//Crear un print writer sobre el archivo
			PrintWriter out=new PrintWriter(new FileWriter(archivo));
			String s;
			
			System.out.println("Escribe texto para archivo.");
			System.out.println("Para terminar, en Unix Ctrl-d � Ctrl-c, Windows Ctrl-c � Ctrl-z � en ambos escribir caracter #");
			//leer cada l�nea de la consola y escribirla en archivo
			while((s=in.readLine())!=null){
				if (!s.equals("#")){
					out.println(s);
				}
				else break;
			}
			
			//Cerrar el buffered reader y el file print writer
			in.close();
			out.close();
		}catch(IOException e){
			//atrapar cualquier error de e/s
			e.printStackTrace();
		}
	}
}
