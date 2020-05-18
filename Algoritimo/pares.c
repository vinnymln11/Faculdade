#include <stdio.h>

int main() {
    int PRIMEIRO_NUMERO;
    int SEGUNDO_NUMERO;
    int pares;

    printf("Digite o primeiro numero: ");
    scanf("%d", &PRIMEIRO_NUMERO);
    printf("Digite o segundo numero: ");
    scanf("%d", &SEGUNDO_NUMERO);
    for (pares = PRIMEIRO_NUMERO + 1; pares > SEGUNDO_NUMERO;)
    {
    if ( PRIMEIRO_NUMERO > SEGUNDO_NUMERO);{
    printf("O primeiro numero deve ser menor que o segundo!");
    return 0;
    }
    }
    printf("Os numeros pares sao:");

    for (pares = PRIMEIRO_NUMERO + 1; pares < SEGUNDO_NUMERO; pares++) {

        if ( (pares % 2) == 0){
            printf("\n%d", pares);
            }
        }
}

