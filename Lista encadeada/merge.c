/* merge-sort */
// Função que mescla (merge) duas listas encadeadas ordenadas A e B
List* merge (List *A, List *B) {
    List *c, *p; // 'c' será o início da nova lista, 'p' é o ponteiro de percurso

    // Escolhe o primeiro nó da nova lista, pegando o menor entre os dados das listas A e B
    if (A != NULL && (B == NULL || A->data <= B->data)) {
        c = A;           // Primeiro nó será de A
        A = A->next;     // Avança A
    }
    else if (B != NULL) {
        c = B;           // Primeiro nó será de B
        B = B->next;     // Avança B
    }

    p = c; // Inicializa o ponteiro de percurso com o início da lista mesclada

    // Enquanto ambas as listas tiverem elementos
    while (A != NULL && B != NULL) {
        if (A->data < B->data) {
            p->next = A;   // O menor valor é de A, adiciona à lista
            A = A->next;   // Avança A
        }
        else {
            p->next = B;   // O menor valor é de B, adiciona à lista
            B = B->next;   // Avança B
        }
        p = p->next;       // Avança o ponteiro da lista mesclada
    }

    // Se ainda restarem elementos em A, adiciona o restante à lista
    if (A != NULL)
        p->next = A;
    // Se ainda restarem elementos em B, adiciona o restante à lista
    else if (B != NULL)
        p->next = B;

    // Retorna o início da nova lista mesclada
    return c;
}
