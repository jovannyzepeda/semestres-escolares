#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

class Persona{ //como clase
    string curp;
    string nombre;
    int telefono;
public:
    void fijaCurp(string curpx){
        curp=curpx;
    }
    void fijaNombre(string nombrex){
        nombre=nombrex;
    }
    void fijaTelefono(int telefonox){
        telefono=telefonox;
    }
    string dameCurp(){
        return curp;
    }
    string dameNombre(){
        return nombre;
    }
    int dameTelefono(){
        return telefono;
    }
};

int main()
{
    Persona p;
    //p.fijaCurp("MUGL790912HMNXMS01");
    //p.fijaNombre("Luis Alberto");
    //p.fijaTelefono(1234567);
    cout << "curp es " << p.dameCurp() << endl;
    cout << "nombre es " << p.dameNombre() << endl;
    cout << "telefono es " << p.dameTelefono() << endl;
    return 0;
}
