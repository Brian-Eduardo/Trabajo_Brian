#include <stdio.h>

int main() 
{
    float n1, n2, suma, resta, multiplicacion, division;

    printf("Ingrese el primer numero (entero o decimal): ");
    scanf("%f", &n1); 

    printf("Ingrese el segundo numero (entero o decimal): ");
    scanf("%f", &n2); 

    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;

    printf("La suma de %.2f y %.2f es: %.2f\n", n1, n2, suma);
    printf("La resta de %.2f y %.2f es: %.2f\n", n1, n2, resta);
    printf("La multiplicacion de %.2f y %.2f es: %.2f\n", n1, n2, multiplicacion);

    if (n2 != 0) 
	{
        division = n1 / n2;
        printf("La division de %.2f entre %.2f es: %.2f\n", n1, n2, division);
    } 
	else 
	{
        printf("Error: Division por cero no permitida.\n");
    }

    return 0;
}