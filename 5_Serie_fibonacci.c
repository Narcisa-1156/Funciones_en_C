/*
5. Serie de Fibonacci
• Descripción: Presentar los n elementos de la serie de Fibonacci.
• Ejemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, …
*/
#include <stdio.h>
int ingresardatos();
void presentarserie();
int ingresardatos(){
    int secuencia;
    printf("Ingrese la cantidad de numeros de numeros de la secuencia: ");
    scanf("%i", &secuencia);    
    return secuencia;
}
void presentarserie(int secuencia){
    int inicial = 1; 
    int suma = 0; 
    int i = 2; // Inicializamos la variable de control del ciclo while

    if (secuencia == 1) {
        printf("0\n");
    }
    else if (secuencia == 2) {
        printf("0, 1\n");
    }

    printf("0, 1");  

    while (i < secuencia) {
        int siguiente = inicial + suma;
        printf(", %d", siguiente);
        suma = inicial;
        inicial = siguiente;
        i++; 
    }
}
int main() {
    int secuencia = ingresardatos();
    presentarserie(secuencia); 
    printf("\n");
    return 0;
}
