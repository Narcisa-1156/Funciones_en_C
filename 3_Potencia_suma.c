/*
3. Potencia mediante sumas sucesivas
• Descripción: Calcular la potencia de un número utilizando sumas sucesivas.
• Ejemplo: 2^3 = 2 * 2 * 2 = 8
*/
#include<stdio.h>
void ingresardatos();
void calcularpotencia(int base, int exponente);
void ingresardatos(){
    int base, exponente;    
    printf("Ingrese la base: ");
    scanf("%d", &base);    
    printf("Ingrese el exponente: ");
    scanf("%d", &exponente);
    calcularpotencia(base, exponente);
}
void calcularpotencia(int base, int exponente){
    int resultado = 1;
    printf("%d^%d = ", base, exponente);
    int i = 1;
    if (i <= exponente) {
        printf("%d", base);
        resultado *= base;
        i++;
    }
    while (i <= exponente) {
        printf(" * %d", base);
        resultado *= base;
        i++;
    }
    printf(" = %d", resultado);
}
int main() {
    ingresardatos();  
    return 0;
}
