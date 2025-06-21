/* Escreva uma função que recebe uma lista encadeada e um inteiro k como entrada
   e insere k na lista respeitando a ordenação. */
List* insert_sort (List *l, int k) {
    List *node = (List*)malloc(sizeof(List));

    // Atribui o valor k ao novo nó
    node->data = k;  
    node->next = NULL;

    // Caso especial: lista vazia ou k deve ser inserido antes do primeiro nó
    if (l == NULL || k < l->data) {
        node->next = l; // Aponta para o início atual da lista
        return node;    // Novo nó passa a ser o primeiro da lista
    }

    // Ponteiro auxiliar para percorrer a lista
    List *t = l;

    // Avança até encontrar a posição onde k deve ser inserido
    // (antes do primeiro nó com valor maior ou igual a k)
    while (t->next != NULL && t->next->data < k)
        t = t->next;

    // Insere o novo nó após o nó t
    node->next = t->next;
    t->next = node;

    // Retorna o início da lista (que não mudou)
    return l;
}
