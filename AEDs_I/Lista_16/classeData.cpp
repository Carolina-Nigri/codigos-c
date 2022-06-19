#include <iostream>

// Constante global
const int TAM = 2;

// Protótipos
int menu();

// Classe Data
class Data{
    private:
        // Atributos
        int dia;
        int mes;
        int ano;
    public:
        // Sets
        void setDia(int dia){
            // Valores válidos [entre 1 e 31]
            if(dia < 1 || dia > 31) 
                this -> dia = 0;
            else 
                this -> dia = dia;
        }
        void setMes(int mes){
            // Valores válidos [entre 1 e 12]
            if(mes < 1 || mes > 12)
                this -> mes = 0;
            else
                this -> mes = mes;
        }
        void setAno(int ano){
            this -> ano = ano;
        }
        void setData(int dia, int mes, int ano){
            setDia(dia);
            setMes(mes);
            setAno(ano);
        }

        // Gets
        int getDia(){
            return this -> dia;
        }
        int getMes(){
            return this -> mes;
        }
        int getAno(){
            return this -> ano;
        }

        // Funções
        bool dataValida(){
            bool valida = true;

            if((this -> dia) < 1 || (this -> dia) > 31) 
                valida = false;
            if((this -> mes) < 1 || (this -> mes) > 12) 
                valida = false;

            return valida;
        }
        char* mesExtenso(){
            int mes = getMes();

            char* extenso[] = {"janeiro", "fevereiro", "marco", "abril",
                            "maio", "junho", "julho", "agosto", "setembro",
                            "outubro", "novembro", "dezembro"};
            return extenso[mes - 1];
        }
        void leData(){
            int dia;
            int mes;
            int ano;

            printf("\nData[dd/mm/aaaa]: ");
            scanf("%i/%i/%i",&dia,&mes,&ano);
            setData(dia,mes,ano);
        }
        void escreveData(){
            printf("\nData: %i/%i/%i\n",getDia(),getMes(),getAno());
        }
        bool ehMes(int mes){
            bool igual = false;

            if((this -> mes) == mes)
                igual = true;
            
            return igual;
        }
};

int main(){
    Data D[TAM];
    int op;

    do{
        op = menu();

        switch (op){
            case 0:
                puts("\nTchau!");
                break;
            case 1:
                // Cadastra datas
                    for(int i = 0;i < TAM;i++){
                        printf("\nAluno %i",i+1);
                        D[i].leData();
                    }

                break;
            case 2:
                // Pesquisa datas
                    int mes;

                    printf("\nMes a pesquisar: ");
                    scanf("%i",&mes);

                    for(int i = 0;i < TAM;i++){
                        if(D[i].ehMes(mes)){
                            printf("\nAluno %i",i+1);
                            D[i].escreveData();
                        }
                    }

                break;                
            default:
                puts("\nOpcao invalida!");
        }

    } while(op != 0);

    return 0;
}

int menu(){
    int op;

    puts("\n\tMENU");
    puts("0 – Sair");
    puts("1 – Cadastrar datas");
    puts("2 – Pesquisar datas por mês");
    printf("Sua opcao: ");
    scanf("%i",&op);

    return op;
}