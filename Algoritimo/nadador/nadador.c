#include <stdio.h>
#include <stdlib.h>

int main(){
    int idade;
    printf("Qual a idade do nadador\n");
    scanf("%d",&idade);
    if(idade == 0){
        printf("\nNao existe a categoria 'prenatal'\n");
    }else if(idade < 14){
        printf("\nNadador INFANTIL\n");
    }else if(idade >=14 && idade <18){
        printf("\nNadador JUVENIL\n");
    }else{
        printf("\nNadador ADULTO\n");
    }
 getch();

}
