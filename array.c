#include<stdio.h>

int main(int argc, char const *argv[])
{
    int numeros [3][4] = {
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12} //arrays bidimensionais [quantos de elementos] [quantos arrays]
    };
    printf("%d\n",numeros[0][3]);// []qual array?  []qual posiçao do elemento?
    int qtdnumero = sizeof(numeros) / sizeof(numeros[0]);
    printf("Quantidade total de Arrays: %d\n",qtdnumero);
    
    
    char nome [5][15] = {"Ricardo","Amarilis","Jose","Alfredo","Raul"};
    printf("Minha string char é: %s\n",nome[4]);  //imprime a posição no array 0 1 2
    int qtdnome =sizeof(nome) / sizeof(nome[0]);  //calcula q quantidade de elementos
    printf("A quantidade de nomes é: %d\n",qtdnome);   //imprime a quantidade de elementos dentro do array
    
        
    return 0;
}
