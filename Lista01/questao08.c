#include <stdio.h>
#include <stdlib.h>
#include "questao08.h"

void entrada08(float *quilometro){
  printf("Este programa irá converter uma velocidade em km/h para m/s!");
  printf("Informe a velocidade em km/h: ");
  scanf("%f", quilometro);
}

void processamento08(float *quilometro, float *metros){
  printf("Calculando...\n\n");
  *metros = *quilometro / 3.6;
}

void saida08(float metros){
  printf("A velocidade convertida é igual a %.2fm/s",metros);
}

void questao08 (void){
  //Declaração de variáveis
  float km, ms;

  //Entrada
  entrada08(&km);

  //Processamento
  processamento08(&km,&ms);

  //Saída
  saida08(ms);
}
