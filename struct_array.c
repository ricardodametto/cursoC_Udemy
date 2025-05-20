#include<stdio.h>

typedef struct{
  
   char idEstado;
   char codCarta [5];
   char nomeCidade [50];    
   int populacao;
   float area ;
   long long int pib;
   int pontosturisticos;
   float densidadeDemografica;
   long double densidadeInversa;
   float rendaPercapita;
   long long int superpoder;

}Cadastro;

//funcao para coleta dos dados de cadastro
void coletadados(Cadastro carta [], int quantidade){//parametros passados: 'carta' tipo struct,e 'quantidade' tipo int que corresponde a variavel tamanho declarada em main

    printf("***    Cadastro de Cartas Super Trunfo    ***\n");
    for(int i = 0; i < quantidade; ++i){  //laço for que inicializa i = 0 e interage acrescentando 1 enquanto i for menor que quantidade[2]
        printf("\n");                     //ou seja, esse laço terá 2 iterações correspondentes ao tamanho do array passado ao parametro 'quantidade' nessa função
        printf("Carta %d\n", i+1);
        
        printf("Digite a letra de identificação da carta: ");
        carta[i].idEstado = getchar();
        while (getchar() != '\n');
        printf("Digite o código da carta: ");
        scanf("%s",carta[i].codCarta);
        while (getchar() != '\n');
        printf("Dgite o nome da cidade: ");
        fgets(carta[i].nomeCidade,50,stdin);
        fflush(stdin);
        printf("Digite a extensão territorial: ");
        scanf("%f",&carta[i].area);
        printf("Digite o total populacional: ");
        scanf("%d",&carta[i].populacao);
        printf("Digite o PIB anual: ");
        scanf("%lld",&carta[i].pib);
        printf("Digite o total de pontos turísticos: ");
        scanf("%d",&carta[i].pontosturisticos);
        while (getchar() != '\n');
        printf("\n");

    }

}


void exibirDados(Cadastro carta[], int tamanho){ //função para exibir as cartas cadastradas
    printf("     ***RESULTADOS***     \n");
    printf("\n");

    for(int i = 0; i< tamanho; ++i){
     
        printf("ESTADO: %c\n",carta[i].idEstado);
        printf("Código da Carta: %s\n",carta[i].codCarta);
        printf("Nome da cidade: %s",carta[i].nomeCidade);
        printf("Total populacional: %d\n",carta[i].populacao);
        printf("Area: %.2f\n",carta[i].area);
        printf("PIB anual: %lld\n",carta[i].pib);
        printf("Pontos turísticos: %d\n",carta[i].pontosturisticos);
        printf("Densidade demográfica: %f\n",carta[i].densidadeDemografica);
        printf("Densidade demográfica inversa: %Lf\n",carta[i].densidadeInversa);
        printf("Renda Per Capita: %f\n",carta[i].rendaPercapita);
        printf("SUPER PODER: %lld\n",carta[i].superpoder);
        printf("\n");
        printf("\n");

    }

}




int main(int argc, char const *argv[])
{                          
    //VALOR DO ARRRY[2] == NUMERO DE ITERAÇOES NO LACO FOR == QUANTAS CARTAS DESEJO CADASTRAR
    
    const int tamanho = 2;//constante 'tamanho' com valor 2 e passada como parametro na função 'coletadados' 
    Cadastro carta [tamanho];  //VARIAVEL carta tipo struct inicializada com array[2] ambos passados como parametros na funcao coletadados
    
    coletadados(carta,tamanho);  //funçoes para coleta de dados de entrada                        
    exibirDados(carta,tamanho);//função para exibir na tela a saída com os dados coletados
    
    
    return 0;
}
