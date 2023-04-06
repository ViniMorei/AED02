#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "questao01.h"
#include "questao02.h"
#include "questao03.h"
#include "questao04.h"
#include "questao05.h"
#include "questao06.h"

int main()
{
    int q;
    again = true;
    printf("Lista de exercicios de AED02:\nInforme o numero da questao (1 a 24): ");
    scanf("%d",&q);
    system("cls");
    switch(q){
    case 1:
        questao01();
        break;
    case 2:
        questao02();
        break;
    case 3:
        questao03();
        break;
    case 4:
        questao04();
        break;
    case 5:
        questao05();
        break;
    case 6:
        questao06();
        break;
    default:
        break;
    }
    return 0;
}
