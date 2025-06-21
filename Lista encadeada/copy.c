/*Escreva uma função que recebe uma lista encadeada A como entrada e realiza uma cópia, 
ou seja, para cada nó em A realize a alocação de um novo nó em uma nova lista B*/
List* copy (List *A){
    List *B = create();
    List *t = A;
    while(t != NULL){
        B = insert_back(B, t->data);
        t = t->next;
    }
    return B;
}
