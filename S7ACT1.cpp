
#include <iostream>
using namespace std;

class Fraccion{
    public:
        int numerador;
        int denominador;
        Fraccion(int _numerador, int _denominador);

        Fraccion operator * (Fraccion a){
            Fraccion n_fraccion(1,1);
            n_fraccion.numerador = this -> numerador * a.numerador;
            n_fraccion.denominador = this -> denominador * a.denominador;
            return n_fraccion;
        }
 




};

Fraccion::Fraccion(int _numerador, int _denominador){
    numerador = _numerador;
    denominador = _denominador;
};


int main(){
    Fraccion frac1(1,2);
    Fraccion frac2(1,4);
    Fraccion new_fracc = frac1 * frac2;

    cout << "Numerador final: " << new_fracc.numerador << endl;
    cout << "Denominador final: "<< new_fracc.denominador << endl;

}