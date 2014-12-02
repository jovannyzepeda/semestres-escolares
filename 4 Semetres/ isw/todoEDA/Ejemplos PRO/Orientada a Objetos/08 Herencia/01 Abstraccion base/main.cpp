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
        info << "Nombre:" << nombre;
        info << "\nEdad:" << edad;
        info << "\nSalario:" << salario;
        info << "\nFechaNacimiento:" << fechaNacimiento.anio << "/" <<
            fechaNacimiento.mes << "/" << fechaNacimiento.dia << "\n";
        s=info.str();
        return s;
    }

    /*string dameInfoEmpleado(){
        stringstream info;
        string s;
        info << "Nombre:" << nombre << "\nEdad:" << edad <<
            "\nSalario:" << salario <<
            "\nFechaNacimiento:" << fechaNacimiento.anio << "/" <<
            fechaNacimiento.mes << "/" << fechaNacimiento.dia << "\n";
        s=info.str();
        return s;
    }*/

    /*string dameInfoEmpleado(){
        stringstream info;
        info << "Nombre:" << nombre << "\nEdad:" << edad <<
            "\nSalario:" << salario <<
            "\nFechaNacimiento:" << fechaNacimiento.anio << "/" <<
            fechaNacimiento.mes << "/" << fechaNacimiento.dia << "\n";
        return info.str();//me ahorro una variable
    }*/

/*    string dameInfoEmpleado(){
        string info; //ahora de tipo string
        info="Nombre:" + nombre;
        info+="\nEdad:";
        info+=string(itoa(edad));
        info+="\nSalario:";
        info+=string(salario);
        info+="\nFechaNacimiento:" + fechaNacimiento.anio;
        info+="/" + fechaNacimiento.mes;
        info+="/" + fechaNacimiento.dia;
        info+="\n";
        return info;
    }*/
};

int main()
{
    Empleado luis("Luis",31,18000);
    cout << "---\n" << luis.dameInfoEmpleado();
    return 0;
}
