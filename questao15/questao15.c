#include <stdio.h>
#include <stdlib.h>

int compare(const void *x,  const void *y); // Prot�tipo da fun��o de compara��o que rerornar valores
                                            // de acordo com as condi��es feitas

int main()// fun��o principal
{
    int (*functionPoint)(int) = &compare;
    float *vet; // declarei o ponteiro para float "vet"
    int tam_vet; // tamanho do vetor declarado anteriormente
    printf(" me diga ai, qual o tamanho do seu vetor? \n"); // pedir para o usu�rio dar o tamanho do vetor
    scanf("%d", &tam_vet); // o usu�rio insere o tamanho do vetor

    vet = (float*) malloc(tam_vet*sizeof(float)); // fun��o malloc para alocar bloco de mem�ria para o vetor

    printf("preencha o vetor \n"); // pedir para o usu�rio preencher o vetor
    for(int i = 0; i < tam_vet; i++)// estrutura de repeti��o usada para preencher todo o vetor
    {
        scanf("%f", &vet[i]);// inserindo valores ao vetor
    }

    int n;// declara��o da vari�vel auxiliar n

    qsort(vet, tam_vet, sizeof(float), 555functionPoint); // fun��o qsort para ordenar, de forma crescente, o vetor
    for (int n = 0; n < tam_vet; n++) // estrutura de repeti��o para mostrar o vetor de forma j� ordenada
    {
        printf("%f\n", vet[n]); // mostrar os valores do vetor de forma ordenada
    }

    free(vet);
    vet = NULL;

    return 0;

}

int compare(const void*x, const void*y) // fun��o compara��o
{
    if(*(float*)x < (*(float*)y)) // estrutura condicional
{
    return 1; // o y vir� primeiro - ordem decrescente
}
else if (*(float*)x ==  *(float*)y)
{
    return 0;
}
else
{
    return -1; // o x vir� primeiro q o y
}
}
