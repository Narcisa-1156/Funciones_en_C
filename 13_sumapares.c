/*
13. Sumar los números pares hasta n
• Descripción: Calcular la suma de todos los números pares desde 1 hasta n.
• Ejemplo: Si n = 10, suma = 2 + 4 + 6 + 8 + 10 = 30
*/
#include<stdio.h>
int ingresardatos();
void calcularsuma(int n);
int ingresardatos(){
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    return n;
}
void calcularsuma(int n){
    int suma = 0, i = 0;
    printf("Resultado de la suma\n");
    printf("suma = ");
    do
    {
        if (i % 2 == 0) {
            printf("%d", i);
            if (i + 1 < n) {
                printf(" + ");
            }
            suma += i;
        }
        i++; // Incrementamos la variable de control del ciclo
    } while (i <= n);
    printf(" = %d", suma);
}
int main() {
    int n = ingresardatos();
    calcularsuma(n);
    return 0;
}
