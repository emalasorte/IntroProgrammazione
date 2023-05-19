/*#include <stdio.h>
int is_inside(int x, int y, int z){
    int dim=z-y;
    if(x>y)
        if(x<z)
            return 0;
    return -1;
}
int overlap_size(int i, int j, int t, int u){
    int i_j=j-i;
    int t_u=u_t;
    int dim=i_j+t_u;

    dim=dim-is_inside()
    
}*/
#include <stdio.h>

int overlap_size(int i, int j, int t, int u) {

int q=0;

for(int p=i; p<=j; p++)
{
for(int r=t; r<=u; r++)

{

if(p==r)

{
q++;
}

}

}

return q;

}

int main()



{

int i,j,t,u;

printf("inserisci il valore di i!"); scanf("%d",&i); printf("inserisci il valore di j"); scanf("%d",&j);

if(i>=j)

{

printf("il valore di j è troppo piccolo, riinserire j'"); scanf("%d",&j);

} printf("inserisci il valore di t.");

scanf("%d",&t);

printf("inserisci il valore di u."); scanf("%d",&u);

if(t>=u)

{

printf("Il valore di u è troppo piccolo, insere dinuovo u."); scanf("%d",&u); }

    