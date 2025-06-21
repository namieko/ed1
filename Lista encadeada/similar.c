/*Escreva uma função que recebe duas listas encadeadas A e B como entrada e
retorna true se elas são iguais*/
int similar (List *A, List *B){
    while(A != NULL && B != NULL){
        if(A->data == B->data){
            A = A->next;
            B = B->next;
        }
        else 
            return 0;
    }
     
    if(A != NULL || B != NULL)
        return 0;
    
    return 1;
}
