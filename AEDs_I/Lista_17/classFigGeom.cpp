// Definições iniciais
#include <iostream>
using namespace std;

// Variáveis globais
int TAM = 3;
const int PI = 3.14;

// Classes
// Classe base (abstrata)
class FiguraGeometrica{
    private:

    public:
        // Métodos abstratos 
        virtual float perimetro() = 0;
        virtual float area() = 0;

};
// Classes derivadas (concretas)
class Quadrado : public FiguraGeometrica{
    private:
        // Atributo
        float lado;
    public:
        // Set
        void setLado(float lado){
            this -> lado = lado;
        }
        // Get
        float getLado(){
            return this -> lado;
        }
        // Métodos concretos
        float perimetro(){
            return (this -> lado) * 4;
        }
        float area(){
            return (this -> lado) * (this -> lado);
        }
};
class Circulo : public FiguraGeometrica{
    private:
        // Atributo
        float raio;
    public:
        // Set
        void setRaio(float raio){
            this -> raio = raio;
        }
        // Get
        float getRaio(){
            return this -> raio;
        }
        // Métodos concretos
        float perimetro(){
           return 2 * PI * (this -> raio); 
        }
        float area(){
            return PI * ((this -> raio) * (this -> raio)); 
        }
};

// Protótipos


int main(){
    // Ponteiro para Quadrado + Instancia de um objeto
    Quadrado* quadrado = new Quadrado();
    quadrado -> setLado(5);

    // Ponteiro para Circulo + Instancia de um objeto
    Circulo* circulo = new Circulo();
    circulo -> setRaio(2);

    return 0;
}

// Funções