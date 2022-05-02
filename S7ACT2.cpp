#include <iostream>
using namespace std;

class Componentes{
    public:
        int x;
        int y;
        Componentes();

        bool operator == (Componentes ps){
            if (x == ps.x && y == ps.y){
                return true;
            }else
                return false;     
        }


};


Componentes::Componentes(){
    x = 0;
    y = 0;

};


int main(){
    Componentes ps1;
    Componentes ps2;
    ps1.x = 10;
    ps2.x = 10;
    ps1.y = 20;
    ps2.y = 20;


    if (ps1 == ps2){
        cout << "Son iguales" << endl;
    }else
        cout << "No son iguales" << endl;
}