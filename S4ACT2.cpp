#include <iostream>
using namespace std;


int main(){

    int array[4];
    cout << "Valor 1: " << endl;
    cin >> array[0];
    cout << "Valor 2: " << endl;
    cin >> array[1];
    cout << "Valor 3: " << endl;
    cin >> array[2];
    cout << "Valor 4: " << endl;
    cin >> array[3];
 
    // Algoritmo de sorteo
 
    int mayor;
    mayor = array[0];
    for (int i = 1; i < 4; i++){
        if (array[i] > mayor){
            mayor = array[i];
        }
    }

    // Puntero

    int *ptr;
    ptr = &mayor;

    cout << "Numero maximo del array: " << endl;
    cout << *ptr << endl;



}

