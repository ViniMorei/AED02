#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"
#include "questao02.h"

int main()
{
    int q;
    printf("Lista de exercicios de AED02:\nInforme o numero da questao (1 a 2): ");
    scanf("%d",&q);
    system("cls");
    switch(q){
    case 1:
        questao01();
        break;
    case 2:
        questao02();
        break;
    default:
        break;

    }
    return 0;
}
