#include<stdio.h>

int main(int argc, char const *argv[])
{
    signed int i = 10;
    
    while(i >= 0){   //todo bloco de comando após as chaves será executado ate que a condição for True
        printf(" %d",i);
        i--; // incremento ou decremento atualiza i que é uma variavel de controle, essa variavel garante que "um dia essa condição será falsa"
    }
    return 0;
}
