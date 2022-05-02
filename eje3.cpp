#include <iostream>
using namespace std;

class habitacion{
    public:
        double calcArea(double largo, double ancho);
        double calcVol(double largo, double ancho, double alto);
};


double habitacion::calcArea(double largo, double ancho){
    return largo * ancho;

};

double habitacion::calcVol(double largo, double ancho, double alto){
    return largo*ancho*alto;
};



int main(){
    
    habitacion cuarto;
    double l = 20, w = 30, h = 20;
    cout << endl;
    cout << cuarto.calcArea(l, w) << endl;
    cout << cuarto.calcVol(l, w, h) << endl;

}