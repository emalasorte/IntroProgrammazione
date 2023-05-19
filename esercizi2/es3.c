#include <stdio.h>

double a_x_y(double x, double y, double epsilon){
    double tmp=x-y;
    if(tmp<0){
        tmp=-tmp;}
    if(tmp>=0){
        tmp=tmp;}
    if(tmp<epsilon){
        return(1);}
    else{
        return(0);}
    }
int main(){
double x, y, epsilon;
printf("Inserisci il numero x: ");
scanf("%lf", &x);
printf("Inserisci il numero y: ");
scanf("%lf", &y);
printf("Inserisci il numero epsilon: ");
scanf("%lf", &epsilon);
double a=a_x_y(x, y, epsilon);
if(a==1){
    printf("I due numeri sono uguali con epsilon %lf\n", epsilon);}
else{
    printf("I due numeri diversi con epsilon %lf\n", epsilon);

return(0);
}}

