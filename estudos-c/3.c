#include <stdio.h>

int main(){
    
    int V[10];
    int i;
    int calculo[10];
    int *p;
    
    p = V;
    
    printf("Digite 10 elementos: \n");
    
    for(i = 0; i < 10; i++){
        scanf("%d", &V[i]);
    }
    
    printf("\n Calculo do quadrado dos elementos\n");
    
    for(i = 0; i < 10; i++){
        calculo[i] = (*(p + i)) * (*(p+i));
        printf(" %d ", calculo[i]);  
    }
    
    return 0;
}


