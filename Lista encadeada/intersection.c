/*Escreva uma função que recebe duas listas encadeadas A e B como entrada e cria um 
novo conjunto C de intersecção entre elas. O(n²)?*/
List* intersection(List *A, List *B) {
    List *C = create();  
    List *currentA = A;
    
    while (currentA != NULL) {
        if (search(B, currentA->data) != NULL) {
            C = insert_front(C, currentA->data);
        }
        currentA = currentA->next;
    }
    return C;
}
