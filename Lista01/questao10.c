#include<stdio.h>
#include<stdlib.h>
#include"questao10.h"

void questao10(void){
    char senha[11];
    char pass[11]="LINGUAGEMC";
    int correta = 0;
    printf("Informe a senha: ");
    scanf("%s",&senha);
    if (senha[0]==pass[0]){
        if(senha[1]==pass[1]){
            if(senha[2]==pass[2]){
                if(senha[3]==pass[3]){
                    if(senha[4]==pass[4]){
                        if(senha[5]==pass[5]){
                            if(senha[6]==pass[6]){
                                if(senha[7]==pass[7]){
                                    if(senha[8]==pass[8]){
                                        if(senha[9]==pass[9]){
                                            correta=1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if (correta==1){
        printf("Senha correta");
    }else{
        printf("Senha incorreta");
    }
}
