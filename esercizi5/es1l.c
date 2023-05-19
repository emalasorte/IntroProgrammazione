
#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int info;
    struct nodo * next;
};


typedef struct nodo elementoLista;
typedef elementoLista* lista;

/*struct nodo2{
    int info2;
    struct nodo2* next2;
};

typedef struct nodo2 elementoLista2;
typedef elementoLista2* lista2;*/

lista crea_lista(){
    lista a=NULL;
    int n;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    if(n==-1)
        return a;
    elementoLista* nuovo=malloc(sizeof(elementoLista));
    //(*nuovo).info=n;
    nuovo->info=n;
    nuovo->next=NULL;
    a=nuovo;
    elementoLista* coda;
    coda=nuovo;
    printf("Inserisci numero: ");
    scanf("%d", &n);
    while (n!=-1){
        nuovo=malloc(sizeof(elementoLista));
        nuovo->info=n;
        nuovo->next=NULL;
        coda->next=nuovo;
        coda=nuovo;
        printf("Inserisci un numero: ");
        scanf("%d", &n);
        }
    return a;
    }

void stampa_lista_ric(lista a){
    if(a==NULL)
        return;
    printf("%d\n", a->info);
    stampa_lista(a->next);
}

void stampa_lista_ite(lista a ){
    while(a!=NULL){
        printf("%d\n", a->info);
        a=a->next;
        }
    }


void dimensioni(lista a){
    int dim=0;
    while(a!=NULL){
        dim++;
        a=a->next;}
    printf("Dimensione della lista: %d\n", dim);
}

lista unione(lista a, lista b, int j){
    if(j<=0){
        lista testa_b=b;
        while(b->next!=NULL)
            b=b->next;
        b->next=a;
        return testa_b;
    }
    lista testa_a=a;
        while(a->next!=NULL)
            a=a->next;
        a->next=b;
        return testa_a;
}

lista inserimento(lista a, int k){

    
}




void main(){
    lista a=crea_lista();
    stampa_lista_ite(a);
    dimensioni(a);
}
