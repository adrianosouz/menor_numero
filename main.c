#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"
int main()
{
   int  n, menor, x, i;
    printf("Digite uma quantidade de numeros\n");
    n = GetInt();

    printf("Digite os numeros\n");
    menor = GetInt();

    for(i = 1; i < n; i++)
    {
        printf("");
        x = GetInt();
        if(x < menor )
            menor = x;

    }
    printf("menor = %d\n", menor);
    return 0;
}


