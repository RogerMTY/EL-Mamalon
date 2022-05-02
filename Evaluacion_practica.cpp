#include <iostream>
using namespace std;

// Clase ángulos
class Angulos{
  protected:
        // Atributos de la clase base
        int grados;
        int minutos;
        int segundos;
    public:      
      // Constructor parametrizado
      Angulos(int grados, int minutos, int segundos) {
      // Chequeo de valores validos
        if (grados > 359){
          this ->grados = 0;
        }else
          this->grados = grados;
        if (minutos > 59){
          this ->minutos = 0;
        }else
          this->minutos = minutos;
        if (segundos > 59){
          this -> segundos = 0;
        }else
           this->segundos = segundos;
      }

      // Sobrecarga de operador miembro +
      Angulos operator + (Angulos x){
            Angulos n_c(1,1,1);
      // Chequeo de sobrepaso de grados
            if (grados + x.grados > 359) {
              n_c.grados = grados + x.grados / 10;
            } else if (grados + x.grados < 359){
              n_c.grados = grados + x.grados;
            }
            
      // Chequeo de sobrepaso de minutos
            if (minutos + x.minutos > 59) {
              int tmp = minutos + x.minutos;
              tmp = tmp - 60;
              n_c.minutos = tmp;
              n_c.grados += 1;
            } else if (minutos + x.minutos < 59) {
              n_c.minutos = minutos + x.minutos;
            }

      // Chequeo de sobrepaso de segundos
            
            if (segundos + x.segundos > 59) {
              int tmp = segundos + x.segundos;
              tmp = tmp - 60;
              n_c.segundos = tmp;
              n_c.minutos += 1;
            } else if (segundos + x.segundos < 59) {
              n_c.segundos = segundos + x.segundos;
            }
            return n_c;
      }

      // Método que imprime 
      virtual void Bienvenida(){
        cout << "Bienvenido a Angulos" << endl;
      }

      // Método que imprime los atributos de la clase
      void imprimeAtributos() {
        cout << "La salida es: " << this->grados << " grados, "
        << this->minutos << " minutos, "
        << this->segundos << " segundos, " << endl;
      }
};

// Clase derivada : Herencia Clase Base
class Derivada : public Angulos {
  private:
    // Atributos de la clase
    int ciclos;
  public:
    // Constructor parametrizado
    Derivada (int ciclos, int grados, int minutos, int segundos) : Angulos (grados, minutos, segundos) {
      // Chequeo de valores válidos
      if(ciclos <= 0){
        this->ciclos = 1;     
      }else
        this->ciclos = ciclos;
      if (grados > 360){
        this->grados = 0;
      }else
        this->grados = grados;
      if (minutos > 59){
        this -> minutos = 0;
      }else
        this -> minutos = minutos;
      if (segundos > 59){
        this -> segundos = 0;
      }else
        this -> segundos = segundos;
 
    }

    // Método que imprime bienvenidas
    void Bienvenida(){
      Angulos::Bienvenida();
      cout << "Bienvenido a Derivada" << endl;
    }

    // Método para desplegar el ciclo guardado
      void imprimeCiclo() {
        cout << "Ciclos: " << ciclos << endl; 
    }
};

// Codigo principal
int main() {
  cout << "\n***************PRIMER EJERCICIO***************" << endl;
  // Primer objeto
  Angulos objeto1(12, 10, 25);
  // Segundo objeto
  Angulos objeto2(1, 20, 55);
  // Suma del primer objeto con el segundo
  Angulos sumaObjetos = objeto1 + objeto2;
  // Objeto de la clase derivada
  Derivada objeto4(10, 19, 12, 22);
  // Imprimimos la suma
  sumaObjetos.imprimeAtributos();
  // Bienvenida de la clase base y clase derivada (una sola invocación)
  objeto4.Bienvenida();
  // Desplegar ciclo guardado
  objeto4.imprimeCiclo();

cout << "\n***************SEGUNDO EJERCICIO***************" << endl;
  // Primer objeto
  Angulos objetoX1(12, 30, 25);
  // Segundo objeto
  Angulos objetoX2(0, 40, 5);
  // Suma del primer objeto con el segundo
  Angulos sumaObjetosX = objetoX1 + objetoX2;
  // Objeto de la clase derivada
  Derivada objetoX4(10, 19, 12, 22);
  //Imprimimos la suma
  sumaObjetosX.imprimeAtributos();
  // Bienvenida de la clase base y clase derivada (una sola invocación)
  objeto4.Bienvenida();
  // Desplegar ciclo guardado
  objeto4.imprimeCiclo();
} 