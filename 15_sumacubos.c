/*
15. Suma de los cubos de los primeros n números
• Descripción: Calcular la suma de los cubos de los primeros n números naturales.
• Ejemplo: Si n = 3, suma = 1^3 + 2^3 + 3^3 = 36
*/
#include<stdio.h>
int ingresardatos();
void calcularcubos(int num);
int ingresardatos(){
    int num;
    printf("Ingrese un numero\n");
    scanf("%d", &num);
    return num;
}
void calcularcubos(int num){
    int cubo = 0;
    printf("suma = ");
    int i = 1; // Inicializamos el contador 
    while (i <= num) 
    {
        cubo = cubo + i*i*i;
        printf("%d^3 ", i);
        if (i + 1 < num)
        {
            printf(" + ");
        }
        i++; // Incrementamos el contador 
    } 
    printf(" = %d", cubo);
}
int main(){
    int num = ingresardatos();
    calcularcubos(num);
    return 0;
}
