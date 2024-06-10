/*
4. Radicación mediante restas sucesivas
• Descripción: Calcular la raíz cúbica de un número utilizando restas sucesivas.
• Ejemplo: 27^(1/3) = 3
*/
#include <stdio.h>
#include <math.h>

void ingresardatos();
void calcularraiz(double base, double raiz);

void ingresardatos() {
    double base, raiz;
    printf("Ingrese la base: ");
    scanf("%lf", &base);
    printf("Ingrese la raiz: ");
    scanf("%lf", &raiz);
    calcularraiz(base, raiz);
}

void calcularraiz(double base, double raiz) {
    double resultado;
    resultado = pow(base, 1.0 / raiz);
    
    // Verifica si la raíz es un número entero
    if (raiz == (int)raiz) {
        // Verifica si el resultado es un número entero
        if (resultado == (int)resultado) {
            printf("La raiz %.0lf con base %.0lf es: %.0lf\n", raiz, base, resultado);
        } else {
            printf("La raiz %.0lf con base %.0lf es: %.6lf\n", raiz, base, resultado);
        }
    } else {
        printf("La raiz %.6lf con base %.6lf es: %.6lf\n", raiz, base, resultado);
    }
}
int main() {
    ingresardatos();
    return 0;
}
