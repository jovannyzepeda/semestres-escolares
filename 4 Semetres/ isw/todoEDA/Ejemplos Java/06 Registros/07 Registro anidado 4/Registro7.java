
public class Registro7 {
	static final int FEBRERO=2;
	static final int SEPTIEMBRE=9;
	
	public static void imprimePersona(Persona p){
		System.out.println("CURP: "+p.curp);
		System.out.println("Nombre: "+p.nombre);
		System.out.println("Telefono: "+p.telefono);
		System.out.println("Fecha Nacimiento: "+p.fechaNacimiento.anio+
				"/"+p.fechaNacimiento.mes+"/"+p.fechaNacimiento.dia);
	}

	public static void main(String[] args) {
		Persona luisAlberto=new Persona();
		Fecha otraFecha=new Fecha();
		luisAlberto.curp="MUGL790912...";
		luisAlberto.nombre="Luis Alberto";
		luisAlberto.telefono=1234567;
		luisAlberto.fechaNacimiento.anio=1979;
		luisAlberto.fechaNacimiento.mes=SEPTIEMBRE;
		luisAlberto.fechaNacimiento.dia=12;
		imprimePersona(luisAlberto);
		otraFecha.dia=18;
		otraFecha.mes=FEBRERO;
		otraFecha.anio=2014;
		luisAlberto.fechaNacimiento=otraFecha;
		imprimePersona(luisAlberto);
	}
}

class Fecha{
	int anio;
	int mes;
	int dia;
}

class Persona{  //como registro
	String curp;
	String nombre;
	int telefono;
	Fecha fechaNacimiento=new Fecha();
}