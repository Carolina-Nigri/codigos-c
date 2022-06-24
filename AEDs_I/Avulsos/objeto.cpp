#include <iostream>

using namespace std;

class ClasseA{
    private:
        int x;
    
    public:
        // Construtor
        ClasseA(int x){
            this -> setX(x);
        }
        // Destrutor
        ~ClasseA(){
            cout << "Morri em " << this << endl;
        }
        // Get
        int getX(){
            return x;
        }
        // Set
        void setX(int x){
            if(x >= 0) this -> x = x;
        }
};


int main(){
    // Instancia um objeto da Classe A como ponteiro, criando-o com o construtor 
    ClasseA* objA = new ClasseA(7);
    cout << objA -> getX() << endl;

    // Destrutor
    delete objA;
    cout << "Objeto destruido" << endl;
  
    return 0;
}