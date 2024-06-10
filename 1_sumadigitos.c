/*
1. Suma de los dígitos de un número
• Descripción: Dado un número, calcular la suma de sus dígitos.
• Ejemplo: 12567 -> 1 + 2 + 5 + 6 + 7 = 21
*/
#include <stdio.h>

// Prototipos de funciones
int ingresardatos();
void calculardigitos(int numero);

int ingresardatos() {
    int numero;
    printf("Bienvenido a mi programa\n");
    printf("Ingrese el numero que desea sumar: ");
    scanf("%d", &numero);
    return numero;
}

void calculardigitos(int numero) {
    int digito, divisor = 1, suma = 0;
    
    // Calcular el número de dígitos y el divisor apropiado
    for (int i = numero; i >= 10; i /= 10) {
        divisor *= 10;
    }
    
    // Imprimir el número original
    printf("%d -> ", numero);

    // Descomponer el número y sumar los dígitos 
    for (int i = divisor; i > 0; i /= 10) {
        digito = numero / i;
        suma += digito;
        printf("%d", digito);
        numero %= i;
        if (i > 1) {
            printf(" + ");
        }
    }
    // Imprimir el resultado de la suma
    printf(" = %d\n", suma);
}

int main() {
    int numero = ingresardatos();
    calculardigitos(numero);
    return 0;
}

