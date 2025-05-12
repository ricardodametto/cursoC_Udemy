#include <stdio.h>

int main(int argc, char const *argv[])
{
    char A = '^';
    int x;

    x = (int) A;

    printf("Fazendo casting para A receber valor inteiro mesmo sendo char: %d\n",x);

    return 0;
}
