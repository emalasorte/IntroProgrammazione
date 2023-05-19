#include <stdio.h>

int minimo(int x, int y, int z)
{
    int min;
    if(x<y)
        min=x;
    else
        min=y;
    if(min>z)
        min=z;
    return(min);
}
void test(){


    
}
int main()
{
int x, y, z, min;
printf("Inserisci il numero x: ");
scanf("%d", &x);
printf("Inserisci il numero y: ");
scanf("%d", &y);
printf("Inserisci il numero z: ");
scanf("%d", &z);
int minimo(int x, int y, int z);{
    printf("%d\n", minimo(x, y, z));
    }
}