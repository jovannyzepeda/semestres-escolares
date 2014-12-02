#include <iostream>
#include <string.h>

using namespace std;

class Circulo{
private://sin este modificador de acceso, es asi por defecto
    static constexpr double PI=3.1416;
    double radio;
    int colorBorde;
    int colorFondo;
    bool verificaRadio(double radiox){
        if (radiox>0){
            return true;
        }
        else{
            return false;
        }
    }
public://modificador de acceso
    Circulo(){//Constructor
        radio=10;
        colorBorde=14;
        colorFondo=11;
    }
    bool fijaRadio(double radiox){
        if (verificaRadio(radiox)){
            radio=radiox;
            return true;
        }
        else{
            return false;
        }
    }
    void fijaColorBorde(int colorBordex){
        colorBorde=colorBordex;
    }
    void fijaColorFondo(int colorFondox){
        colorFondo=colorFondox;
    }
    double dameRadio(){
        return radio;
    }
    int dameColorBorde(){
        return colorBorde;
    }
    int dameColorFondo(){
        return colorFondo;
    }
    double dameArea(){
        return PI*radio*radio;
    }
};

int main()
{
    Circulo c;
    float radio;
    cout << "Datos al principio:" << endl;
    cout << "Propiedades del circulo c:" << endl;
    cout << "radio=" << c.dameRadio() << endl;
    cout << "colorBorde=" << c.dameColorBorde() << endl;
    cout << "colorFondo=" << c.dameColorFondo() << endl;
    cout << "area=" << c.dameArea() << endl << endl;

    cout << "Dame el nuevo radio: ";
    cin >> radio;

    //c.verificaRadio();
    if (c.fijaRadio(radio)){
        cout << "Datos despues de intentar radio cambiado:" << endl;
    }
    else{
        cout << "No se dejo cambiar el radio" << endl;
    }

    cout << "Propiedades del circulo c:" << endl;
    cout << "radio=" << c.dameRadio() << endl;
    cout << "colorBorde=" << c.dameColorBorde() << endl;
    cout << "colorFondo=" << c.dameColorFondo() << endl;
    cout << "area=" << c.dameArea() << endl << endl;

    return 0;
}
