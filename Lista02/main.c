#include<stdio.h>
#include<stdlib.h>

void Bubble(int vetor[], int tamanho){
	int aux, i, j;
	for(j=tamanho-1; j>0; j--){
		for(i=0; i<j; i++){
			if(vetor[i]>vetor[i+1]){
				aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
}

void Insert(int vetor[], int tamanho){
    for(int i = 1; i < tamanho; i++){
        int aux = vetor[i];
        int j = i;
        while ((j > 0) && (aux < vetor[j-1])){
            vetor[j] = vetor[j-1];
            j--;
        }
        vetor[j] = aux;
    }
}

void Select(int vetor[], int tamanho) {
  int i, j, min, aux;
  for (i = 0; i < (tamanho-1); i++)
  {
     min = i;
     for (j = (i+1); j < tamanho; j++) {
       if(vetor[j] < vetor[min])
         min = j;
     }
     if (i != min) {
       aux = vetor[i];
       vetor[i] = vetor[min];
       vetor[min] = aux;
     }
  }
}

int main(){
    int vetor[5];

    for (int i=0;i<5;i++){
        scanf("%d", &vetor[i]);
    }

    for (int i=0;i<5;i++){
        printf("%d ",vetor[i]);
    }

    Select(vetor, 5);

    printf("\n");
    for (int i=0;i<5;i++){
        printf("%d ",vetor[i]);
    }
    return 0;
}
