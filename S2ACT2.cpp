#include <iostream>
using namespace std;

class Equipo{
    public:
        Equipo(string nombre);
        string obtenernombre();
        void mostrarmensaje();
    private:
        string nombreEquipo;


};

Equipo::Equipo(string nombre){
    nombreEquipo = nombre;

}

string Equipo::obtenernombre(){
    return nombreEquipo;
}



int main(){

    Equipo miequipo1("Barcelona");
    cout << "Equipo 1 es: " << miequipo1.obtenernombre() << endl;
}