/*
19. Calcular el n-ésimo número triangular
• Descripción: Calcular el n-ésimo número triangular.
• Ejemplo: Si n = 4, el número triangular es 1 + 2 + 3 + 4 = 10
*/
#include<stdio.h>
int ingresardatos();
void calcularenesimo(int n);
int ingresardatos(){
    int n;
    printf("Ingrese un numero: ");
    scanf("%d", &n);
    return n;
}
void calcularenesimo(int n){
    int suma = 0;
    printf("numero triangular: ");
    
    int i = 1; // Inicializamos el contador fuera del ciclo
    do
    {
        printf("%d", i);
        if (i < n)
        {
            printf(" + ");
        }
        suma += i;
        i++; // Incrementamos el contador dentro del ciclo
    } while (i <= n);
    printf(" = %d", suma);

}
int main(){
    int n = ingresardatos();
    calcularenesimo(n);
    return 0;
}