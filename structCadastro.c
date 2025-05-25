#include <stdio.h>

#define CARTASPORCADASTRO 2
typedef struct{

    //Variaveis que compoem os campos cadastrais das cartas
    char estado;
    char codigoCarta [5];
    char nomeCidade [50];
    int total_pop;
    float area;
    long long int total_pib;
    int total_pontosTur;
    
    //Variavéis que receberão resultados dos calculos das funcôes
    float renda_percapita;
    float densidade_demografica;  
    long double densidade_inversa;
    long long int superpoder;
}Cadastro;

//prototipos da função
float calcula_renda_per_capita(long long int pib, float area);
float calcula_densidade(int pop , float area);
long double calcula_densidadeInversa(float area, int populacao);
long long int calcula_superpoder(int populacao, float area, long long int pib, int pontosTur);

//Funcao para chamar printf de entrada de dados digitados pelo usuario
//criei uma funcao void passei como referencia um ponteiro * para a struct Cadastro
void dados_entrada(Cadastro cadastraCarta[],int i ){

    for(i=0; i < 2; i++){
        printf("Entre com o ID da carta(Uma letra de A a H): ");
        scanf(" %c",&cadastraCarta[i].estado);
        printf("Digite o código da carta(Sendo válidos de A01 a H09): ");
        scanf("%s",cadastraCarta[i].codigoCarta);
        printf("Digite o nome da cidade: ");
        scanf(" %49[^\n]",cadastraCarta[i].nomeCidade);
        while(getchar() != '\n');
        printf("Digite a populçao total: ");
        scanf("%d",&cadastraCarta[i].total_pop);
        printf("Digite a extensão territorial em km2: ");
        scanf("%f",&cadastraCarta[i].area);
        printf("Digite o PIB anual em Bilhões de R$: ");
        scanf("%lld",&cadastraCarta[i].total_pib);
        printf("Digite a quantidade total de pontos turísticos: ");
        scanf("%d",&cadastraCarta[i].total_pontosTur);
        while(getchar() != '\n');
        printf("\n\n");
    }

}
    
void exibirDados(Cadastro exibecarta[], int i){
    for(i = 0; i < 2; i++){

    printf("\n--- Resultados das Cartas ---\n");
       printf("Estado : %c\n",exibecarta[i].estado);
       printf("Codigo da carta: %s\n",exibecarta[i].codigoCarta);
       printf("Nome da cidade: %s\n",exibecarta[i].nomeCidade);
       printf("Populção total: %d\n",exibecarta[i].total_pop);
       printf("Extensão territorial: %f\n",exibecarta[i].area," Habitantes/km2");
       printf("PIB anual: %lld\n",exibecarta[i].total_pib);
       printf("Total de pontos turísticos: %d \n",exibecarta[i].total_pontosTur);
    
    }
}



//Função para calcular renda per capita


int main(int argc, char const *argv[])
{
    //equivale a variavel de controle i dentro do for,
 Cadastro cartas[2];//equivale a variavel tipo struct dentro da função
    dados_entrada(cartas,CARTASPORCADASTRO);//parametros: 'cartas' variavel tipo struct equivale a 'cadastra cartas[]'
    exibirDados(cartas,CARTASPORCADASTRO);                             //parametro: 'tamanho recebe  a define 'CARTASPORCADASTRO = 2', tamanh equivale ao contéúdo da variavel de controle 'i'
    return 0; 
}

//Funções e suas assinaturas

float calcula_renda_per_capita(long long int pib, float area){
    return (float)pib / area;
}

//Função para calculo densidade demografica
float calcula_densidade(int pop , float area){
    return  pop / area;
}

//Função para calcular densidade inversa, vence esse atributo a carta que tiver o MENOR valor calculado
long double calcula_densidadeInversa(float area, int populacao){
    return (long double) area /populacao;
}

//Função para calcular SUPERPODER das cartas, vence esse atributo a carta que tiver o MAIOR valor calculado
long long int calcula_superpoder(int populacao, float area, long long int pib, int pontosTur){
    return ((long long int) populacao + area + pib + pontosTur);
}