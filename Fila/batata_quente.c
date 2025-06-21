/*Batata-quente*/
int hot_potato(int n, int m) {
    Queue *q = create(n); 
    
    // Inicializa a fila com as pessoas de 1 a n
    for (int i = 1; i <= n; i++) {
        enqueue(q, i);
    }

    // Executa o processo de eliminação até sobrar apenas 1 elemento
    while (getsize(q) > 1) {
        // Passa a batata m-1 vezes (a pessoa na frente da fila passa a batata)
        for (int i = 0; i < m - 1; i++) {
            int person = dequeue(q); // Remove a pessoa da frente e coloca ela de volta no final
            enqueue(q, person);
        }
        
        // Elimina a pessoa da frente (a pessoa que recebeu a batata)
        dequeue(q);
    }

    // O último elemento restante é o vencedor 
    int winner = front(q); 
    destroy(q); 
    return winner; 
}
