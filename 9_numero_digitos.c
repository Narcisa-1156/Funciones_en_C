/*
9. Número de dígitos de un número
• Descripción: Contar el número de dígitos de un número.
• Ejemplo: 12567 tiene 5 dígitos
*/
#include <stdio.h>
int ingresardatos();
int calculardigitos(int numero);
void presentardatos(int contador, int numero);
int ingresardatos(){
    int numero;

    // Solicitar al usuario que ingrese el número
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    return numero;
}
int calculardigitos(int numero){
    // Inicializar el contador en 0
    int contador = 0;
    // Contar el número de dígitos
    for (contador = 0; numero != 0; contador++) {
        numero = numero / 10;
    }
    return contador;
}
void presentardatos(int contador, int numero){

    // Presentar el resultado
    printf("Presentacion del numero de digitos\n");
    printf("El numero %d tiene %d digitos.\n", numero, contador);
}
int main() {
    int numero = ingresardatos();
    int contador = calculardigitos(numero);
    presentardatos(contador, numero);
    return 0;
}