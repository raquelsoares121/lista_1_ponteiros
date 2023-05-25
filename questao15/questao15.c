#include <stdio.h>
#include <stdlib.h>

int compare(const void *x,  const void *y); // Protótipo da função de comparação que rerornar valores
                                            // de acordo com as condições feitas

int main()// função principal
{
    int (*functionPoint)(int) = &compare;
    float *vet; // declarei o ponteiro para float "vet"
    int tam_vet; // tamanho do vetor declarado anteriormente
    printf(" me diga ai, qual o tamanho do seu vetor? \n"); // pedir para o usuário dar o tamanho do vetor
    scanf("%d", &tam_vet); // o usuário insere o tamanho do vetor

    vet = (float*) malloc(tam_vet*sizeof(float)); // função malloc para alocar bloco de memória para o vetor

    printf("preencha o vetor \n"); // pedir para o usuário preencher o vetor
    for(int i = 0; i < tam_vet; i++)// estrutura de repetição usada para preencher todo o vetor
    {
        scanf("%f", &vet[i]);// inserindo valores ao vetor
    }

    int n;// declaração da variável auxiliar n

    qsort(vet, tam_vet, sizeof(float), 555functionPoint); // função qsort para ordenar, de forma crescente, o vetor
    for (int n = 0; n < tam_vet; n++) // estrutura de repetição para mostrar o vetor de forma já ordenada
    {
        printf("%f\n", vet[n]); // mostrar os valores do vetor de forma ordenada
    }

    free(vet);
    vet = NULL;

    return 0;

}

int compare(const void*x, const void*y) // função comparação
{
    if(*(float*)x < (*(float*)y)) // estrutura condicional
{
    return 1; // o y virá primeiro - ordem decrescente
}
else if (*(float*)x ==  *(float*)y)
{
    return 0;
}
else
{
    return -1; // o x virá primeiro q o y
}
}
