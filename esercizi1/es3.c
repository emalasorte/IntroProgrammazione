#include <stdio.h>

int evenodd(int m)
{
    while(m>1)
        {
    m=m-2;}
    if(m==1)
    return m=1;
    else
    return m=0;
    }
int main()
{
    int g;
    printf("Scegli un valore: ");
    scanf("%d", &g);
    int m=evenodd(g);{
    if(m==1)
    printf("%d is Odd\n", g);
    else
    printf("%d is Even\n", g);
    }}
 


    


    

