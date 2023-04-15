#include<stdio.h>
#include<stdlib.h>
#include"questao16.h"

void entrada16(float *sal){
    printf("Este programa ira calcular seu salario liquido!\nInforme seu salario bruto: R$");
    scanf("%f",sal);
}

void processamento16(float *sal, int *desc){
    printf("Calculando...\n\n");
    if (*sal >= 2000){
        *sal = *sal * 0.8;
        *desc = 20;
    }else{
        *sal = *sal *0.9;
        *desc = 10;
    }
}

void saida16(float sal, int desc){
    printf("Seu salario liquido e igual a R$%.2f, com o desconto de %d%%\n",sal,desc);
}

void questao16(void){
    //Declaração de variáveis
    float salario;
    int desconto;

    //Entrada dos dados
    entrada16(&salario);

    //Processamento
    processamento16(&salario,&desconto);

    //Saída dos dados
    saida16(salario,desconto);
    system("pause");
}
