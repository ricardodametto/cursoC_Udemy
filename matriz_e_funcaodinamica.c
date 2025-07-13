#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int **matAlocaDianmica(int linhas, int colunas){
    int **mat = malloc(linhas *sizeof(*mat));
    if(mat == NULL){
        printf("Erro ao alocar memória para as linhas!");
    }
    for(int i = 0; i < linhas; i++){
        mat[i] = (int*)malloc(colunas * sizeof(int));
        if(mat[i] == NULL){
            printf("Erro ao alocar memória para as colunas");
        }
    }
    return mat;
}

void liberamatriz(int **matriz, int linhas){
    for(int i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
}

void iniciaPreenche(int **matriz,int linhas, int colunas){
    
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
        matriz[i][j] = i+j;
        printf("%d ", matriz[i][j]);
        }
    printf("\n");
        }


}

int main(int argc, char const *argv[])
{
    int linhas = 5;
    int colunas = 5;

    int **matriz;

    matriz = matAlocaDianmica(linhas,colunas);
    
    iniciaPreenche(matriz,linhas,colunas);
    
    liberamatriz(matriz,linhas);
    
    return 0;
}
