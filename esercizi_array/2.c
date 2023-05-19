#include <stdio.h>

int duplicati(int a[], int n){
    //int flag=0;
    int i=0;
    int j;
    while(i<n){
        j=j+1;
        while(j<n){
            if(a[i]!=a[j])
                i++;
            else 
                return 1;
        }
    }
    return 0;
  
}
void main(){
    int a[3]={3,4,3};
    int n=3;
    if(duplicati(a, n)==0)
        printf("Non esiste un duplicato nell'array a");
    else
        printf("Esiste un duplicato nell'array a");
    }