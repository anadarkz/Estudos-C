#include <stdio.h>

int main(){
  int V[6];
  int i;
  
  printf("Digite 6 elementos:\n");
  
  for(i = 0; i < 6; i++){
    scanf("%d", &V[i]);
  }
  
  printf("Elementos: \n");
  
  for(i = 0; i < 6; i++){
    printf("%d", V[i]);
  }
  
  return 0;
}