

#include<stdio.h>
#include<math.h>

double distanza(double x1, double y1, double x2, double y2){
    double x1x2, y1y2, dxy, sum;
    double x1x2p=1;
    double y1y2p=1;
    x1x2=x1-x2;
    y1y2=y1-y2;
    for(int i=2; i>0; i--){
        x1x2p=x1x2p*x1x2;
        y1y2p=y1y2p*y1y2;}
    sum=x1x2p+y1y2p;
    dxy=sqrt(sum);
    return(dxy);
}
int main(){
double x1, y1, x2, y2;
printf("Inserisci il numero x1: ");
scanf("%lf", &x1);
printf("Inserisci il numero y1: ");
scanf("%lf", &y1);
printf("Inserisci il numero x2: ");
scanf("%lf", &x2);
printf("Inserisci il numero y2: ");
scanf("%lf", &y2);
    double distanza(x1, y1, x2, y2);{
        printf("%lf\n", distanza(x1, y1, x2, y2));
        return 0;
    }}