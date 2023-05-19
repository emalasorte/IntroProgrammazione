#include <stdio.h>
void main()

{
float x;

printf("Inserire x: ");
scanf("%f", &x);

if (x>=0)
    printf("%f\n è positivo", x);
    printf("Valore assoluto: %f\n", x);
else
    printf("%f\n è negativo", x);
    printf("Valore assoluto %f, -x");
    

return 0;
}