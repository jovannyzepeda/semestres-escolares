#include <iostream>

using namespace std;

class Figura{
    //atributos
public:
    virtual void rotar(int grados){
        cout << "error: Figura::rotar " << grados << " grados\n";
    }
    virtual void dibujar(){
        cout << "error: Figura::dibujar\n";
    }
};

class Circulo:public Figura{
    //atributos
public:
    void rotar(int grados){
        cout << "rotando circulo " << grados << " grados\n";
    }
    void dibujar(){
        cout << "dibujando circulo\n";
    }
};

class Triangulo:public Figura{
    //atributos
public:
    void rotar(int grados){
        cout << "rotando triangulo " << grados << " grados\n";
    }
    void dibujar(){
        cout << "dibujando triangulo\n";
    }
};

int main()
{
    Figura f;
    Circulo c;
    Triangulo t;
    cout << "Con la instancia de Figura:\n";
    f.rotar(10);
    f.dibujar();
    cout << "\nCon la instancia de Circulo:\n";
    c.rotar(10);
    c.dibujar();
    cout << "\nCon la instancia de Triangulo:\n";
    t.rotar(10);
    t.dibujar();

    return 0;
}
