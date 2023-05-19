#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int info;
    struct nodo* next;
};

typedef struct nodo elementoLista;
typedef elementoLista* lista;

lista crea_lista(){
    lista a=NULL;
    int n;
    printf("Scegli n: ");
    scanf("%d", &n);
    if(n<0)
        return a;
    elementoLista* nuovo=malloc(sizeof(elementoLista));
    nuovo->info=n;
    nuovo->next=NULL;
    a=nuovo;
    elementoLista* coda;
    coda=nuovo;
    printf("Scegli n: ");
    scanf("%d", &n);
    while(n>=0){
        nuovo=malloc(sizeof(elementoLista));
        nuovo->info=n;
        nuovo->next=NULL;
        coda->next=nuovo;
        coda=nuovo;
        printf("Scegli n: ");
        scanf("%d", &n);
    }  
    return a;
    }

void main(){
    lista a=crea_lista();
    
}
