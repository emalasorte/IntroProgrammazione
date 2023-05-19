#include <stdio.h>

void selection_sort(int a[], int dim){
    int min;
    for(int i=0; i<dim; i++){
        min=i;
        for(int j=i+1; j<dim; j++){
            if(a[j]<a[min]){
                min=j;
            }
            }
        int tmp=a[i];
        a[i]=a[min];
        a[min]=tmp;
            }
    }
    
void bubble_sort(int a[], int dim){
    for(int i=0; i<dim; i++){
        for(int j=i+1; j<dim-1-i; j++){
            if(a[j]>a[j+1]){
                int tmp=a[j];
                a[j]=a[j+1];
                a[j+1]=tmp;
            }
        }
    }
} 




int main(){
    int a[5]={5,3,3,2,1};
    int n=5;
    selection_sort(a, n);
    for(int i=0; i<n; i++)
        printf("%d\n", a[i]);
    bubble_sort(a, n);
    for(int i=0; i<n; i++)
        printf("%d\n", a[i]);
}