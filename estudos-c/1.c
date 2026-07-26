#include <stdio.h>

int main(){
  int A[6] = {1, 0, 5, -2, -5, 7};
  int soma = 0;

  soma = ((soma + A[0]) + A[1]) + A[5];
  
  printf("A soma dos índices 0, 2 e 5 é: %d\n", soma);

  A[4] = 100;
  printf("Novo elemento do índice 4: %d", A[4]);


  return 0;
}