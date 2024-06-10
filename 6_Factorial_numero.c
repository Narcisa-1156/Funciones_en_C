/*
6. Factorial de un número
• Descripción: Calcular el factorial de un número.
• Ejemplo: 5! = 5 * 4 * 3 * 2 * 1 = 120
*/
#include<stdio.h>
int ingresardatos();
void calcularfactorial(int n);
int ingresardatos(){
    int n;
    printf("Ingrese un numero\n");
    scanf("%d", &n);    
    return n;
}
void calcularfactorial(int n){
    int resultado = 1;
    printf("%d! = ", n);
    for (int i = n; i >= 1; i--)
    {
        printf("%d", i);
        if (i > 1)
        {
            printf(" * ");
        }
        resultado *= i;         
    }
    printf(" = %d", resultado);
}
int main(){
    int n = ingresardatos();
    calcularfactorial(n);
    return 0;
}