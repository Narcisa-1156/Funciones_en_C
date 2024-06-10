/*
16. Suma de una serie de números fraccionarios
• Descripción: Calcular la suma de la serie 1 + 1/2 + 1/3 + … + 1/n.
• Ejemplo: Si n = 3, suma = 1 + 1/2 + 1/3
*/
#include<stdio.h>
float ingresardatos();
void sumafraccionarios(float num);
float ingresardatos(){
    float num;
    printf("Ingrese un numero\n");
    scanf("%f", &num);
    return num;
}
void sumafraccionarios(float num){
    float suma = 0;
    printf("suma = ");
    for (int i = 1.0; i <= num; i++)
    {
        suma = suma + 1/(float)i;
         if (i == 1) {
            printf("%d", i);
        } else {
            printf("1/%d", i);
        }
        if (i < num)
        {
            printf(" + ");
        }
    }
    printf(" = %f", suma);
}
int main(){
    float num = ingresardatos();
    sumafraccionarios(num);
    return 0;
}