#include <stdio.h>
#include <stdlib.h>

void somaVetor(int *vet_1, int *vet_2, int *vet_resul, int tam);

int main()
{
    int *vet_1, *vet_2, *vet_resul, tam;

    printf ("me diga o tamanho do seu vetor 1 e 2: \n");
    scanf("%d", &tam);

    vet_1 = (int*)malloc(sizeof(int)*tam);
    vet_2 = (int*)malloc(sizeof(int)*tam);
    vet_resul = (int*)malloc(sizeof(int)*tam);

    printf(" me diga os valores do vetor 1: \n");
    for(int i=0; i<tam; i++){
        scanf ("%d", &vet_1[i]);
    }

    printf(" me diga os valores do vetor 2: \n");
    for(int i=0; i<tam; i++){
        scanf ("%d", &vet_2[i]);
    }

    somaVetor(vet_1, vet_2, vet_resul, tam);

    printf("o vetor resultante eh \n", vet_resul);
     for(int i=0; i<tam; i++){
        printf("%d \n", vet_resul[i]);
    }

    free(vet_1);
    free(vet_2);
    free(vet_resul);
    return 0;
}


void somaVetor(int *vet_1, int *vet_2, int *vet_resul, int tam){
    for (int i=0; i<tam; i++){
        vet_resul[i] = vet_1[i]+vet_2[i];
    }
}
