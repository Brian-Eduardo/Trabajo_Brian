#include <stdio.h>

int main() 
{
    int n1, n2;
    int suma, resta, multiplicacion, division;

    printf("Ingresa el primer numero entero: ");
    scanf("%d", &n1);

    printf("Ingresa el segundo numero entero: ");
    scanf("%d", &n2);

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;

    printf("La suma de %d y %d es: %d\n", n1, n2, suma);
    printf("La resta de %d y %d es: %d\n", n1, n2, resta);
    printf("La multiplicacion de %d y %d es: %d\n", n1, n2, multiplicacion);

    if (n2 != 0) 
	{
        division = n1 / n2;
        printf("La division de %d entre %d es: %d\n", n1, n2, division); 
    } 
	else 
	{
        printf("Error: Division por cero no permitida.\n");
    }

    return 0;
}