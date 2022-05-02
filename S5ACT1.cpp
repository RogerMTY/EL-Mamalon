#include <iostream>
using namespace std;

class Bebidas{
    public:
        Bebidas(string _sabor, int _mililitros);
        void mostrarBebida();
    protected:
        string sabor;
        int mililitros;
};

Bebidas::Bebidas(string _sabor, int _mililitros){
    sabor = _sabor;
    mililitros = _mililitros;
};

void Bebidas::mostrarBebida(){
    cout << "Nombre: ";
    cout << sabor << endl;
    cout << "Mililitros: ";
    cout << mililitros << endl;

};

class Naturales : public Bebidas{
    public:
        Naturales(string _sabor, int _mililitros, double _calorias): Bebidas(_sabor, _mililitros){
            sabor = _sabor;
            mililitros = _mililitros;
            calorias = _calorias;
        }
        void mostrarBebida();
    private:
    
        double calorias;

};

void Naturales::mostrarBebida(){
    Bebidas::mostrarBebida();
    cout << "Calorias: ";
    cout << calorias << endl;
    cout << " " << endl;
    cout << "++++++++++++++++++++++++++++++" << endl;
    cout << " " << endl;

};


int main(){
    Naturales natural1("Kiwi", 100, 76.56);
    Naturales natural2("Fresa", 200, 13.99);
    natural1.mostrarBebida();
    natural2.mostrarBebida();
}