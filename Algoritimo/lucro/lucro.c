#include <stdio.h>
#include <stdlib.h>

int main(){

    float valor;
    printf("Por quanto voce comprou o produto\n");
    scanf("%f",&valor);
    if(valor > 20.00){
        printf("\nA compra do produto no valor de %.2f, voce deve acreser %.2f no valor da compra e vende-lo por %.2f", valor, (0.45*valor) ,valor+(0.45*valor));
    }else{
        printf("\nA compra do produto no valor de %.2f, voce deve acreser %.2f no valor da compra e vende-lo por %.2f", valor,(0.30*valor), valor+(0.30*valor));
    }
    getch();
}
