#include <stdio.h>
#include <stdlib.h>
#include "questao23.h"

void entrada23(char tipo[1],float *percurso){
    printf("Este programa ira calcular o consumo medio de combustivel em determinado percurso!\n");
    denovo:
    printf("Informe o tipo do carro (A,B ou C): ");
    scanf("%s",tipo);
    if ((strcmp(tipo,"a") == 0) || (strcmp(tipo,"A") == 0) || (strcmp(tipo,"b") == 0) || (strcmp(tipo,"B") == 0) || (strcmp(tipo,"c") == 0) || (strcmp(tipo,"C") == 0)){
        printf("Informe o percurso em quilometros: ");
        scanf("%f",percurso);
    }else{
        printf("Tipo invalido, informe um dos especificados!\n");
        goto denovo;
    }
}

void processamento23(char tipo[1],float *percurso){
    if ((strcmp(tipo,"a") == 0) || (strcmp(tipo,"A") == 0)){
        *percurso = *percurso / 8.0;
    }else if ((strcmp(tipo,"b") == 0) || (strcmp(tipo,"B") == 0)){
        *percurso = *percurso / 9.0;
    }else if ((strcmp(tipo,"c") == 0) || (strcmp(tipo,"C") == 0)){
        *percurso = *percurso / 12.0;
    }else{
        printf("Tipo invalido");
    }
}

void saida23(float percurso){
    printf("O consumo aproximado de combustivel sera de %.1fL",percurso);
}

void questao23(void){
    //Declaração de variáveis
    char carro[1];
    float trajeto;

    //Entrada de dados
    entrada23(carro,&trajeto);

    //Processamento
    processamento23(carro,&trajeto);

    //Saída de dados
    saida23(trajeto);
}
