
import java.io.InputStreamReader;
import java.io.BufferedReader;
import java.io.IOException;

public class EntradaSalidaConsola {

	public static void metodo1(){
		System.out.println("ejecutando metodo1");
		metodo2();
	}
	
	public static void metodo2(){
		System.out.println("ejecutando metodo2");
		String s;
		//crear un lector de búfer para leer cada línea del teclado
		InputStreamReader ir=new InputStreamReader(System.in);
		//intencionalmente lo dejo null
		BufferedReader in=null;//=new BufferedReader(ir);
		System.out.println("Para terminar, en Unix Ctrl-d ó Ctrl-c, Windows Ctrl-c ó Ctrl-z; ó bien sólo Enter");
		try{
			//Leer cada línea de entrada y hacer eco a la consola
			s=in.readLine();
			while(s!=null && !s.equals("")){
				System.out.println("Leer: "+s);
				s=in.readLine();
			}
			//Cerrar el BufferedReader
			in.close();
			System.out.println("terminé");
		}catch(IOException e){  //Atrapar cualquier IOException
			System.out.println("IOException");//esta no se lanza en este ejemplo
			e.printStackTrace();
		}
	}
	
	public static void main(String args[]){
		metodo1();
	}
}
