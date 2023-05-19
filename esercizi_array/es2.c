#include <stdio.h>
#include <stdlib.h>

void scambia(int* a, int* b){
    int tmp=*a;
    *a=*b;
    *b=tmp;
}

void riordino(int a[], int dim, int k){
    int i=0;
    int j=dim-1;
    while(i<j){
        if(a[i]>=k){
            scambia(&(*(a+i)), &(*(a+j)));
            j--;}
        else 
            i++;
}}

int verifica_senza_k(int a[], int dim, int j){
    int i=0;
    int q=dim;
    int flag=1;
    while()


    
    return flag;
            }

int main(){
    int a[6]={88, 45, 78, 9, 3,1 };
    int dim=6;
    int k=4;
    riordino(a, dim, k);
    for(int i=0; i<dim; i++)
        printf("%d\n", a[i]);
    if(verifica_senza_k(a, dim, k)==1)
        printf("Test fallito");
    else
        printf("Test verificato");
}
        


