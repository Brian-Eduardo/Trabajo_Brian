#include <stdio.h>

int main ()
{
int n1, n2, suma, resta, mul, div;

printf("Ingrese el primer numero:");
scanf("%d",&n1);

printf("Ingrese el segundo numero:");
scanf("%d",&n2);

suma = n1 + n2;
resta = n1 - n2;
mul = n1 * n2;
div = n1 / n2;

printf("La suma de %d y %d es: %d\n ", n1, n2, suma);
printf("La resta de %d y %d es: %d\n ", n1, n2, resta);
printf("La multipicacion de %d y %d es: %d\n ", n1, n2, mul);
printf("La divicion de %d y %d es: %d\n ", n1, n2, div);

return 0;
}