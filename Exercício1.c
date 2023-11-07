#include<stdio.h>
#include <string.h>

int main(){
    int numeros[10];

    for(int i = 0; i < 10; i++){
        scanf("%d", &numeros[i]);
    }
    
    for(int i = 0; i < 10; i++){
        printf("%d", numeros[i]);
        if(i < 9){ 
            printf(" "); 
        }
    }
    printf("\n");
    
    int resultados[10];
    
    for(int b = 10; b > 0; b--){
        resultados[b-1] = numeros[b-1];
        for(int a = 0; a < b-1; a++){
            resultados[a] = numeros[a] + numeros[a + 1];
            printf("%d", resultados[a]); 
            if(a < b-2){ 
                printf(" ");
            }
        }
        if(b > 1) printf("\n");
        
        for(int i = 0; i < 10; i++){
            numeros[i] = resultados[i];
        }
    }
    
    return 0;
}