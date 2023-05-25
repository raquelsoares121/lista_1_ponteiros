#include <stdio.h>
#include <stdlib.h>

void fuction_rachel( float *vet, int tam_vet);

int main()
{
    float *vet;
    int tam_vet;
    printf(" me diga ai, qual o tamanho do seu vetor? \n");
    scanf("%d", &tam_vet);

    vet = (float*) malloc(tam_vet*sizeof(float));

    printf("preencha o vetor \n");
    for(int i = 0; i < tam_vet; i++){
        scanf("%f", &vet[i]);
    }

    fuction_rachel(vet, tam_vet);

    printf(" o vetor ordenado eh:\n" );
    for(int i=0; i<tam_vet; i++){
        printf ("%f\n", vet[i]);
    }

    free(vet);
    vet = NULL;
    return 0;
}

void fuction_rachel( float *vet, int tam_vet){
  float auxiliar = 0;
  for (int i = 0; i < tam_vet; i++){
    for (int j = i; j < tam_vet; j++){
        if(vet[i] > vet[j]){
            auxiliar = vet[i];
            vet[i] = vet[j];
            vet[j] = auxiliar;
        }
    }
  }
}
