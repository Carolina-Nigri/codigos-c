// Definições iniciais
#include <iostream>
using namespace std;

// Variáveis globais
int TAM = 3;

// Estruturas
typedef struct{
    float base;
    float altura;
} Retangulo;

// Protótipos
void leiaRetangulos(Retangulo retangulo[]);
void escrevaRetangulos(Retangulo retangulo[]);
void leiaRetangulos(Retangulo* retangulo[]);
void escrevaRetangulos(Retangulo* retangulo[]);
void listaAreas(Retangulo retangulo[]);
float somaAreasIter(Retangulo retangulo[]);
float somaAreasRec(Retangulo retangulo[], int i);

int main(){
    // Alocação estática 
    cout << endl << "******Alocacao estatica******" << endl;
    Retangulo retangulo[TAM];
    cout << endl << "*** Leitura ***" << endl;
    leiaRetangulos(retangulo);
    cout << endl << "*** Escrita ***" << endl;
    escrevaRetangulos(retangulo);

    // Alocação dinâmica (ponteiro) 
    cout << endl << "******Alocacao dinamica******" << endl;
    Retangulo* retang[TAM];
    cout << endl << "*** Leitura ***" << endl;
    leiaRetangulos(retang);
    cout << endl << "*** Escrita ***" << endl;
    escrevaRetangulos(retang);

    // Lista áreas
    cout << endl << "******Areas******" << endl;
    listaAreas(retangulo);

    // Soma áreas
    cout << endl << "******Soma das Areas******" << endl;
    cout << endl << "Soma (iterativa): " << somaAreasIter(retangulo) << endl;
    cout << endl << "Soma (recursiva): " << somaAreasRec(retangulo, TAM) << endl;

    return 0;
}

// Funções
void leiaRetangulos(Retangulo retangulo[]){
    for(int i = 0;i < TAM;i++){
        cout << endl << (i+1) << endl;
        cout << "Altura: ";
        cin >> retangulo[i].altura;
        cout << "Base: ";    
        cin >> retangulo[i].base;
    }
}
void escrevaRetangulos(Retangulo retangulo[]){
    for(int i = 0;i < TAM;i++){
        cout << endl << (i+1) << endl;
        cout << "Altura: " << retangulo[i].altura << endl;
        cout << "Base: " << retangulo[i].base << endl;
    }
}
void leiaRetangulos(Retangulo* retangulo[]){
    for(int i = 0;i < TAM;i++){
        retangulo[i] = (Retangulo*) malloc(sizeof(Retangulo));
        cout << endl << (i+1) << endl;
        cout << "Altura: ";
        cin >> retangulo[i] -> altura;
        cout << "Base: ";    
        cin >> retangulo[i] -> base;
    }
}
void escrevaRetangulos(Retangulo* retangulo[]){
    for(int i = 0;i < TAM;i++){
        cout << endl << (i+1) << endl;
        cout << "Altura: " << retangulo[i] -> altura << endl;
        cout << "Base: " << retangulo[i] -> base << endl;
    }
}
void listaAreas(Retangulo retangulo[]){
    for(int i = 0;i < TAM;i++){
        float area = (retangulo[i].altura * retangulo[i].base);
        cout << endl << "Area " << (i+1) << ": " << area << endl;
    }
}
float somaAreasIter(Retangulo retangulo[]){
    float soma = 0;
    
    for(int i = 0;i < TAM;i++){
        soma += (retangulo[i].altura * retangulo[i].base);
    }
        
    return soma;
}
float somaAreasRec(Retangulo retangulo[], int i){
    float soma = (retangulo[i-1].altura * retangulo[i-1].base);
    
    if(i > 1){
        soma += somaAreasRec(retangulo, i - 1);
    }
        
    return soma;
}