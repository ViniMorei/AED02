#include <stdio.h>
#include <stdlib.h>

void entrada(int *vetor[3]){
    for (int i = 0;i<3;i++){
        printf("Informe o %d valor: ",i);
        scanf("%d",vetor[i]);
    }
}
