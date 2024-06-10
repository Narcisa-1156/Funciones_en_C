/*
7. Suma de una serie aritmética
• Descripción: Calcular la suma de los primeros n términos de una serie aritmética.
• Ejemplo: 1 + 2 + 3 + … + n
*/
#include<stdio.h>
int ingresardatos();
void calcularsuma(int n);
int ingresardatos(){
    int n;
    printf("Suma aritmetica\n");
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    return n;
}
void calcularsuma(int n){
    int suma = 0;
    int i = 1; // Inicializamos la variable de control del ciclo while
    printf("serie aritmetica = ");
    while (i <= n) {
        printf("%d", i);
        suma += i;
        if (i < n) {
            printf(" + ");
        }

        i++; 
    }
    printf(" = %d", suma);
}
int main() {
    int n = ingresardatos();
    calcularsuma(n);
    return 0;
}