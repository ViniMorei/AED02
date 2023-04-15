#include<stdio.h>
#include<stdlib.h>
#include"questao10.h"

void questao10(void){
    char senha[11];
    char pass[11]="LINGUAGEMC";
    int i;
    int correta = 0;
    printf("Informe a senha: ");
    scanf("%s",&senha);
    for (int i = 0; i<10;i++){
        if (senha[i] == pass[i])
            correta++;
    }
    //printf("%d",correta);
    if (correta==10){
        printf("Senha correta\n");
    }else{
        printf("Senha incorreta\n");
    }
    system("pause");
}
