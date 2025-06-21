/*Merge-sort usando fila circular*/
Queue* merge (Queue *a, Queue *b){
    int size = getsize(a) + getsize(b);
    Queue *c = create(size);

    while(!empty(a) || !empty(b)){
        if (empty(a)) {
            // Se 'a' estiver vazio, insira todos os elementos restantes de 'b' em 'c'.
            enqueue(c, front(b));
            dequeue(b);
        } else if (empty(b)) {
            // Se 'b' estiver vazio, insira todos os elementos restantes de 'a' em 'c'.
            enqueue(c, front(a));
            dequeue(a);
        } else if (front(a) <= front(b)) {
            // Caso contrário, insira o menor elemento entre 'a' e 'b'.
            enqueue(c, front(a));
            dequeue(a);
        } else {
            enqueue(c, front(b));
            dequeue(b);
        }
    }
    return c;
}
