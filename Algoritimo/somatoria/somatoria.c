#include <stdio.h>
#include <stdlib.h>

int main(){
    long int a,b,c, i;
    printf("Insira a quantidade de numeros que voce seja somar\n");
    scanf("%d",&a);
    if(a >40 || a <= 0){
        printf("Apenas valores dentro da faixa de 1 a 40");
    }else{
        for(i = 1; i <= a;i++){
            printf("\nInsira o valor: ");
            scanf("%d", &b);
            c +=b;
        }
        printf("A soma total e de: %d",c);
    }
     getch();

}
