#include<stdio.h>
#include<stdlib.h>
#include"questao11.h"

void entrada11(float *numero){
    printf("Este programa ira dizer se um numero esta no intervalo entre 100 e 500!\nInforme um numero: ");
    scanf("%f",numero);
}
void processamento11(float *numero){
    if (*numero >= 100 && *numero <=500){
        printf("Este numero esta no intervalo entre 100 e 500");
    }else{
        printf("Este numero NAO esta no intervalo, tentar novamente? (1 para sim) ");
        scanf("%f",numero);
        if (*numero == 1){
            system("cls");
            entrada11(numero);
        }else{
            printf("Fim do programa");
        }
    }
}

void questao11(void){
    float num;
    entrada11(&num);
    processamento11(&num);
}
