/*
20. Calcular la suma de los factoriales de los primeros n números
• Descripción: Calcular la suma de los factoriales de los primeros n números.
• Ejemplo: Si n = 3, suma = 1! + 2! + 3! = 1 + 2 + 6 = 9
*/
#include <stdio.h>
int ingresardatos();
void calcularfactoriales(int n);
int ingresardatos(){
    int n;
    // Solicitar al usuario que ingrese el valor de n
    printf("Ingrese el valor de n: ");
    scanf("%d", &n);
    return  n;
}
void calcularfactoriales(int n){
    int suma = 0, factorial = 1;
    // Imprimir la serie factorial
    printf("Suma = ");
    for (int i = 1; i <= n; i++) {
        factorial *= i; // Calcula el factorial de i
        suma += factorial; 

        // Mostrar el término factorial actual
        if (i == 1) {
            printf("%d!", i);
        } else {
            printf(" + %d!", i);
        }
    }

    // Mostrar la suma
    printf(" = %d\n", suma);
}
int main() {
    int n = ingresardatos();
    calcularfactoriales(n);
    return 0;
}
