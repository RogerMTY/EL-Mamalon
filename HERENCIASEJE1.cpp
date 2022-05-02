#include <iostream>
using namespace std;

class Operacion{
    public:
        void pedir1();
        void pedir2();
        void mostrarResultado();
    protected:
        int valor1;
        int valor2;
        int resultado;
};


class Suma:public Operacion{
    public:
        void procesar();
};

class Resta:public Operacion{
    public:
        void procesar();

};


void Operacion::pedir1(){
    cout << "Ingresa un valor: " << endl;
    cin >> valor1;
};

void Operacion::pedir2(){
    cout << "Ingresa otro valor: " << endl;
    cin >> valor2;
};

void Operacion::mostrarResultado(){
    cout << "Resultado: " << resultado << endl;
};

void Suma::procesar(){
    resultado = valor1 + valor2;
};

void Resta::procesar(){
    resultado = valor1 - valor2;
};



int main(){

    Suma suma1;
    suma1.pedir1();
    suma1.pedir2();
    suma1.procesar();
    suma1.mostrarResultado();

    Resta resta1;
    resta1.pedir1();
    resta1.pedir2();
    resta1.procesar();
    resta1.mostrarResultado();

}