#include <iostream>
using namespace std;

class Fraccion{
    public:
        int constructor;
        int denominador;
        Fraccion(int _constructor, int _denominador);

        Fraccion operator - (Fraccion a){
            Fraccion n_fraccion(1,1);
            n_fraccion.constructor = constructor + a.constructor;
            n_fraccion.denominador = denominador * a.denominador;
            return n_fraccion;
        }
 




};

Fraccion::Fraccion(int _constructor, int _denominador){
    constructor = _constructor;
    denominador = _denominador;
};


int main(){
    Fraccion frac1(1,2);
    Fraccion frac2(1,4);
    Fraccion new_fracc = frac1 - frac2;

    cout << "Numerador final: " << new_fracc.constructor << endl;
    cout << "Denominador final: "<< new_fracc.denominador << endl;

}