#include <stdio.h>
#include <stdlib.h>


void selection_sort(int* a, int n){
    int min;
    for(int i=0; i<n-1; i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(a[j]<a[min])
                min=j;
        }
        int tmp=a[i];
        a[i]=a[min];
        a[min]=tmp;
    }
}

int* somma(int* a, int* b, int n, int m){
    int* c = malloc((n+m) * sizeof(int));  
    int i, j; 
    for (i = 0; i < n; i++) 
        c[i] = a[i];
    for (j = 0; j < m; j++) 
    c[i + j] = b[j];
    selection_sort(&(*c), (n+m));
    return c;
}

int main(){
    int a[5]={5,3, 2 ,2,1};
    int n=5;
    int b[3]={9,7,6};
    int m=3;
    int *c=somma(a, b, n, m);
    for(int i=0; i<n+m; i++)
        printf("%d\n", c[i]);}
 //   bubble_sort(a, n);
    //for(int i=0; i<n; i++)
      //  printf("%d\n", a[i]);/*