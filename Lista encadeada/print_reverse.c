/*Escreva uma função que recebe uma lista encadeada como entrada e imprime a
lista em ordem reversa */
void print_reverse(List *l) {
    // Pilha auxiliar
    List *stack = create();

    // Cria a pilha usando `insert`
    while (l != NULL) {
        stack = insert(stack, l->data); // Insere na cabeça
        l = l->next;
    }

    // Imprime a pilha
    print(stack);

    // Libera a memória da pilha
    destroy(stack);
}
