#include <stdlib.h>
#include <stdio.h>

struct nodo{
    int info;
    struct nodo* next;
};

typedef struct nodo ElementoLista;
typedef ElementoLista* lista;


ElementoLista *add(ElementoLista *coda, int n)
{
    ElementoLista *nuovo = malloc(sizeof(ElementoLista));
    nuovo->info = n;
    nuovo->next = NULL;
    coda->next = nuovo;
    return nuovo;
}

lista crea_lista(){
    lista a=NULL;
    
    
    /*printf('Scegli un numero: ');
    scanf("%d", &n);
    if(n<=0)
        return a;*/
        
    ElementoLista* nuovo=malloc(sizeof(ElementoLista));
    nuovo->info=0;
    nuovo->next=0;
    a=nuovo;
    ElementoLista* coda;
    coda=nuovo;
    /*printf('Scegli un numero: ');
    scanf("%d", &n);
    while(n>0){
        ElementoLista* nuovo=malloc(sizeof(int));
        nuovo->info=n;
        nuovo->next=NULL;
        coda->next=nuovo;
        coda=nuovo;
        printf('Scegli un numero: ');
        scanf("%d", &n);*/
    
    return a;
    
}

void stampa_lista(lista a)
{
    if (a == NULL)
        return;
    printf("%d\n", a->info);
    stampa_lista(a->next);
}

lista aggiungi_elemento(lista a, int n){
    lista current=a;
    while(current-> next != NULL)
            current = current -> next;
        
    if(current->next==NULL){
    /*ElementoLista* nuovo=malloc(sizeof(ElementoLista));
        nuovo->info=n;
        nuovo->next=NULL;
        coda->next=nuovo;
        return a;*/
        add(current, n);}
        return a;
        
}
int main(){
    lista pari=crea_lista();
    lista dispari=crea_lista();
int n;
    while(n>0){
        
    printf("Scegli un numero: ");
    scanf("%d", &n);
        if(n%2==0)
            pari=aggiungi_elemento(pari, n);
        else
            dispari=aggiungi_elemento(dispari, n);
        
    }
    stampa_lista(pari);
    stampa_lista(dispari);
    
    
    
}