#include <stdio.h>

int fibo(int i)
{

    if(i==0) return 0;

    if(i==1) return 1;

    return(fibo(i-1)+fibo(i-2));
}

int main(void)

{

    int i,f;

printf("Inserisci un valore i: ");

    scanf("%d" ,&i);

    

    f=fibo(i);

    

    printf("Fibonacci vale %d\n" ,f);

    

    return 0;

}
