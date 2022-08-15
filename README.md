# Ejecución:
El código inicia con una pregunta al usuario sobre cuántos nodos van a ser ingresados sobre la lista enlazada (de números enteros), esto lo lleva a un bucle para que pueda darle valor a cada nodo que posteriormente es conectado de la siguiente forma:

1. Si es el primer nodo ingresado, será el nodo head
2. Caso contrario (para el segundo o más), vinculará el nodo anterior al segundo por medio de la variable del struct llamda nextNode.

Por su parte, el struct de los nodos se compone de 2 variables: int que corresponde al número entero asociado al nodo y nextNode que es un puntero hacia el mismo struct y almacena el nodo al que está enlazado.

Nota: Hubo problemas respecto al makefile y removeEntry
