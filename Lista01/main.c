#include <stdio.h>
#include <stdlib.h>
#include "questao01.h"
#include "questao02.h"
#include "questao03.h"
#include "questao04.h"
#include "questao05.h"
#include "questao06.h"
#include "questao07.h"
#include "questao08.h"
#include "questao09.h"
#include "questao10.h"
#include "questao11.h"
#include "questao12.h"
#include "questao13.h"
#include "questao14.h"
#include "questao15.h"
#include "questao16.h"
#include "questao17.h"
#include "questao18.h"
#include "questao19.h"
#include "questao20.h"
#include "questao21.h"
#include "questao22.h"
#include "questao23.h"
#include "questao24.h"

int main()
{
    int q;
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
    case 7:
        questao07();
        break;
    case 8:
        questao08();
        break;
    case 9:
        questao09();
        break;
    case 10:
        questao10();
        break;
    case 11:
        questao11();
        break;
     case 12:
        questao12();
        break;
    case 13:
        questao13();
        break;
    case 14:
        questao14();
        break;
    case 15:
        questao15();
        break;
    case 16:
        questao16();
        break;
    case 17:
        questao17();
        break;
    case 18:
        questao18();
        break;
    case 19:
        questao19();
        break;
    case 20:
        questao20();
        break;
    case 21:
        questao21();
        break;
    case 22:
        questao22();
        break;
    case 23:
        questao23();
        break;
    case 24:
        questao24();
        break;
    default:
        break;
    }
    return 0;
}
