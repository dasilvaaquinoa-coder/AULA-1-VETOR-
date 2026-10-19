#include<stdio.h>

int main(){

    int numeros[58];

    for(int i=0; i< 58; i++){

        printf("Digite um valor");
        scanf("%d" , &numeros[i]);

    }

    for (int i=0; i<58; i++){
        printf("valor %d", numeros[i]);

    }
    return 0;
}
