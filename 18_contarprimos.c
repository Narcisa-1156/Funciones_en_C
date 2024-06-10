/*
18. Contar los números primos hasta n
• Descripción: Contar cuántos números primos hay desde 1 hasta n.
• Ejemplo: Si n = 10, hay 4 números primos (2, 3, 5, 7)
*/
#include <stdio.h>
#include <stdbool.h>
int ingresardatos();
void contarprimos(int n);
int ingresardatos(){
    //Definir variables
    int n;
    //Pedir al usuario que ingrese un numero
    printf("Ingrese un numero\n");
    scanf("%d", &n);
    return n;
}
void contarprimos(int n){
    //Definir variables
    int contador = 0;
    bool esprimo;
    //Presentar los numeros ingresados
    printf("Numeros primos encontrados: ");

    int j = 2; // Inicializamos el contador fuera del ciclo
    while (j <= n) { // Reemplazamos el ciclo for por un while
        esprimo = true;       
        // Verificar si el número j es primo
        int i = 2;
        do
        {
            if (j % i == 0) {
                esprimo = false;
                break;
            }
            i++;
        } while (i * i <= j);       
        if (esprimo) {
            printf("%d ", j);
            contador++;
        }        
        j++; // Incrementamos el contador dentro del ciclo
    }
    printf("\nCantidad de numeros primos encontrados: %d\n", contador);
}
int main() {
    int n = ingresardatos();
    contarprimos(n);
    return 0;
}
