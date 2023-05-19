#include <stdio.h>

void main()
{
	int n, i, num, max, min;
	
		printf("Quanti numeri inserire?: ");
		scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		printf("Numero %d:", i+1);
		scanf("%d", &num);
		if(i==0) max=num;
		if(num>max) max=num;
        if(i==0) min=num;
        if(num<min) min=num;
	}
	
	printf("Il valore massimo è: %d\n", max);
    printf("Il valore minimo è %d\n", min);

    
 
}