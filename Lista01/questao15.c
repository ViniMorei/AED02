#include <stdio.h>
#include <stdlib.h>
#include "questao15.h"

void entrada15(float *n1, float *n2){
    printf("Este programa ira comparar dois numeros e dizer o maior!\nInforme um numero: ");
    scanf("%f",n1);
    printf("Agora informe outro numero: ");
    scanf("%f",n2);
}

void processamento15(float *n1, float *n2, int *maior){
    if (*n1 > *n2){
        *maior = 1;
    }else if (*n1 < *n2){
        *maior = 2;
    }else{
        *maior = 0;
    }
}

void saida15(float n1, float n2, int maior){
    if (maior == 1){
        printf("O maior numero e %.1f",n1);
    }else if (maior == 2){
        printf("O maior numero e %.1f",n2);
    }else{
        printf("Os numeros sao iguais");
    }
}

void questao15(void){
    //Declaração de variáveis
    float x,y;
    int comp;

    //Entrada dos dados
    entrada15(&x,&y);

    //Processamento
    processamento15(&x,&y,&comp);

    //Saída dos dados
    saida15(x,y,comp);
}
