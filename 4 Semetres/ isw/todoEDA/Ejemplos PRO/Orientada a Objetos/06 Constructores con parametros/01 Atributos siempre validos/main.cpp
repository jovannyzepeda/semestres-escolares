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
    Circulo(double radio,int colorBorde,int colorFondo){
        //datos por defecto
        this->radio=10;
        this->colorBorde=14;
        this->colorFondo=11;
        fijaRadio(radio);
        fijaColorBorde(colorBorde);
        fijaColorFondo(colorFondo);
    }
    bool fijaRadio(double r){
        if (r>0){
            radio=r;
            return true;
        }
        else{
            return false;
        }
    }
    bool fijaColorBorde(int c){
        if (c>=0){
            colorBorde=c;
            return true;
        }
        else{
            return false;
        }
    }
    bool fijaColorFondo(int c){
        if (c>=0){
            colorFondo=c;
            return true;
        }
        else{
            return false;
        }
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
    Circulo c(50,10,9);
    //Circulo c(-50,10,9);
    //Circulo c(50,-1,9);
    double radio;
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
