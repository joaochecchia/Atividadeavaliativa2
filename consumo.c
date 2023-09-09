#include <stdio.h>
 
int main() {
    float km, l, consumo;
    scanf("%f", &km);
    scanf("%f", &l);
    consumo = km/l;
    printf("%.3f km/l\n", consumo);
    
    return 0;
}