#include<stdio.h>
#include<stdlib.h>
#include "questao03.h"

void entrada03(float *n1,float *n2,int *p1,int *p2){
    printf("Este programa ira receber duas notas e calcular a media ponderada!\n");
    printf("Informe a primeira nota: ");
    scanf("%f",n1);
    printf("Informe o peso da primeira nota: ");
    scanf("%d",p1);
    printf("Informe a segunda nota: ");
    scanf("%f",n2);
    printf("Informe o peso da segunda nota: ");
    scanf("%d",p2);
}

void processamento03(float *n1,float *n2,int *p1,int *p2,float *saida){
    *saida = (*n1 * *p1 + *n2 * *p2)/(*p1+*p2);
}

void saida03(float saida){
    printf("\nA media ponderada e igual a %.1f",saida);
}

void questao03(void){
    //Declaração de variáveis
    float nota1,nota2,media;
    int peso1,peso2;
    entrada03(&nota1,&nota2,&peso1,&peso2);
    processamento03(&nota1,&nota2,&peso1,&peso2,&media);
    saida03(media);
}
