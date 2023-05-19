#include <stdlib.h>
#include <stdio.h>

struct elemento{
    int size;
    int* a;
    struct elemento* next;
};

typedef struct elemento elementoLista;
typedef elementoLista* lista;



lista init(int n){
    int* a=malloc(sizeof(int)*n);
    for(int i=0; i< n; i++)
        *(a+i)=i;
    lista b=NULL;
    elementoLista* nuovo=malloc(sizeof(elementoLista));
    nuovo->size=n;
    nuovo->a=a;
    b=nuovo;
    return b;
   
}

void print(lista a){
    if(a==NULL) 
        return;
    for(int i=0; i< a->size; i++) 
    printf("%d\n\n ", a->a[i]);
    print(a->next);
}

int main(){
    int a[5]={1,3,3,4,9};
    int b[3]={7,8,9,};
    int c[2]={1,0};
    lista aq=init(5);
    lista bw=init(3);
    lista ce=init(2);
    print(aq);
    printf("\n\n\n");
    print(bw);
    printf("\n\n\n");
    print(ce);
    
}