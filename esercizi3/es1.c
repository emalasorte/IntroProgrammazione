#include <stdio.h>

int n_primi(int n, int m){
    if(m==1){
        return 1;}
    if(n%m==0){
        return 0;}
    return n_primi(n, m-1);
}
void main(){
int n;
printf("Scegli un numero: ", n);
scanf("%d", &n);
    
if (n == 1)
printf("1 è primo\n", n);
else {
int m = n - 1;

if (n_primi(n, m) == 1)
printf("%d è primo\n", n);
else
printf("%d non è primo\n", n);

    }}

