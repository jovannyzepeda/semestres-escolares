
public class VariableGlobal {
	static Persona alberto;
	static int mes;

	public static void main(String[] args) {
		Persona luis=new Persona();
		int a;
		a=10;
		mes=9;//que pasa si comento esta línea?
		System.out.println("a="+a);
		System.out.println("mes="+mes);
		luis.curp="MUGL790912...";
		luis.nombre="Luis Alberto";
		luis.telefono=1234567;
		System.out.println("Imprimiendo a Luis:");
		System.out.println("CURP: "+luis.curp);
		System.out.println("Nombre: "+luis.nombre);
		System.out.println("Telefono: "+luis.telefono);
		
		alberto=new Persona();//que pasa si comento esta línea?
		alberto.curp="MUGL790912IC7";
		alberto.nombre="Alberto";
		alberto.telefono=45678990;
		
		System.out.println("Imprimiendo a alberto:");
		System.out.println("CURP: "+alberto.curp);
		System.out.println("Nombre: "+alberto.nombre);
		System.out.println("Telefono: "+alberto.telefono);
		
		modificaAlberto();

		System.out.println("Imprimiendo a alberto:");
		System.out.println("CURP: "+alberto.curp);
		System.out.println("Nombre: "+alberto.nombre);
		System.out.println("Telefono: "+alberto.telefono);
		
	}
	
	public static void modificaAlberto(){
		alberto.nombre="Luis Alberto";
	}
}

class Persona{  //como registro
	String curp;
	String nombre;
	int telefono;
}