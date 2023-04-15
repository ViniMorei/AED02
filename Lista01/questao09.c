#include<stdio.h>
#include<stdlib.h>
#include"questao09.h"

void entrada09(float *numero){
    printf("\nInforme um numero: ");
    scanf("%f",numero);
    processamento09(numero);
}

void processamento09(float *numero){
    if (*numero > 100){
        printf("Este numero e maior que 100! Deseja continuar? (Digite 1 para sim) ");
        scanf("%f",numero);
        if (*numero == 1){
            entrada09(numero);
        }else{
            printf("\nFim do programa\n");
            system("pause");
        }
    }else{
        printf("Este numero nao e maior que 100! Deseja continuar? (Digite 1 para sim) ");
        scanf("%f",numero);
        if (*numero == 1){
            entrada09(numero);
        }else{
            printf("\nFim do programa\n");
            system("pause");
        }
    }
}
void questao09(void){
    //Declaração
    float num;

    //Entrada e processamento
    printf("Este programa ira dizer se seu numero e maior que 100!\n");
    entrada09(&num);
}
