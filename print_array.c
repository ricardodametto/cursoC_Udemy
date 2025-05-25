#include<stdio.h>

int main(int argc, char const *argv[])
{
    int x[2][4] = {{10,20,30,40},
                  {50,60,70,80}};            
    int i = 0;
    int j =0;
    
    for(i =0; i < 2; i++){
       for(j=0; j < 4; j++){  //a cada 4 iteraçoes de j itera uma de i até que i itere 2 vezes
        printf("\nElemento do Array: x[%d][%d] = %d\n",i,j,x[i][j]); 
        printf("Endereço do Elemento: x[%d][%d] = %p\n",i,j,&x[i][j]);  //forma correta do printf para exibir um array bidimensional
        printf("\n-----------------------------------------------\n\n");  
    } 
    }
    printf("Endereço do Array x = %p\n",x[2][4]);
    
    return 0;
}
