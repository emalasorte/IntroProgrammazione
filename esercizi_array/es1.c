#include <stdio.h>
#include <stdlib.h>

int trovare(int* a, int dim, int n){
    for(int i=0; i<dim; i++){
        if(*(a+i)==n)
            return 1;
    }
    return 0;
}

int senza_duplicati(int* a, int n){
    int count=n;
    for(int i=0; i<n; i++){
        if (trovare(&(*(a+i+1)), n-(i+1), a[i]) == 1)
            count--;
    }
    return count;
}

int* array_senza_duplicati(int a[], int dim){
    int n=senza_duplicati(a, dim);
    int* c=malloc(sizeof(int)*n);
    int k=0;
    for(int i=0; i<dim; i++){
        int diverso=1;
        for(int j=i-1; j>=0; j--){
            if(a[i]==a[j])
                diverso=0;
            }
        if(diverso==1){
            c[k]=a[i];
            k++;
        }}
    return c;
        }


void main(){
    int a[6]={3, 2, 2, 3, 5, 5};
    int dim=6;
    //int* c;
    int dimension=3;
    int n=senza_duplicati(a, dim);
    printf("%d \n", n);
    printf("pluto\n");
    printf("%d\n", n);
    int* c=array_senza_duplicati(a, dim);
    for(int i=0; i<n; i++)
        printf("%d\n", c[i]);
}

