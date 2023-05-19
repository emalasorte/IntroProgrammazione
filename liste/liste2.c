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
    printf("Scegli un numero: ");
    scanf("%d", &n);
    if(n==0)
        return a;
    elementoLista* nuovo=malloc(sizeof(elementoLista));
    nuovo->info=n;
    nuovo->next=NULL;
    a=nuovo;
    elementoLista* coda;
    coda=nuovo;
    //Dal secondo elemento
    printf("Scegli un numero: ");
    scanf("%d", &n);
    while(n!=0){
    nuovo=malloc(sizeof(elementoLista));
    nuovo->info=n;
    nuovo->next=NULL;
    coda->next=nuovo;
    coda=nuovo;
    printf("Scegli un numero: ");
    scanf("%d", &n);
    }
    return a;}

void stampa(lista a){
    if(a==NULL)
        return;
    printf("%d\n", a->info);
    stampa(a->next);
    }

lista unione_fine(lista a, lista b){
    lista testa_a=a;
    while(a -> next != NULL)
      a = a -> next;
    a -> next = b;
    return testa_a;
}

lista nuovo_valore(lista a, int k){
    while(a->next<=k)
        a=a->next;
    a->next=k;
    return a;
}




int main(){
    lista a=crea_lista();
    lista b=crea_lista();
    stampa(a);
    printf("\n\n");
    stampa(b);
    a=unione_fine(a, b);
    printf("\n\n");
    stampa(a);
    int k=5;
    a=nuovo_valore(a, k);
    printf("\n\n");
    stampa(a);
}