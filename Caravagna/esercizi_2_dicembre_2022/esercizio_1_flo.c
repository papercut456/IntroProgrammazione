#include <stdio.h>
#include <stdlib.h>

struct nodo //indica cos'e un nodo della lista, contiene due campi
{
// definisco il tipo nodo e un puntatore al successivo
    int info; 
    struct nodo * next;
}; //la struct vuoe il ; dopo la graffa

typedef struct nodo elementoLista; //ogni volta che scrivo elementoLista intendo struct nodo
typedef elementoLista * lista; //ogni volta che scrivo listaintendo il puntatore ad un nodo
lista crea_lista() //non ci servono parametri perche' l'utende da i numeri
{
    lista a = NULL;
    int n; 
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    if(n == -1)
        return lista; //ritorna la lista che e' NULL
    elementoLista * nuovo = malloc(sizeof(elementoLista)); //nuovo nodo nella memoria dinamica
    //dobbiamo riempire il nuovo nodo
    //(*nuovo).info = n; scrittura uguale alla riga successiva (24)
    nuovo -> info = n;
    nuovo -> next = NULL;
    a = nuovo;
    elementoLista * coda;
    coda = nuovo;
    printf("Inserisci un numero: ");
    scanf("%d", &n);
    while(n != -1)
        {
            //siamo qua dentro lo scanf ha ricevuto un numero diverso da -1
            nuovo = malloc(sizeof(elementoLista));
            nuovo -> info = n;
            nuovo -> next = NULL;
            coda -> next = nuovo;
            printf("Inserisci un numero: ");
            scanf("%d", &n);
        }
    return a;
}

void stampa_lista(lista a)
{
    if(a == NULL)
        return;
    printf("%d\n", a -> info);
    stampa_lista(a->next);
}

void main()
{
    lista a = crea_lista();
    stampa_lista(a);
}