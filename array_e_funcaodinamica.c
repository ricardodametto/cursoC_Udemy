#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int *alocavetor(int tamanho){
    int *vet = (int*)malloc(tamanho * sizeof(vet));
    if(vet == NULL){
        fprintf(stderr, "Erro ao alocar memória para linhas da vetor\n");
        exit(EXIT_FAILURE);
    }
    return vet;
}

void liberavetor(int *vetor){
        free(vetor);
}


void preenchevetor(int *vet,int tamanho){
    for(int i= 0; i < tamanho; i++){
        vet[i]= i+1;
        printf("Vetor:[%d] = %d\n",i,vet[i]);
    }
}


int main(int argc, char const *argv[])
{
    setlocale (LC_ALL,"pt_BR.UTF-8");
    int *vet;
    int tamanho = 5;

   vet = alocavetor(tamanho);

   preenchevetor(vet,tamanho);

    liberavetor(vet);



        return 0;
}