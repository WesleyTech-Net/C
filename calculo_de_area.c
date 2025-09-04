#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define PI 3.14159

int main() {
    
    float raio;
    printf("Insira o raio: ");
    scanf("%f", &raio);

    double areaTotal = PI * raio * raio;

    printf("A area do circulo com raio %.2f e %2.f\n", raio, areaTotal);
    
    return 0;
}