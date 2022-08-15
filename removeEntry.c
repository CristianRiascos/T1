#include <stdio.h>
#include <stdlib.h> //malloc

// Struct node que almacena números enteros y un apuntador con tipo de dato del mismo struct
// (node) que representa la conexión al nodo que esté enlazado
struct node
{
    int data;
    struct node *nextNode;
};


struct linkedList
{
    struct node *head;
};


void removeNode( struct linkedList *list, struct node* nodeElim )
{
    struct node **indirect = &list->head;
    while ( *indirect != nodeElim )
        indirect = &( *indirect )->nextNode;
    *indirect = nodeElim->nextNode;

    return;
}


// Función que retorna la lista de nodos
struct node *create_eliminate( )
{
    //  Se crean nodos para especificar la cabeza, cuerpo y cola de la lista apuntando a NULL en un inicio
    struct node *head = NULL;
    struct node *mid = NULL;
    struct node *tail = NULL;
    int i, number;

    // Almacena en la variable number el número de nodos que el usuario ingresará
    printf( "Cuantos nodos desea ingresar: " );
    scanf( "%d", &number );

    // Se itera para que el usuario ingrese el número de nodos que eligió el usuario
    for( i = 0; i<number; i++ )
    { 

        // Se crea el espacio del nodo con memoria dinámica
        mid = ( struct node* )malloc( sizeof(struct node) );

        printf( "Ingrese el valor del nodo: " );
        scanf( "%d", &(mid->data) );
        mid->nextNode = NULL;   

        // En caso de ser el primer nodo ingresado, lo pone como su nodo inicial, es decir, el head
        if( head == NULL )
            head = mid;
        /*
        En caso de no ser el primer nodo ingresado, hace que el nodo que acaba de entrar esté vinculado
        con el nodo anterior, es decir, al nodo anterior que este se le asigna como nextNode al que recién entra
        */ 
        else{
            tail = head;
            while( tail->nextNode != NULL )
                tail = tail->nextNode;
            tail->nextNode = mid;
        }
    }
    
    return head;
}


// Imprime la lista de nodos
void printList( struct node * head )
{
    struct node *imp = head;
    while( imp != NULL )
    {
        printf( "%d->", imp->data );
        imp = imp->nextNode;
    }
    printf( "NULL\n" );
    return;
}


int main()
{
    struct node *head;
    struct linkedList l;

    head = create_eliminate( );
    printf( "\nLista enlazada: " );
    printList( head );
    //removeNode
    return 0;
}
