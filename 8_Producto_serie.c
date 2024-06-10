/*
8. Producto de una serie geométrica
• Descripción: Calcular el producto de los primeros n términos de una serie geométrica.
• Ejemplo: 2, 4, 8, 16, …
*/
#include<stdio.h>
void ingresardatos();
void calcularproducto(int razon, int n);
void ingresardatos(){
    int razon, n;
    printf("Ingrese la razon comun (Por ejemplo: 2): ");
    scanf("%d", &razon);
    printf("Cuantos numeros desea ejecutar?: ");
    scanf("%d", &n);
    calcularproducto(razon, n);
}
void calcularproducto(int razon, int n){
    int resultado = 1;
    int i = 1; // Inicializamos la variable de control del ciclo while
    do
    {
        resultado *= razon;
        printf("%d", resultado);

        if (i < n) {
            printf(" , ");
        }  
        i++; 
    } while (i <= n);  
}
int main() {
    printf("Producto de una serie geometrica\n");
    ingresardatos();
    return 0;
}