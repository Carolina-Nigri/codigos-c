#include <iostream>

using namespace std;

int main(){
    // String: tipo primitivo em C++
    string nome = "Joao Vitor";
    cout << nome << endl;
    cout << "Tamanho fisico da string: " << sizeof(nome) << endl;
    cout << "Tamanho logico da string: " << nome.length() << endl;

    return 0;
}