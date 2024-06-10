/*
10. Verificar si un número es primo
• Descripción: Determinar si un número es primo.
• Ejemplo: 7 es primo, 10 no es primo
*/
#include<stdio.h>
#include<stdbool.h>
int ingresardatos();
int calculardivisores(int n);
void verificarprimo(int contador, int n);
int ingresardatos(){
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    return n;
}
int calculardivisores(int n){
    int contador = 0;
    int i = 2; // Inicializamos la variable de control del ciclo while
    while (i < n) {
        if (n % i == 0) {
            contador += 1;
        }
        i++; // Incrementamos la variable de control del ciclo
    }
    return contador;
}
void verificarprimo(int contador, int n){
    bool esprimo = true; // Inicializamos la variable esprimo como verdadero
    if (contador > 0) {
        esprimo = false;
        printf("El numero %d no es primo\n", n);
    } else {
        printf("El numero %d es primo\n", n);
    }
}
int main() {
    int n = ingresardatos();
    int contador = calculardivisores(n);
    verificarprimo(contador, n);
    return 0;
}
