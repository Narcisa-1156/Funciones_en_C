/*
17. Producto de una serie de números fraccionarios
• Descripción: Calcular el producto de la serie 1 * 1/2 * 1/3 * … * 1/n.
• Ejemplo: Si n = 3, producto = 1 * 1/2 * 1/3
*/
#include<stdio.h>
float ingresardatos();
void calcularproducto(float num);
float ingresardatos(){
    float num;
    printf("Ingrese un numero\n");
    scanf("%f", &num);
    return num;
}
void calcularproducto(float num){
    float producto = 1;
    printf("producto = ");
    
    int i = 1; // Inicializamos el contador fuera del ciclo
    while (i <= num) // Reemplazamos el ciclo for por un while
    {
        producto = producto * 1/(float)i;
        
        if (i == 1) {
            printf("%d", i);
        } else {
            printf(" 1/%d", i);
        }
        
        if (i < num)
        {
            printf(" * ");
        }
        
        i++; // Incrementamos el contador dentro del ciclo
    }
    
    printf(" = %f", producto);
}
int main(){
    float num = ingresardatos();
    calcularproducto(num);
    return 0;
}
