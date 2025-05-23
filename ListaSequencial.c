#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAX 3 //quantidade de elementos

typedef struct{ //struct principal que contém os tipos de dados de cada campo que comporá o cadastro de alunos e serão armazenados na Lista 
    int matricula;
    char nome[30];
    float nota1;
    float nota2;
}Aluno;
typedef Aluno insere;

//Essa struct é quem ocupará de fato o espaço em memoria
typedef struct{ //struc para funcionar como a Lista estática da struct Cadastro
    int qtd;    //variavel de controle indica quantos elementos existem na lista e qual proxima posição vaga
    Aluno dados[MAX]; //esse vetor 'dados' com tamanho 100, resposnsavel pelo armazenamento dos dados da struct Cadastro, também será criado um ponteiro com tipo de dado ListaAlunos

}Lista; //essa struct tem o objetivo de armazenar os dados cadastrais dos alunos e indicar quantidade de elementos, posição desses elementos no vetor

typedef Lista listaalunos;//recriando um novo tipo de dado segue o tipo Lista



listaalunos* crialista(void){ //funcao criada para alocar espaço na memoria e retornar um ponteiro pl do tipo listaalunos
    listaalunos *pl;         //ponteiro *pl tipo 'listaalunos' é o contato com a struct Lista
    pl = (listaalunos*) malloc(sizeof(Lista)); //alloca quantidade de  bytes de memoria para o tamanho da struct Lista
    if (pl != NULL){                              //funçao malloc retorn void mas fazemos o casting para pl(listaalunos)
    pl->qtd = 0;}else{    //vai até a memoria e procura onde pl está apontando o campo qtd, pl guarda a posição do elemento na struct Lista
    return pl;}
    
}

insere* cadastra(listaalunos* pl){
    insere *cad;
    
 
    printf("Entre com a matrícula: ");
    scanf("%d",&cad->matricula);
    while(getchar() != '\n');
    printf("Entre com o nome: ");
    scanf("%29[^\n]",cad->nome);
    printf("Entre com a primeira nota: ");
    scanf("%f",&cad->nota1);
    printf("Entere com a segunda nota :");
    scanf("%f",&cad->nota2);
    
    pl->dados[pl->qtd];
    pl->qtd++;
}

void liberalista(Lista *pl);
int tamanholista(listaalunos *pl);
bool listacheia(listaalunos *pl);
bool listavazia(listaalunos *pl);
//void cadastraAluno(listaalunos* pl,Aluno insere);

//---------------------------     MAIN DO PROGRAMA           --------------------------------------------------- 

//------------------------------------------------------------------------------------------------------------------//
int main(int argc, char const *argv[])
{
    listaalunos *li;//esse ponteiro guarda o retorno da crialista
    li= crialista();//a execução dessa função cria o espaço na memoria, suficiente para guardar qtd e dados-
     
    bool cheia = listacheia(li);
    if(cheia){
        printf("LISTA CHEIA NÃO É POSSÍVEL MAIS CADASTRAR!!\n");
    }
    
    bool vazia = listavazia(li);
    if(vazia){
        printf("LISTA VAZIA!\n");
    }
    
    //insere *c;
    //
    c = cadastra(li);
    
    int tamanho = tamanholista(li);
    
    liberalista(li);
    
    return 0;



}
//------------------------------------------------------------------------------------------------------------------//


void liberalista(Lista *pl){ //pl é ponteiro indicado para liberar Lista da memoria
    free(pl);
}


int tamanholista(listaalunos *pl){ //imprime q quantidade de elementos válidos dentro do vetor, da posição 0 até 99
   if (pl == NULL){
    return -1;
   }else{
    return pl->qtd;
   };
}

bool listacheia(listaalunos *pl){
    if(pl == MAX){
        return false;
    }else{
        return (pl->qtd == MAX);
    }
}

bool listavazia(listaalunos *pl){
    if(pl == NULL){
        return true ;
    }else{
        return (pl->qtd == 0);
    }
}

/*cadastraAluno(listaalunos* pl,Aluno insere){ //o ponteiro pl fara a inserção dos dados na listaalunos
    
    printf("::SISTEMA DE CADASTRO DE ALUNOS::\n\n");
    printf("Entre com o número da matrícula: ");
    scanf("%d",&insere.matricula);
    while (getchar() != '\n');
    printf("Qual o nome do aluno?: ");
    scanf("%29[ ^\]",insere.nome);
    printf("Entre com valor da primeira nota: ");
    scanf("%f",&insere.nota1);
    scanf("Entre com a segunda nota: ");
    scanf("%f",insere.nota2);
    
    pl->dados[pl->qtd] = insere;
    pl->qtd++;

}*/