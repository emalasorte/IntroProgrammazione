#include <stdio.h>
void main()
{
int n;
printf("Inserire n:");
scanf("%d", &n);

if(n>=0)
    printf("0\n");
if(n>=1){
    int primo=1;
    int secondo=1;
    int terzo;
    printf("%d\n", primo);
    if(n>1){
    printf("%d\n", secondo);
    for(int i=2; i<n; i++){
        terzo=primo+secondo;
        primo=secondo;
        secondo=terzo;
        printf("%d\n", terzo);
        }
        }
    }
}