#include <iostream>
using namespace std;

class Barco
{
public:
    Barco(int _largo, int _dias, string _nombre);
    void pideNombre();
    string returnNombre();
    void pideDias();
    int returnDias();
    void pideLargo();
    int returnLargo();
    int returnAlquiler();


protected:
    int largo;
    int dias;
    string nombre;
    int alquiler;
};


Barco::Barco(int _largo, int _dias, string _nombre){
    largo = _largo;
    dias = _dias;
    nombre = _nombre;
};



int Barco::returnAlquiler(){
    return alquiler;
}

void Barco::pideNombre(){
    cout << "Escribe tu nombre: " << endl;
    cin >> nombre;
}

string Barco::returnNombre(){
    return nombre;
}

void Barco::pideDias(){
    cout << "Cuantos dias?" << endl;
    cin >> dias;
}

int Barco::returnDias(){
    return dias;
}

void Barco::pideLargo(){
    cout << "Cuanto de largo?" << endl;
    cin >> largo;
}

int Barco::returnLargo(){
    return largo;
}


class velero : public Barco
{
public:
    velero(int _largo, int _dias, string _nombre, int _mastiles) : Barco(_largo, _dias, _nombre)
    {
         largo = _largo;
         dias = _dias;
         nombre = _nombre;
         mastiles = _mastiles;


    }
    void pideMastiles(){ 
        cout << "Cuantos mastiles?" << endl;
        cin >> mastiles;
    }
    void crearAlquiler(){
        alquiler = dias * (10 * largo + mastiles)*200;
    }

    int returnMastiles(){
        return mastiles;
    }

private:
    
     int mastiles;

};




class deportivo : public Barco
{
public:
    deportivo(int _largo, int _dias, string _nombre, int _potencia):Barco(_largo, _dias, _nombre){
        largo = _largo;
        dias = _dias;
        nombre = _nombre;
        potencia = _potencia;
    }
    void pidePotencia(){
        cout << "Potencia: " << endl;
        cin >> potencia;
    }
    void crearAlquiler(){
        alquiler = dias * (10 * largo + potencia)*200;
    }

    int returnPotencia(){
        return potencia;
    }

private:
    int potencia;
};




class yate : public Barco
{
public:
    yate(int _largo, int _dias, string _nombre, int _potencia, int _camarotes):Barco(_largo, _dias, _nombre){
        largo = _largo;
        dias = _dias;
        nombre = _nombre;
        potencia = _potencia;
        camarotes = _camarotes;

    }
    void pidePotencia(){
        cout << "Potencia: " << endl;
        cin >> potencia;
    }
    void pideCamarotes(){
        cout << "Camarotes: " << endl;
        cin >> camarotes;
    }
    void crearAlquiler(){
        alquiler = dias * (10 * largo + (potencia + camarotes)*200);
    }

    int returnPotencia(){
        return potencia;
    }

    int returnCamarotes(){
        return camarotes;
    }

private:
    int potencia;
    int camarotes;
};

int main()
{
    int decision;
    cout << "Bienvenido al sistema de alquiler de amarres!" << endl;
    cout << "Escribe el numero del tipo de tu barco!" << endl;
    cout << "1. Velero" << endl;
    cout << "2. Deportivo" << endl;
    cout << "3. Yate" << endl;
    cin >> decision;
    if (decision == 1){
        velero velero1(0, 0, " ", 0);
        velero1.pideLargo();
        velero1.pideDias();
        velero1.pideMastiles();
        velero1.pideNombre();
        velero1.crearAlquiler();
        cout << " " << endl;
        cout << "Datos de transaccion: " << endl;
        cout << "Nombre: ";
        cout << velero1.returnNombre() << endl;
        cout << "Dias de estancia: ";
        cout << velero1.returnDias() << endl;
        cout << "Largo del bote: ";
        cout << velero1.returnLargo() << endl;
        cout << "Numero de mastiles: ";
        cout << velero1.returnMastiles() << endl;
        cout << "Este es el total de tu alquiler: ";
        cout << velero1.returnAlquiler() << endl;

    }else if (decision == 2)
    {
        deportivo deportivo1(0,0,"", 0);
        deportivo1.pideLargo();
        deportivo1.pideDias();
        deportivo1.pidePotencia();
        deportivo1.pideNombre();
        deportivo1.crearAlquiler();
        cout << " " << endl;
        cout << "Datos de transaccion: " << endl;
        cout << "Nombre: ";
        cout << deportivo1.returnNombre() << endl;
        cout << "Dias de estancia: ";
        cout << deportivo1.returnDias() << endl;
        cout << "Largo del bote: ";
        cout << deportivo1.returnLargo() << endl;
        cout << "Potencia del bote: ";
        cout << deportivo1.returnPotencia() << endl;
        cout << "Este es el total de tu alquiler: ";
        cout << deportivo1.returnAlquiler() << endl;

    }else if (decision == 3)
    {
        yate yate1(0,0,"", 0, 0);
        yate1.pideLargo();
        yate1.pideDias();
        yate1.pidePotencia();
        yate1.pideCamarotes();
        yate1.pideNombre();
        yate1.crearAlquiler();
        cout << " " << endl;
        cout << "Datos de transaccion: " << endl;
        cout << "Nombre: ";
        cout << yate1.returnNombre() << endl;
        cout << "Dias de estancia: ";
        cout << yate1.returnDias() << endl;
        cout << "Largo del bote: ";
        cout << yate1.returnLargo() << endl;
        cout << "Potencia del bote: ";
        cout << yate1.returnPotencia() << endl;
        cout << "Numero de camarotes: ";
        cout << yate1.returnCamarotes() << endl;
        cout << "Este es el total de tu alquiler: ";
        cout << yate1.returnAlquiler() << endl;

    }
    
    







 
  





    



}