#include <iostream>
using namespace std;

class Complejo{

    public:
        int a;
        int b;
        Complejo(int _a, int _b);
        
        Complejo operator + (Complejo x){
            Complejo n_c(1,1);
            n_c.a = a + x.a;
            n_c.b = b + x.b;
            return n_c;

        }

        Complejo operator - (Complejo x){
            Complejo n_c(1,1);
            n_c.a = x.a - a;
            n_c.b = x.b - b;
            return n_c;
        }


        Complejo operator * (Complejo x){
            Complejo n_c(1,1);
            n_c.a = (a * x.a) - (b * x.b);
            n_c.b = (a * x.b) - (b * x.a);
            return n_c;
        }

        Complejo operator / (Complejo x){
            Complejo n_c(1,1);
            n_c.a = (a*x.a + b * x.b)/ x.a^2 + b^2;
            n_c.b = (a*x.b + b * x.a)/ x.a^2 + b^2;
            return n_c;
        }

        Complejo operator % (float k){
            Complejo n_c(1,1);
            n_c.a = a*k;
            n_c.b= b*k;
            return n_c;
        }             


};

Complejo::Complejo(int _a, int _b){
    a = _a;
    b = _b;

}


int main(){

    Complejo z1(15, 5);
    Complejo z2(20, 5);
    Complejo sum = z1 + z2;
    cout << "Suma" << endl;
    cout << "Parte real: " << sum.a << endl;
    cout << "Parte imaginaria: " << sum.b << endl;
    cout << " " << endl;

    Complejo resta = z1 - z2;
    cout << "Resta: " << endl;
    cout << "Parte real: " << resta.a << endl;
    cout << "Parte imaginaria: " << resta.b << endl;
    cout << " " << endl;


    Complejo mult = z1 * z2;
    cout << "Multiplicacion: " <<  endl;
    cout << "Parte real: " << mult.a << endl;
    cout << "Parte imaginaria: " << mult.b << endl;
    cout << " " << endl;


    Complejo div = z1 / z2;
    cout << "Division: " <<  endl;
    cout << "Parte real: " << div.a << endl;
    cout << "Parte imaginaria: " << div.b << endl;
    cout << " " << endl;

    Complejo z(5,5);
    float k = 1;
    Complejo escalar = z % k;
    cout << "Escalar: " <<  endl;
    cout << "Parte real: " << escalar.a << endl;
    cout << "Parte imaginaria: " << escalar.b << endl;
    cout << " " << endl;




}