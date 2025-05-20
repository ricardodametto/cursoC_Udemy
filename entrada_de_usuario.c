#include<stdio.h>
float calcula_desconto(float vlr_bruto, int percentual_desc){

    return vlr_bruto - ((float)percentual_desc / 100) * (vlr_bruto); //função para calculo de desconto

}


int main(int argc, char const *argv[])
{
    const int tamanho = 100; //criada uma constante tipo inteiro de tamanho 100
    char nome [tamanho];     //criada uma variavel tipo char que recebe como array a constante digite
    char nomePai [tamanho];
    char nomeMae [tamanho];   
    int idade = {0};
    int ano = {0};
    float vlr_total = {0};
    int desconto = {0};
    float vlr_desconto = 0;
    
    printf("Digite seu nome: ");
    fgets(nome,tamanho,stdin); //fgets recebe a variavel char nome,a constante digite e stdin
    //fflush(stdin);
    //printf("Seu nome é: %s",nome);
    printf("Digite o nome da sua mãe: ");
    fgets(nomeMae, tamanho,stdin);
    //fflush(stdin);

    printf("Digite o nome do seu pai: ");
    fgets(nomePai,tamanho,stdin);

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Digite o ano do seu nascimento: ");
    scanf("%d",&ano);
    
    printf("Valor total da compra: ");
    scanf("%f",&vlr_total);

     printf("Informe o percentual de desconto aplicado ao produto: ") ;
     scanf("%d",&desconto);

    vlr_desconto = calcula_desconto(vlr_total,desconto);//casting ja foi usado dentro da função
   
   
   (ano < 1990 ? printf("Parabens Oitentista Sobrevivente!!\n"): printf("Sua geração é fraca e patética\n"));


    printf("\n");

    printf("Seu nome é : %sSua idade  : %d anos\nAno de nascimento : %d\n",nome,idade,ano);
    printf("Nome do Pai: %sNome da Mâe: %s\n",nomePai,nomeMae);
    printf("Valor com desconto: R$%.2f",vlr_desconto);
    

    return 0;
}
