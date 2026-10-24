#include <stdio.h>

int main (){

     char nome_jogo[50];
     int quantidade de numero;  
     int minimo , maximo; 
     int i  ;   

     printf("digite o nome do jogo da loteria: ");
     scanf("%d" &nome_jogo);

     printf("Quantos numeros devem ser sorteados? ");
     scanf("%d" , &quantidade de numeros);

     printf("Qual e o valor inicial do intervalo maximo? ");
     scanf("%d" &maximo);

     printf("qual e o valor final do intervalo minimo?");
     scanf("%d" , &minimo); 

     printf("numeros sorteados entre %d e %d , maximo , minimo");
       
     
     for(i= 0; i<quantidade de numeros; i++){
          int numero sorteado= rand() % (maximo - minimo + 1) + minimo;    
          printf("numero %d: %d\n" , i +1 , numero sorteado);

     }   return 0;

}