#include <stdio.h>
#include <stdlib.h>
#include "questao04.h"

void entrada04(float *salario,float *porcentagem){
    printf("Este programa ira calcular seu novo salario!\nInforme seu antigo salario: R$");
    scanf("%f",salario);
    printf("Agora, informe a porcentagem de aumento: ");
    scanf("%f",porcentagem);
}
void processamento04(float *salario,float *porcentagem,float *novo){
    printf("Calculando...\n");
    *novo = *salario + (*salario * *porcentagem/100.0);
}
void saida04(float novo){
    printf("\nO seu novo salario e igual a R$%.2f\n",novo);
}

void questao04(void){
    //Declaração de variáveis
    float salAnt,salNovo,porc;

    //Entrada dos dados
    entrada04(&salAnt,&porc);

    //Processamento dos dados
    processamento04(&salAnt,&porc,&salNovo);

    //Saída dos dados
    saida04(salNovo);
    system("pause");
}
