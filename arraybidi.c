#include<stdio.h>


int main(int argc, char const *argv[])
{
    int i,j;
    int mat[3][3] = {{10, 20, 30},
                    {40, 50, 60},
                    {70, 80, 90}};
    int resultElemnts;
                    
                    
    for(i = 0; i < 3; i++){ //esse laço incrementa uma vez a cada 3 iterações do laço aninhado
       for(j=0; j < 3; j++){
        //printf("Insira o elemento da linha %d, coluna %d\n",i,j); 
        printf(" %d", mat[i][j]);  
      }
      printf("\n");  
   }
    
    /*for( i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){   
        }
    }*/
    return 0;
}
