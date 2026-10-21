#include<stdio.h>

int main(){

    int auxiliar[8];
    int principal[5];
    int i ;           

    for (i=0; i<8; i++){
        printf("digite o %d valor adicional:i-4 ");
        scanf("%d" &auxiliar[i]);
    }

    for (i=0; i<8; i++){
     
        printf("auxiliar %d = %d , i, auxiliar[i]");
    }

    for (i=0; i<5; i++){

        printf("digite o valor %d: ");
        scanf("%d" &principal[5]);
    
    }
    for( i=0 ; i<5; i++){
        
         auxiliar[i] = principal[i];


    }
}