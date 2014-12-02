#include <iostream>
#include <string.h>

using namespace std;

class Circulo{
private:
    static constexpr double PI=3.1416;
    float radio;
    int colorBorde;
    int colorFondo;
public:
    Circulo(){
        //datos por defecto
        radio=10;
        colorBorde=14;
        colorFondo=11;
    }
    bool fijaRadio(float radiox){
        if (radiox>0){
            radio=radiox;
            return true;
        }
        else{
            return false;
        }
    }
    void fijaColorBorde(int colorBorde){//antes se llamaba colorBordex
        colorBorde=colorBorde;
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
    cout << "Datos al principio:" << endl;
    cout << "Propiedades del circulo c:" << endl;
    cout << "radio=" << c.dameRadio() << endl;
    cout << "colorBorde=" << c.dameColorBorde() << endl;
    cout << "colorFondo=" << c.dameColorFondo() << endl;
    cout << "area=" << c.dameArea() << endl << endl;

    c.fijaColorBorde(100);

    cout << "Propiedades del circulo c:" << endl;
    cout << "radio=" << c.dameRadio() << endl;
    cout << "colorBorde=" << c.dameColorBorde() << endl;
    cout << "colorFondo=" << c.dameColorFondo() << endl;
    cout << "area=" << c.dameArea() << endl << endl;

    return 0;
}
