#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int info;
    struct nodo * next;
};

typedef struct nodo elementoLista;
typedef elementoLista* lista;

struct nodo2{
    int info2;
    struct nodo2* next2;
};

typedef struct nodo2 elementoLista2;
typedef elementoLista2* lista2;


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