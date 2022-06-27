#include <iostream>

using namespace std;

// Classe base
class Animal{
    private:
        string nome;
    public:
        // Construtor de Animal
        Animal(string nome){
            this -> setNome(nome);
        }
        // Construtor vazio
        Animal() { }

        // Get
        string getNome(){
            return nome;
        }

        // Set
        void setNome(string nome){
            this -> nome = nome;
        }
};

// Classes derivadas
// Se a herança não é especificada, padrão: private
class Cachorro : public Animal{
    public:
        // Construtor de Cachorro: chama o construtor de Animal
        Cachorro(string nome) : Animal(nome) { }
        // Construtor vazio
        Cachorro() { }
};
class Gato : public Animal{
    public:
        // Construtor de Gato: chama o construtor de Animal
        Gato(string nome) : Animal(nome) { }
        // Construtor vazio
        Gato() { }
};

// Tamanho do arranjo
const int TAM = 3;

void leCachorros(Cachorro caes[]){
    string nome;
    
    for(int i = 0;i < TAM;i++){
        cout << endl << "Cachorro: ";
        cin >> nome;
        caes[i].setNome(nome);
    }
}

void listaCachorros(Cachorro caes[]){
    for(int i = 0;i < TAM;i++){
        cout << caes[i].getNome() << endl;
    }
}

void leGatos(Gato gatos[]){
    string nome;
    
    for(int i = 0;i < TAM;i++){
        cout << endl << "Gato: ";
        cin >> nome;
        gatos[i].setNome(nome);
    }
}

void listaGatos(Gato gatos[]){
    for(int i = 0;i < TAM;i++){
        cout << gatos[i].getNome() << endl;
    }
}

int main(){
    Animal* animal = new Animal("bicho");
    Cachorro* cachorro = new Cachorro("sol");
    Gato* gato = new Gato("lua");

    cout << animal -> getNome() << endl;
    cout << cachorro -> getNome() << endl;
    cout << gato -> getNome() << endl;

    Cachorro caes[TAM];
    leCachorros(caes);
    listaCachorros(caes);

    Gato gatos[TAM];
    leGatos(gatos);
    listaGatos(gatos);

    return 0;
}