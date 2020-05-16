#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    printf("Digite um valor\n");
    scanf("%d",&a);
    if(a<0){
        printf("\nNEGATIVO\n");
    }else if(a>0){
        printf("\nPOSITIVO\n");
    }else{
        printf("\nNULL\n");
    }
     getch();
}
