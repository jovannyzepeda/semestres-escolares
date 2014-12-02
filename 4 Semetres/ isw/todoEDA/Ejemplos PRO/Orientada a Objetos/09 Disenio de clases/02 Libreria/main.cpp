#include <iostream>
#include <string.h>
#include "Circulo.h"

using namespace std;

int main()
{
    Circulo c1(10,14,9);
    Circulo c2(10,14,9);
    Circulo c3(20,14,9);

    cout << "Propiedades del circulo c1:" << endl;
    cout << "radio=" << c1.dameRadio() << endl;
    cout << "colorBorde=" << c1.dameColorBorde() << endl;
    cout << "colorFondo=" << c1.dameColorFondo() << endl << endl;

    cout << "Propiedades del circulo c2:" << endl;
    cout << "radio=" << c2.dameRadio() << endl;
    cout << "colorBorde=" << c2.dameColorBorde() << endl;
    cout << "colorFondo=" << c2.dameColorFondo() << endl << endl;

    cout << "Propiedades del circulo c3:" << endl;
    cout << "radio=" << c3.dameRadio() << endl;
    cout << "colorBorde=" << c3.dameColorBorde() << endl;
    cout << "colorFondo=" << c3.dameColorFondo() << endl << endl;

    if (c1.esIgualA(c2)){
        cout << "c1 es igual a c2" << endl;
    }
    else{
        cout << "c1 NO es igual a c2" << endl;
    }
    if (c1.esIgualA(c3)){
        cout << "c1 es igual a c3" << endl;
    }
    else{
        cout << "c1 NO es igual a c3" << endl;
    }
    if (c2.esIgualA(&c3)){
        cout << "c2 es igual a c3" << endl;
    }
    else{
        cout << "c2 NO es igual a c3" << endl;
    }
    return 0;
}
