#include<stdio.h>
int main(){
    int negativos = 0;
    int positivos =0; 
    int vetor[1000];
    int i ;     

    for( i= 0; i< 1000; i++){

        vetor[i] = rand() % 2381 - 880; 
    }

    for(i=0; i< 1000; i++){

       if vetor[i]< 0 , negativos ++ ; {

       }else{
        vetor[i]> 0, positivos ++;
       }


    }
    return 0; 
}