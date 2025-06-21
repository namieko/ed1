/* Mostre como implementar uma FILA através da utilização de UMA OU MAIS PILHAS */

// Função para enfileirar (inserir) um elemento na fila
void enqueue (Stack *s, int elem) {
    // Basta empilhar o elemento na pilha principal
    push(s, elem);
}
// Função para desenfileirar (remover) um elemento da fila
int dequeue (Stack *s) {
    // Cria uma pilha temporária para inverter a ordem dos elementos
    Stack *tmp = create();

    // Transfere todos os elementos da pilha principal para a pilha temporária, para inverter
    while (!empty(s)) {
        push(tmp, pop(s));
    }

    // O elemento no topo da pilha temporária é o primeiro que foi inserido originalmente (FIFO)
    int elem = pop(tmp); // Remove esse elemento

    // Retorna os demais elementos da pilha temporária para a pilha original
    while (!empty(tmp)) {
        push(s, pop(tmp));
    }
  
    // Retorna o elemento removido
    return elem;
}
