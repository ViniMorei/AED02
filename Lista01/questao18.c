#include <stdio.h>
#include <stdlib.h>
#include "questao18.h"

void entrada18(float *p_und1,float *p_und2){
    printf("Este programa ira calcular sua media final!\nInforme a nota da primeira unidade: ");
    scanf("%f",p_und1);
    printf("Agora, informe a nota da segunda unidade: ");
    scanf("%f",p_und2);
}

void processamento18(float *p_und1,float *p_und2,float *p_media,int *p_aprovacao){
    printf("Calculando...\n\n");
    *p_media = (*p_und1 + *p_und2) / 2.0;
    if (*p_media >= 7){
        *p_aprovacao = 1;
    }else if (*p_media < 3){
        *p_aprovacao = 2;
    }else{
        *p_aprovacao = 3;
    }
}

void saida18(float p_media, int p_aprovacao){
    printf("Sua media final foi %.1f, com esta nota voce ",p_media);
    if(p_aprovacao == 1){
        printf("foi aprovado");
    }else if (p_aprovacao == 2){
        printf("esta reprovado");
    }else{
        printf("esta na prova final");
    }
}

void questao18(void){
    //Declaração de variáveis
    float und1,und2,media;
    int aprovacao;

    //Entrada dos dados
    entrada18(&und1,&und2);

    //Processamento dos dados
    processamento18(&und1,&und2,&media,&aprovacao);

    //Saída dos dados
    saida18(media,aprovacao);
}
