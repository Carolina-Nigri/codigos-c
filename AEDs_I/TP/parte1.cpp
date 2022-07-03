// Definições iniciais
#include <iostream>
using namespace std;

// Variávies globais
const int MAX = 300;
int tamanho = 0;

// Classes
class Data{
    private:
        // Atributos
        int dia;
        int mes;
        int ano;
    public:
        // Construtores
        Data(){
            (this -> dia) = (this -> mes) = (this -> ano) = 0;
            tamanho++;
        }
        
        // Sets
        bool setDia(int dia){
            bool valido = false;

            // Valores válidos [entre 1 e 31]
            if(dia >= 1 && dia <= 31){ 
                (this -> dia) = dia;
                valido = true;
            }

            return valido;
        }
        bool setMes(int mes){
            bool valido = false;

            // Valores válidos [entre 1 e 12]
            if(mes >= 1 && mes <= 12){ 
                (this -> mes) = mes;
                valido = true;
            }

            return valido;
        }
        void setAno(int ano){
            (this -> ano) = ano;
        }
        void setData(int dia, int mes, int ano){
            setDia(dia);
            setMes(mes);
            setAno(ano);
        }
        
        // Gets
        int getDia(){
            return (this -> dia);
        }
        int getMes(){
            return (this -> mes);
        }
        int getAno(){
            return (this -> ano);
        }

        // Métodos
        bool ehAnoBissexto(){
            int restoDiv4 = (this -> ano) % 4;
            int restoDiv100 = (this -> ano) % 100;
            int restoDiv400 = (this -> ano) % 400;
      
            // Divisível por 4 e não por 100 OU Divisível por 400 = Bissexto
            bool Bissexto = ((restoDiv4 == 0) && (restoDiv100 != 0) || (restoDiv400 == 0));
      
            return Bissexto;
        }
        bool ehDataValida(){
            // dia, mes, ano => Atributos do objeto corrente
            bool valida = false;
            bool mes31 = mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 ||
                            mes == 10 || mes == 12;
            bool mes30 = mes == 4 || mes == 6 || mes == 9 || mes == 11;

            // Meses de 31 dias
            if(mes31){ 
                if(dia > 0 && dia <= 31) valida = true;
            } 
            // Meses de 30 dias
            else if(mes30){ 
                if(dia > 0 && dia <= 30) valida = true;
            } 
            // Fevereiro
            else if(mes == 2){ 
                if(this -> ehAnoBissexto()){ // Ano bissexto
                    if(dia > 0 && dia <= 29) valida = true;
                } else{ // Ano não é bissexto
                    if(dia > 0 && dia <= 28) valida = true;
                }
            }

            return valida;
        }
        string mesExtenso(){
            string extenso[] = {"janeiro", "fevereiro","marco","abril","maio","junho",
                        "julho","agosto","setembro","outubro","novembro","dezembro"};
            
            return extenso[(this -> mes) - 1];
        }
        void leData(){
            int dia;
            int mes;
            int ano;

            do{
                printf("\nData [dd/mm/aaaa]: ");
                scanf("%i/%i/%i",&dia,&mes,&ano);
                setData(dia,mes,ano);

                if(!(this -> ehDataValida())) puts("\nData invalida!");
            } while(!(this -> ehDataValida()));
        }
        void escreveData(){
            if(this -> ehDataValida()) 
                printf("\nData: %i/%i/%i\n",getDia(),getMes(),getAno());
            else
                puts("\nData invalida!");
        }
        bool ehMes(int mes){
            bool igual = false;

            if((this -> mes) == mes) 
                igual = true;

            return igual;
        }
};

// Protótipos
int menu();
void cadastraData(Data* data[]);
void listaDatas(Data* data[]);
void pesquisaDatas(Data* data[]);
int mesPesquisa();
void listaDatas(Data* data[],int mes);

int main(){
    Data* data[MAX];
    int op;
    
    do{
        op = menu();

        switch(op){
            case 0:
                puts("\nTchau!");
                break;

            case 1:
                cadastraData(data);
                break;

            case 2:
                listaDatas(data);
                break;

            case 3:
                pesquisaDatas(data);
                break;
        }

    } while(op != 0);

    return 0;
}

// Funções
int menu(){
    int op;
    bool invalida;

    do{
        puts("\n\tMENU\n");
        puts("0 – Sair");
        puts("1 – Cadastrar uma data");
        puts("2 – Listar datas");
        puts("3 – Pesquisar datas por um mes chave");
        printf("\nSua opcao: ");
        scanf("%i",&op);
        invalida = (op < 0) || (op > 3);
        if(invalida) puts("\n\aOpcao invalida!");
    } while(invalida);

    return op;
}
void cadastraData(Data* data[]){
    if(tamanho < MAX){
        data[tamanho] = new Data();
        data[tamanho - 1] -> leData();
    } else{
        puts("\nNumero max de datas atingido");
    }
}
void listaDatas(Data* data[]){
    for(int i = 0;i < tamanho;i++){
        data[i] -> escreveData();
    }
}
void pesquisaDatas(Data* data[]){
    int mes = mesPesquisa();
    listaDatas(data,mes);
}
int mesPesquisa(){
    int mes;
    bool invalido;

    do{
        printf("\nMes a pesquisar: ");
        scanf("%i",&mes);
        invalido = (mes < 1) || (mes > 12);
        if(invalido) puts("\n\aMes invalido!");
    } while(invalido);

    return mes;
}
void listaDatas(Data* data[],int mes){
    for(int i = 0;i < tamanho;i++){
        if(data[i] -> ehMes(mes)){
            printf("\n%i",i);
            data[i] -> escreveData();
            cout << (data[i] -> mesExtenso()) << endl;
        }
    }
}