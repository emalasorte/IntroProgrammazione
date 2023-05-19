#include <stdlib.h>
#include <stdio.h>


struct elementopari{int infop; struct elementopari*nextp;};
typedef struct elementopari ElementoPari;
typedef ElementoPari* ListaElementiPari;


struct elementodispari{int infod; struct elementodispari*nextd;};
typedef struct elementodispari ElementoDispari;
typedef ElementoDispari* ListaElementiDispari;

int main(){
    int a;
    ListaElementiPari listap=NULL;
    ListaElementiDispari listad=NULL;
    printf("Indica l'elemento della lista: ");
    scanf("%d", &a); 
    if(a<0)
        printf("a non deve essere minore di zero!");
            
    if(a%2==0){
            ListaElementiPari* new1=malloc(sizeof(ElementoPari));
            new1->infop=a;
            new1->nextp=NULL;
            a=new1;
            ElementoPari*codap;
            codap=new1;
            printf("Indica l'elemento della lista: ");
            scanf("%d", &a); 
            }
    else{
            ListaElementiDispari* new2=malloc(sizeof(ElementoDispari));
            listad=new2;
            new2->infod=a;
            new2->nextd=NULL;
            ElementoDispari*codad;
            codad=new2;
            printf("Indica l'elemento della lista: ");
            scanf("%d", &a); 
            }
    while(a>0){
        if(a%2==0){
            new1=malloc(sizeof(ElementoPari));
            new1->infop=a;
            new1->nextp=NULL;
            codap->nextp=new1;
            codap=new1;
            printf("Indica l'elemento della lista: ");
            scanf("%d", &a); 
        }
        else{
            new2=malloc(sizeof(ElementoDispari));
            new2->infod=a;
            new2->nextd=NULL;
            codad->nextd=new2;
            codad=new2;
            printf("Indica l'elemento della lista: ");
            scanf("%d", &a); 
        }}}
    
        
    



