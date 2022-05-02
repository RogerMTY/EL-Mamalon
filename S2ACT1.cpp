#include <iostream>
using namespace std;

class Equipo{
    public:
        Equipo(string nombre){
            nombreEquipo = nombre;
        }

        string obtenernombre(){
            return nombreEquipo;
        }

        void mostrarmensaje(){
            cout << "Equipo actual" << obtenernombre() << endl;
        }
    private:
        string nombreEquipo;


};



int main(){

    Equipo miequipo1("Barcelona");
    cout << "Equipo 1 es: " << miequipo1.obtenernombre() << endl;
}