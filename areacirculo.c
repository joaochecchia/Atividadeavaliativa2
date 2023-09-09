#include <stdio.h>

int main() {
    double pi = 3.14159;
    double raio;
    scanf("%lf", &raio);
    double resultado = raio * raio * pi;
    printf("A=%.4lf\n", resultado);
    
    return 0;
}