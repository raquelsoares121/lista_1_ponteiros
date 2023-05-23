#include <stdio.h>
#include <stdlib.h>

typedef int TipoFuncao();

int print_rachel();

int main()
{
    TipoFuncao *pt_rachel;

    pt_rachel = print_rachel;

    int return_rachel = (*pt_rachel)();

    printf("retorno da funcao: %d \n ", return_rachel);

    return 0;
}

int print_rachel(){

    printf(" meu nome eh Raquel \n");

    return 1;

}
