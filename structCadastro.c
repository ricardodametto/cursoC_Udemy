#include <stdio.h>

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

//Funcao para chamar printf de entrada de dados digitados pelo usuario
//criei uma funcao void passei como referencia um ponteiro * para a struct Cadastro
void dados_entrada(Cadastro *p)
    {
        printf("Digite a letra identificadora do ESTADO(De A a H) :");
        scanf("%c",&p->estado); 
        while (getchar() != '\n');
        printf("Digite o código da carta : ");
        scanf("%s",p-> codigoCarta);
    
        while (getchar() != '\n');
   
        printf("Digite o nome da cidade: ");
        fgets(p->nomeCidade,50,stdin);
        fflush(stdin);
        printf("Digite a extensão territorial em km2: ");
        scanf("%f",&p->area);
        printf("Digite a quantidade total de habitantes:");
        scanf("%d",&p->total_pop);
        printf("Digite o PIB total: ");
        scanf("%lld",&p->total_pib);
        printf("Digite a quantidade de pontos turísticos: ");
        scanf("%d",&p->total_pontosTur);
    }


void exibirDados(Cadastro *c)
{
       printf("\n--- Resultados das Cartas ---\n");
       printf("Estado : ",&c->estado);
       printf("Codigo da carta: ",c->codigoCarta);
       printf("Nome da cidade: ",c->nomeCidade);
       printf("Populção total: ",&c->total_pop);
       printf("Extensão territorial: ",&c->area," Habitantes/km2");
       printf("PIB anual: ",&c->total_pib);
       printf("Total de pontos turísticos: ",&c->total_pontosTur);


}


//Função para calcular renda per capita
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
long long int calcula_superpoder(int populacao, float area, long long int pib, int pontosTur, long double densidadepopinversa ){
    return (long long int) populacao + area + pib + pontosTur + densidadepopinversa;
}


int main(int argc, char const *argv[])
{
    
    
    printf("Carta 1\n");
    Cadastro carta1;
    dados_entrada(&carta1);
    
    printf("\n\n");
    
    /*printf("Carta 2\n");
    Cadastro carta2;
    dados_entrada(&carta2);*/
 
    //Chamada das funções para realização de todos calculos necessários para regra de negócio do jogo
     carta1.renda_percapita = calcula_renda_per_capita(carta1.total_pib, carta1.total_pop);
     carta1.densidade_demografica = calcula_densidade(carta1.total_pop,carta1.area);
     carta1.densidade_inversa = calcula_densidadeInversa(carta1.area,carta1.total_pop);
     carta1.superpoder = calcula_superpoder(carta1.total_pop, carta1.area, carta1.total_pib, carta1.total_pontosTur,carta1.densidade_inversa);
     
     /*carta2.renda_percapita = calcula_renda_per_capita(carta2.total_pib, carta2.total_pop);
     carta2.densidade_demografica = calcula_densidade(carta2.total_pop,carta2.area);
     carta2.densidade_inversa = calcula_densidadeInversa(carta2.area,carta2.total_pop);
     carta2.superpoder = calcula_superpoder(carta2.total_pop, carta2.area, carta2.total_pib, carta2.total_pontosTur,carta2.densidade_inversa);*/
     
     
     exibirDados(&carta1);
     /*printf("%.2f\n",carta1.area);
     printf("%d\n",carta1.total_pop);

     printf("RESULTADO SUPERPODER: %lld\n",carta1.superpoder);
     printf("RESULTADO DENSIDADE DEMOGRAFICA: %.2f /KM2\n",carta1.densidade_demografica);*/
    return 0; 
}
