#include <stdio.h>
#include <stdlib.h>
#include "questao13.h"

void entrada13(int *numero){
    printf("Este programa ira dizer se um numero e divisivel por 5!\nInforme um numero: ");
    scanf("%d",numero);
}

void processamento13(int *numero,int *divisivel){
    if (*numero % 5 == 0){
        *divisivel = 1;
    }else{
        *divisivel = 0;
    }
}

void saida13(int numero, int divisivel){
    if (divisivel == 1){
        printf("O numero %d e divisivel por 5!",numero);
    }else{
        printf("O numero %d nao e divisivel por 5!",numero);
    }
}

void questao13(void){
    //Declaração de variáveis
    int num, div;

    //Entrada dos dados
    entrada13(&num);

    //Processamento dos dados
    processamento13(&num,&div);

    //Saída dos dados
    saida13(num,div);
}
