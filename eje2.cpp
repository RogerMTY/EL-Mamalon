#include <iostream>
using namespace std;

class miclase{
    public:
        void metodo();
};

void miclase::metodo(){
    cout << "buenos dias" << endl;
};

int main(){
    miclase miobjeto;
    miobjeto.metodo();
}