#include <stdio.h>
#include <stdlib.h>

int main()
{
    double vet_rachel[4];
    int vet_int[4];
    float vet_float[4];
    char vet_char[4];

    printf("vet_char esta no endereço: %p \n", vet_char);
    for (int i=1; i<4; i++){
       printf(" vet_char + %d: %p \n", i, vet_char+i);
    }

    printf("vet_int esta no endereço: %p \n", vet_int);
    for (int i=1; i<4; i++){
       printf(" vet_int + %d: %p \n", i, vet_int+i);
    }

    printf("vet_float esta no endereço: %p \n", vet_float);
    for (int i=1; i<4; i++){
       printf(" vet_float + %d: %p \n", i, vet_float+i);
    }

    printf("vet_double esta no endereço: %p \n", vet_rachel);
    for (int i=1; i<4; i++){
       printf(" vet_double + %d: %p \n", i, vet_rachel+i);
    }

    return 0;
}
