#include <stdio.h>
#include <stdlib.h>
#include "questao20.h"

void entrada20(float *n1,float *n2,float *n3){
    printf("Este programa ira receber tres numeros e retornar o maior deles!\nInforme o primeiro numero: ");
    scanf("%f",n1);
    printf("Informe o segundo numero: ");
    scanf("%f",n2);
    printf("Informe o terceiro numero: ");
    scanf("%f",n3);
}

void processamento20(float *n1,float *n2,float *n3,int *maior,int *menor){
    if (*n1 == *n2 && *n2 == *n3){
        *maior = 0;
    }else if (*n1 > *n2 && *n2 > *n3){
        *maior = 1;
        *menor = 3;
    }else if (*n1 > *n3 && *n3 > *n2){
        *maior = 1;
        *menor = 2;
    }else if ((*n1 > *n2 && *n2 == *n3) || (*n1 > *n2 && *n1 == *n3) || (*n1 > *n3 && *n1 == *n2)){
        *maior = 1;
        *menor = 0;
    }else if (*n2 > *n1 && *n1 > *n3){
        *maior = 2;
        *menor = 3;
    }else if (*n2 > *n3 && *n3 > *n1){
        *maior = 2;
        *menor = 1;
    }else if ((*n2 > *n1 && *n1 == *n3) || (*n2 > *n1 && *n2 == *n3) || (*n2 > *n3 && *n2 == *n1)){
        *maior = 2;
        *menor = 0;
    }else if (*n3 > *n2 && *n2 > *n1){
        *maior = 3;
        *menor = 1;
    }else if (*n3 > *n1 && *n1 > *n2){
        *maior = 3;
        *menor = 2;
    }else if ((*n3 > *n2 && *n1 == *n2) || (*n3 > *n2 && *n3 == *n1) || (*n3 > *n1 && *n3 == *n2)){
        *maior = 3;
        *menor = 0;
    }
}

void saida20(float n1,float n2,float n3, int maior,int menor){
    if (maior == 1){
        printf("O maior numero e %.1f, ",n1);
        if (menor == 0){
            printf("dois numeros sao identicos!");
        }else if (menor == 3){
            printf("o segundo maior numero e %.1f e o menor e %.1f",n2,n3);
        }else{
            printf("o segundo maior numero e %.1f e o menor e %.1f",n3,n2);
        }
    }else if (maior == 2){
        printf("O maior numero e %.1f, ",n2);
        if (menor == 0){
            printf("dois numeros sao identicos!");
        }else if (menor == 3){
            printf("o segundo maior numero e %.1f e o menor e %.1f",n1,n3);
        }else{
            printf("o segundo maior numero e %.1f e o menor e %.1f",n3,n1);
        }
    }else if (maior == 3){
        printf("O maior numero e %.1f, ",n3);
        if (menor == 0){
            printf("dois numeros sao identicos!");
        }else if (menor == 1){
            printf("o segundo maior numero e %.1f e o menor e %.1f",n2,n1);
        }else{
            printf("o segundo maior numero e %.1f e o menor e %.1f",n1,n2);
        }
    }else{
        printf("Numeros identicos!");
    }
    printf("\n");
}

void questao20(void){
    //Declaração de variáveis
    float x,y,z;
    int max,min;

    //Entrada de dados
    entrada20(&x,&y,&z);

    //Processamento de dados
    processamento20(&x,&y,&z,&max,&min);

    //Saída de dados
    saida20(x,y,z,max,min);
    system("pause");
}
