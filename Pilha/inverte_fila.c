/* Função que inverte os elementos de uma fila usando uma pilha */
void reverse(Queue *q) {
    Stack *s = create_stack(get_size(q));

    // Passar os elementos da fila para a pilha
    while (!empty_queue(q)) {
        push(s, dequeue(q));
    }

    // Passar os elementos da pilha de volta para a fila
    while (!empty_stack(s)) {
        enqueue(q, pop(s));
    }

    // Destruir a pilha
    destroy_stack(s);
}
