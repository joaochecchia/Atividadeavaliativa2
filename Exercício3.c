#include <stdio.h>
#include <string.h>

int main(){
    int matriz[4][4];
    int matriz2[4][4];
    int resultado[4][4];
    char operacao[5];
    char soma[] = "soma";
    char sub[] = "sub";

    for(int i = 0; i < 4; i++){
        for(int x = 0; x < 4; x++){
            scanf("%d", &matriz[i][x]);
        }
    }
    
    for(int i = 0; i < 4; i++){
        for(int x = 0; x < 4; x++){
            scanf("%d", &matriz2[i][x]);
        }
    }

    scanf("%s", operacao);

    if(strcmp(operacao, soma) == 0){
        for(int i = 0; i < 4; i++){
            for(int x = 0; x < 4; x++){
                resultado[i][x] = matriz[i][x] + matriz2[i][x]; 
            }
        }
    } else if(strcmp(operacao, sub) == 0){
        for(int i = 0; i < 4; i++){
            for(int x = 0; x < 4; x++){
                resultado[i][x] = matriz[i][x] - matriz2[i][x];
            }  
        }
    } else {
        for(int i = 0; i < 4; i++) {
            for(int j = 0; j < 4; j++) {
                resultado[i][j] = 0; 
                for(int k = 0; k < 4; k++) {
                    resultado[i][j] += matriz[i][k] * matriz2[k][j];
                }
            }  
        }
    } 
 
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            printf("%4d", resultado[i][j]);
        }  
        printf("\n");
    }
    return 0;
}
