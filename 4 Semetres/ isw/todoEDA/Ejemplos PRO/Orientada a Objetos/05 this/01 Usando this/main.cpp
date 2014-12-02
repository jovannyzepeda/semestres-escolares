#include <iostream>
#include <string.h>

using namespace std;

class Circulo{
private:
    static constexpr double PI=3.1416;
    double radio;
    int colorBorde;
    int colorFondo;
public:
    Circulo(){
        //datos por defecto
        radio=10;
        colorBorde=14;
        colorFondo=11;
    }
    bool fijaRadio(double radio){
        if (radio>0){
            this->radio=radio;
            return true;
        }
        else{
            return false;
        }
    }
    void fijaColorBorde(int colorBorde){//antes se llamaba colorBordex
        this->colorBorde=colorBorde;
    }
    void fijaColorFondo(int colorFondo){
        this->colorFondo=colorFondo;
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
