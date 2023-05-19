#include <stdio.h>

int somma(int j){
    if(j==1)
        return(1);
    return(j+(somma(j-1)));
}

int ite(int a, int b){
for(int i=a; i<=b; i++){
int x=0;
x=x+somma(i);
printf("%d\n", i);}
}


int main(){
int j;
printf("Scegli un numero: ");
scanf("%d", &j);
int o=somma(j);
printf("%d\n", o);
int a, b;
printf("Scegli un numero: ");
scanf("%d", &a);
printf("Scegli un numero: ");
scanf("%d", &b);
int p=ite(a, b);
printf("%d\n", p);}