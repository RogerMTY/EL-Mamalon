#include <iostream>
using namespace std;

class Persona{
    public:
        Persona();
        void setDatos(string _nombre, int _edad);
        string getNombre();
        int getEdad();
    protected:
        string nombre;
        int edad;
};


Persona::Persona(){
    nombre = " ";
    edad = 0;
    
};


void Persona::setDatos(string _nombre, int _edad){
    nombre = _nombre;
    edad = _edad;
};

string Persona::getNombre(){
    return nombre;
};

int Persona::getEdad(){
    return edad;
};



class Empleado:public Persona{
    public:
        void cargarSueldo(int _sueldo){
            sueldo = _sueldo;
        }

        
        int imprimirSueldo(){
            return sueldo;
        }

    private:

        int sueldo;
        
};


int main(){

    Persona persona1;
    persona1.setDatos("Pepe", 20);
    cout << "Datos de la persona:" << endl;
    cout << "Nombre: ";
    cout << persona1.getNombre() << endl;
    cout << "Edad: ";
    cout << persona1.getEdad() << "y/o." << endl;

    Empleado empleado1;
    empleado1.cargarSueldo(100);
    cout << "Sueldo: ";
    cout << empleado1.imprimirSueldo() << " dolares mensuales." << endl;


}
