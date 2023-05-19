#include <stdio.h>
int main(){
int n;
printf("Scegli un valore di n: ");
scanf("%d", &n);
double a_0=1.0;
double a_1=2.0;
double a_n2=a_0;
double a_n1=a_1;
double a_i;
printf("a_0 = 1\n");
printf("a_1 = 2\n");

for(int i=2; i<=n; i++){
    if(i%2==0){
        a_i=(i+3*(a_n2-2))/a_n1;
        printf("a_%d = %lf\n", i, a_i);
        a_n2=a_n1;
        a_n1=a_i;}
    else{
        a_i=(i+3*(a_n1-2))/a_n2;
        printf("a_%d = %lf\n", i, a_i);
        a_n2=a_n1;
        a_n1=a_i;
        
    }}}