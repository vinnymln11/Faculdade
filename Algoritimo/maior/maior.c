#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int a, b;

    printf("Apenas numeros inteiros\n");
    printf("Insira o primeiro valor:");

    scanf("%d",&a);

    printf("\nInsira o segundo valor:");

    scanf("%d",&b);

    if(a > b){

        printf("\n%d e de fato maior que %d\n",a,b);

    }else if(a<b){

        printf("\n%d e de fato maior que %d\n",b,a);

    }else{

        printf("\nOs valores sao iguais\n");

    }
     getch();
}
