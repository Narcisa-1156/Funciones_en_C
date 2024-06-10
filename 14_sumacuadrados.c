/*
14. Suma de los cuadrados de los primeros n números
• Descripción: Calcular la suma de los cuadrados de los primeros n números naturales.
• Ejemplo: Si n = 3, suma = 1^2 + 2^2 + 3^2 = 14
*/
#include<stdio.h>
int ingresardatos();
int sumarcuadrados(int num);
int ingresardatos(){
    int num;
    printf("Ingrese un numero\n");
    scanf("%d", &num);
    return num;
}
int sumarcuadrados(int num){
    int cuadrado = 0;
    printf("suma = ");
    for (int i = 1; i <= num; i++)
    {
        cuadrado = cuadrado + i*i;
        printf("%d^2 ", i);
        if (i + 1 < num)
        {
            printf(" + ");
        }      
    } 
    printf(" = %d", cuadrado);
}
int main(){
    int num = ingresardatos();
    sumarcuadrados(num);
    return 0;
}