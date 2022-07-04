// Definições iniciais
#include <iostream>
using namespace std;

// Variávies globais
const int MAX = 300;
int qtdAluno = 0;
int qtdProf = 0;

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
            bool Bissexto = (((restoDiv4 == 0) && (restoDiv100 != 0)) || (restoDiv400 == 0));
      
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
                printf("\nData: %i/%i/%i",getDia(),getMes(),getAno());
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
// Classe base
class Pessoa{
    private:
        // Atributos
        string nome;
        Data nasc;
    public:
        // Construtores
        /*
        Pessoa(){
            
        }
        */

        // Sets
        void setNome(string nome){
            this -> nome = nome;
        }
        void setNasc(Data nasc){
            (this -> nasc) = nasc;
        }
            
        // Gets
        string getNome(){
            return this -> nome;
        }
        Data getNasc(){
          return this -> nasc;
        }

        // Métodos
        void lePessoa(){
            string nome;

            printf("\nNome: ");
            cin.ignore();
            getline(cin,nome);
            setNome(nome);

            printf("\nNascimento: ");
            nasc.leData();
        }
        void escrevePessoa(){
            cout << endl << "Nome: " << getNome();
            nasc.escreveData();
        }

};
// Classes derivadas
class Professor : public Pessoa{
    private:
        // Atributos
        string depto;
    public:
        // Construtores
        /*
        Professor(){
            
        }
        */
        // Sets
        void setDepto(string depto){
            (this -> depto) = depto;
        }

        // Gets
        string origem(){
            return this -> depto;
        }
        
        // Métodos
        void leProfessor(){
            this -> lePessoa();

            string depto;

            printf("\nDepartamento: ");
            cin.ignore();
            getline(cin,depto);
            setDepto(depto);
        }
        void escreveProfessor(){
            this -> escrevePessoa();

            cout << endl << "Departamento: " << origem() << endl;
        }
};
class Aluno : public Pessoa{
    private:
        // Atributos
        string curso;
    public:
        // Construtores
        /*
        Aluno(){
            
        }
        */
        // Sets
        void setCurso(string curso){
            (this -> curso) = curso;
        }

        // Gets
        string origem(){
            return this -> curso;
        }
        
        // Métodos
        void leAluno(){
            this -> lePessoa();

            string curso;

            printf("\nCurso: ");
            cin.ignore();
            getline(cin,curso);
            setCurso(curso);
        }
        void escreveAluno(){
            this -> escrevePessoa();

            cout << endl << "Curso: " << origem() << endl;
        }
};

// Protótipos
int menu();
void cadastraProfessor(Professor* professor[]);
void cadastraAluno(Aluno* aluno[]);
void listaPessoas(Professor* professor[], Aluno* aluno[]);
void pesquisaPessoas(Professor* professor[], Aluno* aluno[]);
int mesPesquisa();
void listaPessoas(Professor* professor[], Aluno* aluno[],int mes);

int main(){
    Professor* professor[MAX];
    Aluno* aluno[MAX];
    int op;
    
    do{
        op = menu();

        switch(op){
            case 0:
                puts("\nTchau!");
                break;

            case 1:
                cadastraProfessor(professor);
                break;

            case 2:
                cadastraAluno(aluno);
                break;

            case 3:
                listaPessoas(professor,aluno);
                break;

            case 4:
                pesquisaPessoas(professor,aluno);
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
        puts("1 – Cadastrar um professor");
        puts("2 – Cadastrar um aluno");
        puts("3 – Listar todas as pessoas cadastradas");
        puts("4 – Pesquisar aniversariantes do mes");
        printf("\nSua opcao: ");
        scanf("%i",&op);
        invalida = (op < 0) || (op > 4);
        if(invalida) puts("\n\aOpcao invalida!");
    } while(invalida);

    return op;
}
void cadastraProfessor(Professor* professor[]){
    if(qtdProf < MAX){
        professor[qtdProf] = new Professor();
        professor[qtdProf] -> leProfessor();
        qtdProf++;
    } else{
        puts("\nNumero max de professores atingido");
    }
}
void cadastraAluno(Aluno* aluno[]){
    if(qtdAluno < MAX){
        aluno[qtdAluno] = new Aluno();
        aluno[qtdAluno] -> leAluno();
        qtdAluno++;
    } else{
        puts("\nNumero max de alunos atingido");
    }
}
void listaPessoas(Professor* professor[], Aluno* aluno[]){
    // Lista professores
    if(qtdProf > 0){
        cout << endl << "\tProfessores:" << endl;
        for(int i = 0;i < qtdProf;i++){
            professor[i] -> escreveProfessor();
        }
    }
    // Lista alunos
    if(qtdAluno > 0){
        cout << endl << "\tAlunos:" << endl;
        for(int i = 0;i < qtdAluno;i++){
            aluno[i] -> escreveAluno();
        }
    }
}
void pesquisaPessoas(Professor* professor[], Aluno* aluno[]){
    int mes = mesPesquisa();
    listaPessoas(professor,aluno,mes);
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
void listaPessoas(Professor* professor[], Aluno* aluno[],int mes){
    // Lista professores
    if(qtdProf > 0){
        cout << endl << "\tProfessores:" << endl;
        for(int i = 0;i < qtdProf;i++){
            if((professor[i] -> getNasc()).ehMes(mes)){
                professor[i] -> escreveProfessor();
            }
        }
    }
    // Lista alunos
    if(qtdAluno > 0){
        cout << endl << "\tAlunos:" << endl;
        for(int i = 0;i < qtdAluno;i++){
            if((aluno[i] -> getNasc()).ehMes(mes)){
                aluno[i] -> escreveAluno();
            }
        }
    }
}