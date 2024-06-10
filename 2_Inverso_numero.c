/*
2. Inverso de un número
• Descripción: Dado un número, obtener su inverso.
• Ejemplo: 12567 -> 76521
*/
#include <stdio.h>
int ingresardatos();
int calculardigitos(int num);
void imprimirinverso(int digitos, int num);
int ingresardatos(){
    int num;
    printf("Ingrese el numero que desea invertir: ");
    scanf("%i", &num);
    return num;
} 
int calculardigitos(int num){
    int digitos = 0;
    int valor = num;
    while (valor != 0) {
        valor /= 10;
        digitos++;
    }
    return digitos;
}
void imprimirinverso(int digitos, int num){
        for (int i = 0; i < digitos; i++) {
        int residuo = num % 10;  
        printf("%d", residuo);   
        num /= 10;              
    }
}
int main(int argc, char const *argv[])
{
    int num = ingresardatos();
    int digitos = calculardigitos(num);
    printf("El numero invertido es: ");
    imprimirinverso(digitos, num);
    printf("\n");  
    return 0;
}