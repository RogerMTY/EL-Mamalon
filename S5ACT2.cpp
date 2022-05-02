#include <iostream>
using namespace std;

class Figura{
    public:
        void obtener(int _largo, int _alto);
        virtual float area();


    protected:
        int largo;
        int alto;
};


void Figura::obtener(int _largo, int _alto){
    largo = _largo;
    alto = _alto;

};

float Figura::area(){
    return 0;
}

class Rectangulo : public Figura{
    public:
        void obtener(int _largo, int _alto){
            Figura::obtener(_largo, _alto);
        };
        float area(){
            a = largo * alto;
            return a;
        };

    protected:
        int a;

};


class Triangulo : public Figura{
    public:
        void obtener(int _largo, int _alto){
            Figura::obtener(_largo, _alto);
        };
        float area(){
            a = (largo * alto) / 2;
            return a;
        }

    private:
        int a;


};


int main(){
    Figura *Rect01;
    Figura *Triangulo01;
    Rect01 = new Rectangulo;
    Triangulo01 = new Triangulo;

    Rect01 -> obtener(4, 5);
    Triangulo01 -> obtener(4, 5);
    cout << Rect01 -> area() << " <- Area del rectangulo" << endl;
    cout << Triangulo01 -> area() << " <- Area del triangulo" << endl;

}