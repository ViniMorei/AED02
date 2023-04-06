#include <stdio.h>
#include <stdlib.h>
#include "questao05.h"

void entrada05(float *sb,int *qtdep){
    printf("Este programa ira calcular seu salario liquido!\nInforme seu salario base: R$");
    scanf("%f",sb);
    printf("Informe seu numero de dependentes: ");
    scanf("%d",qtdep);
}
void processamento05(float *sb,float *sbr, int *qtdep){
    printf("Calculando...\n");
    *sbr = *sb + (*qtdep * 32);
    //printf("%.2f\n",*sbr);
    *sbr = *sbr - (*sbr * 27.5)/100.0;
    //printf("%.2f\n",*sbr);
}
void saida05(float sbr){
    printf("\nSeu novo salario e igual a R$%.2f",sbr);
}

void questao05(void){
    //Declaração de variáveis
    float sal, salBru;
    int dependentes;

    //Entrada de dados
    entrada05(&sal,&dependentes);

    //Processamento dos dados
    processamento05(&sal,&salBru,&dependentes);

    //Saída de dados
    saida05(salBru);
}
