#include<stdio.h>
#include<stdlib.h>
#include "questao02.h"

void entrada02(float *n1,float *n2,float *n3,float *n4){
    printf("Este programa ira receber quatro numeros reais e calcular a media aritmetica deles!\n");
    printf("Informe o primeiro numero: ");
    scanf("%f",n1);
    printf("Informe o segundo numero: ");
    scanf("%f",n2);
    printf("Informe o terceiro numero: ");
    scanf("%f",n3);
    printf("Informe o quarto numero: ");
    scanf("%f",n4);
}

void processamento02(float *n1,float *n2,float *n3,float *n4,float *saida){
    *saida = (*n1 + *n2 + *n3 + *n4)/4.0;
}

void saida02(float saida){
    printf("\nA media aritmetica e igual a %.1f\n",saida);
}

void questao02(void){
    //Declaração de variáveis
    float a,b,c,d,media;

    //Entrada dos dados
    entrada02(&a,&b,&c,&d);

    //Processamento dos dados
    processamento02(&a,&b,&c,&d,&media);

    //Saída dos dados
    saida02(media);
    system("pause");
}
