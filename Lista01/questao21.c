#include <stdio.h>
#include <stdlib.h>
#include "questao21.h"

void entrada21(float *n1, float *n2, float *n3){
    printf("Este programa ira ordenar tres numeros em ordem crescente!\nInforme o primeiro numero: ");
    scanf("%f",n1);
    printf("Informe o segundo numero: ");
    scanf("%f",n2);
    printf("Informe o terceiro numero: ");
    scanf("%f",n3);
}

void processamento21(float *n1, float *n2, float *n3, float *maior, float *meio, float *menor){
    //Verificação de numeros iguais
    if ((*n1 == *n2) || (*n1 == *n3) || (*n2 == *n3)){
        //Caso todos sejam iguais
        if ((*n1 == *n2) && (*n1 == *n3) && (*n2 == *n3)){
            *maior = *n1;
            *meio = *n1;
            *menor = *n1;
        }

        //Caso apenas dois sejam iguais
        if (*n1 == *n2){
            if (*n1 > *n3){
                *maior = *n1;
                *meio = *n1;
                *menor = *n3;
            }else{
                *maior = *n3;
                *meio = *n3;
                *menor = *n1;
            }
        }else if (*n1 == *n3){
            if (*n1 > *n2){
                *maior = *n1;
                *meio = *n1;
                *menor = *n2;
            }else{
                *maior = *n2;
                *meio = *n2;
                *menor = *n1;
            }
        }else{
            if (*n2 > *n1){
                *maior = *n2;
                *meio = *n2;
                *menor = *n1;
            }else{
                *maior = *n1;
                *meio = *n1;
                *menor = *n2;
            }
        }
    }

    //Verificação do maior numero
    if ((*n1 > *n2) && (*n1 > *n3)){
        *maior = *n1;
    }
    if ((*n2 > *n1) && (*n2 > *n3)){
        *maior = *n2;
    }
    if ((*n3 > *n1) && (*n3 > *n2)){
        *maior = *n3;
    }

    //Verificação do menor numero
    if ((*n1 < *n2)&&(*n1 < *n3)){
        *menor = *n1;
    }
    if ((*n2<*n1)&&(*n2<*n3)){
        *menor = *n2;
    }
    if ((*n3 < *n1) && (*n3 < *n2)){
        *menor = *n3;
    }

    //Verificação do numero intermediário
    if ((*n1 != *maior) && (*n1 != *menor)){
        *meio = *n1;
    }
    if ((*n2 != *maior) && (*n2 != *menor)){
        *meio = *n2;
    }
    if ((*n3 != *maior) && (*n3 != *menor)){
        *meio = *n3;
    }
}

void saida21(float maior, float meio, float menor){
    printf("%.1f %.1f %.1f\n",menor,meio,maior);
}

void questao21(void){
    //Declaração de variáveis
    float x,y,z,max,mid,min;

    //Entrada
    entrada21(&x,&y,&z);

    //Processamento
    processamento21(&x,&y,&z,&max,&mid,&min);

    //Saída
    saida21(max,mid,min);
    system("pause");
}
