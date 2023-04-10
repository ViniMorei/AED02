#include<stdio.h>
#include<stdlib.h>
#include "questao07.h"


void entrada07(float *raio){
  printf("Este programa irá calcular as dimensões do seu círculo e da esfera!\nInforme o comprimento do raio (em cm): ");
  scanf("%f",raio);
}

void processamento07(float *raio, float *diametro, float *circunferencia, float *area, float *volume){
  printf("Calculando...\n\n");
  *diametro = *raio * 2;
  *area = 3.14 * *raio * *raio;
  *circunferencia = 2 * 3.14 * *raio;
  *volume = (4/3) * 3.14 * *raio * *raio * *raio;
}

void saida07(float diametro, float circunferencia, float area, float volume){
  printf("O seu círculo possui:\nDiâmetro: %.2fcm\nÁrea: %.2fcm2\n",diametro, area);
  printf("Circunferência: %.2fcm\n\nA sua esfera tem %.2fcm3 de volume", circunferencia, volume);
}

void questao07 (void){
  //Declaração de variáveis
  float r, diam, perimetro, vol, are;

  //Entrada dos dados
  entrada07 (&r);

  //Processamento
  processamento07(&r, &diam, &perimetro, &are, &vol);

  //Saída dos dados
  saida07(diam, perimetro, are, vol);
}
