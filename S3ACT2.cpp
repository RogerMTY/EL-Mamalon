#include <iostream>
using namespace std;


// Una agencia vendedora de autos desea un sistema computacional para administrar los datos de sus vehículos y clasificarlos por tipo. 
//Todos los autos tienen los siguientes datos:
// • Número de serie del motor.
// • Marca.
// • Año.
// • Precio.


class vehiculo{
    public:
        vehiculo(int _nserie, string _marca, int _year, double _precio);
        int getSerie();
        string getMarca();
        int getYear();
        double getPrecio();

    protected:
        int nserie;
        string marca;
        int year;
        double precio;
    
};




vehiculo::vehiculo(int _nserie, string _marca, int _year, double _precio){
    nserie = _nserie;
    marca = _marca;
    year = _year;
    precio = _precio;

};


int vehiculo::getSerie(){
    return nserie;
};

string vehiculo::getMarca(){
    return marca;
};

int vehiculo::getYear(){
    return year;
};

double vehiculo::getPrecio(){
    return precio;
};

class compacto: public vehiculo{
    public:
        compacto(int _nserie, string _marca, int _year, double _precio, int _cantpasajeros):vehiculo(_nserie, _marca, _year, _precio){
            nserie = _nserie;
            marca = _marca;
            year = _year;
            precio = _precio;
            cantpasajeros = _cantpasajeros;
        
        }
        int getPasajeros();

    private:
        int nserie;
        string marca;
        int year;
        double precio;
        int cantpasajeros;
        
};

int compacto::getPasajeros(){
    return cantpasajeros;
};

class lujo: public vehiculo{
    public:
        lujo(int _nserie, string _marca, int _year, double _precio, int _cantpasajeros, string _tipocoche):vehiculo(_nserie, _marca, _year, _precio){
            nserie = _nserie;
            marca = _marca;
            year = _year;
            precio = _precio;
            cantpasajeros = _cantpasajeros;   
            tipocoche = _tipocoche;  
        }
        int getPasajeroslujo();
        string getTipo();
        

    private:
        int nserie;
        string marca;
        int year;
        double precio;
        int cantpasajeros;
        string tipocoche;


};

int lujo::getPasajeroslujo(){
    return cantpasajeros;
};

string lujo::getTipo(){
    return tipocoche;
};



class camioneta: public vehiculo{
    public:
        camioneta(int _nserie, string _marca, int _year, double _precio, int _capacidadcarga):vehiculo(_nserie, _marca, _year, _precio){
            nserie = _nserie;
            marca = _marca;
            year = _year;
            precio = _precio;
            capacidadcarga = _capacidadcarga;
        }
        int getCarga();

    private:
        int nserie;
        string marca;
        int year;
        double precio;
        int capacidadcarga;


};

int camioneta::getCarga(){
    return capacidadcarga;
}

class vagoneta: public vehiculo{
    public:
        vagoneta(int _nserie, string _marca, int _year, double _precio, int _capacidadcarga, int _pasajeroscant):vehiculo(_nserie, _marca, _year, _precio){
            nserie = _nserie;
            marca = _marca;
            year = _year;
            precio = _precio;
            capacidadcarga = _capacidadcarga;
            pasajeroscant = _pasajeroscant;
        }
        int getCVagoneta();
        int getPasajerosvagoneta();

    private:
        int nserie;
        string marca;
        int year;
        double precio;
        int capacidadcarga;
        int pasajeroscant;

};


int vagoneta::getCVagoneta(){
    return capacidadcarga;
};

int vagoneta::getPasajerosvagoneta(){
    return pasajeroscant;
};




int main(){
    compacto compacto1(124521, "Chevrolet", 2021, 100.000, 4);
    lujo lujo1(849234, "BMW", 2019, 700.000, 5, "HIBRIDO");
    camioneta camioneta1(394197, "ROLLS ROYCE", 2020, 800.000, 1000);
    vagoneta vagoneta1(981203, "FERRARI", 2017, 900.000, 1000, 7);
    
    cout << "Datos auto compacto: " << endl;
    cout << "Serie: ";
    cout << compacto1.getSerie() << endl;
    cout << "Marca: ";
    cout << compacto1.getMarca() << endl;
    cout << "Year: ";
    cout << compacto1.getYear() << endl;
    cout << "Precio: ";
    cout << compacto1.getPrecio() << endl;
    cout << "Pasajeros: ";
    cout << compacto1.getPasajeros() << endl;
    cout << " " << endl;
    cout << "Datos auto de lujo: " << endl;
    cout << "Serie: ";
    cout << lujo1.getSerie() << endl;
    cout << "Marca: ";
    cout << lujo1.getMarca() << endl;
    cout << "Year: ";  
    cout << lujo1.getYear() << endl;
    cout << "Precio: ";
    cout << lujo1.getPrecio() << endl;
    cout << "Pasajeros: ";
    cout << lujo1.getPasajeroslujo() << endl;
    cout << "Tipo: ";
    cout << lujo1.getTipo() << endl;
    cout << " " << endl;
    cout << "Datos camioneta: " << endl;
    cout << "Serie: ";
    cout << camioneta1.getSerie() << endl;
    cout << "Marca: ";
    cout << camioneta1.getMarca() << endl;
    cout << "Year: ";  
    cout << camioneta1.getYear() << endl;
    cout << "Precio: ";
    cout << camioneta1.getPrecio() << endl;
    cout << "Carga: ";
    cout << camioneta1.getCarga() << endl;
    cout << " " << endl;
    cout << "Datos vagoneta: " << endl;
    cout << "Serie: ";
    cout << vagoneta1.getSerie() << endl;
    cout << "Marca: ";
    cout << vagoneta1.getMarca() << endl;
    cout << "Year: ";  
    cout << vagoneta1.getYear() << endl;
    cout << "Precio: ";
    cout << vagoneta1.getPrecio() << endl;
    cout << "Carga: ";
    cout << vagoneta1.getCVagoneta() << endl;
    cout << "Pasajeros: ";
    cout << vagoneta1.getPasajerosvagoneta() << endl;


}