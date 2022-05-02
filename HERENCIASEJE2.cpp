#include <iostream>
using namespace std;

class Animal{
    public:
        Animal(int _edad){
            edad = _edad;
        }

        void fijaEdad(int _edad){
            edad = _edad;
        }

        int regresaEdad(){
            return edad;
        }
    private: 
        int edad;
};


class Perro:public Animal{
    public:
        Perro(int _edad):Animal(_edad){
            edad = _edad;
        }
    private:
        int edad;
};

class Gato:public Animal{
    public:
        Gato(int _edad, float _peso):Animal(_edad){
            edad = _edad;
            peso = _peso;
        }

        float regresaPeso(){
            return peso;
        }
    private:
        int edad;
        float peso;

};

int main(){
    
    Perro chihuahua(3);
    cout << "Edad perro: " << chihuahua.regresaEdad() << endl;

    Gato siames(4, 3.50);
    cout << "Info gato: " << siames.regresaPeso() << siames.regresaEdad() << endl;

}
