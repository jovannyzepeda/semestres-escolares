#include <iostream>
#include <sstream>

using namespace std;

class MiFecha{
public:
    int anio;
    int mes;
    int dia;
};

class Empleado{
    string nombre;
    int edad;
    double salario;
    MiFecha fechaNacimiento;
public:
    Empleado(string nombre, int edad,double salario){
        this->nombre = nombre;
        this->edad = edad;
        this->salario=salario;
        fechaNacimiento.anio=1979;
        fechaNacimiento.mes=9;
        fechaNacimiento.dia=12;
    }
    string dameInfoEmpleado(){
        stringstream info;
        string s;
        info << "Nombre:" << nombre << "\nEdad:" << edad <<
            "\nSalario:" << salario <<
            "\nFechaNacimiento:" << fechaNacimiento.anio << "/" <<
            fechaNacimiento.mes << "/" << fechaNacimiento.dia << "\n";
        s=info.str();
        return s;
    }
};

class Jefe{
    string nombre;
    int edad;
    double salario;
    MiFecha fechaNacimiento;
    string departamento;
public:
    Jefe(string nombre, int edad,double salario,string departamento){
        this->nombre = nombre;
        this->edad = edad;
        this->salario=salario;
        fechaNacimiento.anio=1979;
        fechaNacimiento.mes=9;
        fechaNacimiento.dia=12;
        this->departamento=departamento;
    }
    string dameInfoJefe(){
        stringstream info;
        info << "Nombre:" << nombre << "\nEdad:" << edad <<
            "\nSalario:" << salario <<
            "\nFechaNacimiento:" << fechaNacimiento.anio << "/" <<
            fechaNacimiento.mes << "/" << fechaNacimiento.dia << "\n" <<
            departamento << "\n";
        return info.str();
    }
};

int main()
{
    Empleado luis("Luis",31,18000);
    Jefe luisAlberto("Luis Alberto",32,30000,"Computacion");
    cout << "---\n" << luis.dameInfoEmpleado();
    cout << "---\n" << luisAlberto.dameInfoJefe();
    return 0;
}
