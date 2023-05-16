#include <stdio.h>
#include <stdlib.h>

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f; // o conteúdo do endereço de f é vet
  int i;
  f = vet;
  printf("contador/valor/valor/endereco/endereco");
  for(i = 0 ; i <= 4 ; i++){
  printf("\n i = %d",i); // imprimir o valor da posição i, sendo ele um numero inteiro
  printf("\n vet[%d] = %.1f",i, vet[i]);// imprimir a posição do vetor vet
  printf("\n *(f + %d) = %.1f",i, *(f+i));// imprimir o conteúdo de f mais o valor de i
  printf("\n &vet[%d] = %x",i, &vet[i]);// imprimir o endereço do vetor vet na posição i, sendo ele em hexadecimal
  printf("\n (f + %d) = %x",i, f+i); // imprimir o ponteiro f mais o valor de i, achando o valor em hexadecimal
  printf("\n");
  }
}

// i = 0
// vet[0] = 1.1
// *(f + 0) = 1.1
// &vet[0] = 61fdf0
// (f + 0) = 61fdf0

 // i = 1
 // vet[1] = 2.2
 // *(f + 1) = 2.2
 // &vet[1] = 61fdf4
 // (f + 1) = 61fdf4

 // i = 2
 // vet[2] = 3.3
 // *(f + 2) = 3.3
 // &vet[2] = 61fdf8
 // (f + 2) = 61fdf8

 // i = 3
 // vet[3] = 4.4
 // *(f + 3) = 4.4
 // &vet[3] = 61fdfc
 // (f + 3) = 61fdfc

 // i = 4
 // vet[4] = 5.5
 // *(f + 4) = 5.5
 // &vet[4] = 61fe00
 // (f + 4) = 61fe00