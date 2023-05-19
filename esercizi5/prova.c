// Linked list data structure

#include <stdio.h>
#include <stdlib.h>

typedef struct nodo { // Creo una struct `nodo`: contiene un valore e un puntatore
    int valore; // `valore` contiene il dato del nodo
    struct nodo* successivo; // Un puntatore al nodo successivo
} elemento; // Alias al tipo dati `nodo`

typedef elemento* puntatore; // Alias al tipo dati puntatore a `nodo`

int main(void)
{
    puntatore testa; // Puntatore al primo `nodo` della lista
    int n; // Lunghezza della lista, cioè numero di nodi
    printf("Inserire il numero di elementi della lista: ");
    scanf("%d", &n);
	
    // Creiamo e inseriamo i valori nella lista ///////////////////////////////////////////
    puntatore attuale = malloc(sizeof(elemento)); // Alloco il primo elemento della lista
    testa = attuale; // L'elemento di cui attualmente ho il puntatore è il primo
    (*attuale).valore = 1; // Al primo elemento della lista assegno il `valore` 1

    for(int i = 2; i < n + 1; i++)
    {
	// Dereferenzio `attuale` ottenendo il `nodo` puntato da esso di cui considero
	// l'argomento `successivo` che è il puntatore al prossimo nodo, che alloco
        (*attuale).successivo = malloc(sizeof(elemento));
        attuale = attuale->successivo;
        attuale->valore = i; // Uguale a `(*attuale).valore = i`
    }
    
    attuale->successivo = NULL; // Il puntatore all'ultimo elemento è `NULL`

    // Stampiamo i valori contenuti nella lista nell'ordine in cui appaiono ///////////////
    attuale = testa; // Partiamo dalla testa della list

    while(attuale != NULL) { // Finchè non esaurisco gli elementi della lista
	printf("%d -> ", attuale->valore); // Stampo valore del `nodo` `attuale`
	attuale = attuale->successivo; // Aggiorno il puntatore a quello del prossimo `nodo`
    }  

    printf("\b\b\b   \n"); // Cancello gli ultimi 3 caratteri stampati a schermo
    return 0;
    }