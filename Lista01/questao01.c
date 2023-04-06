#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"

void entrada01(int *n1,int *n2,int *n3){
    printf("Este programa ira receber tres numeros e inteiros e soma-los!\n");
    printf("Informe o primeiro numero: ");
    scanf("%d",n1);
    printf("Informe o segundo numero: ");
    scanf("%d",n2);
    printf("Informe o terceiro numero: ");
    scanf("%d",n3);
}

void processamento01(int *n1,int *n2,int *n3,int *saida){
    *saida = *n1 + *n2 + *n3;

}

void saida01(int saida){
    printf("\nA soma e igual a %d",saida);
}

void questao01(void){
   //Declaração e inicialização
    int num1,num2,num3,soma,i;

    //Entrada dos dados
    entrada01(&num1,&num2,&num3);

    //Processamento dos dados
    processamento01(&num1,&num2,&num3,&soma);

    //Saída dos dados
    saida01(soma);
}
