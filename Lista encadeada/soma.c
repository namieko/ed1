/*Escreva uma função que recebe uma lista encadeada como entrada e retorna a soma
dos elementos*/
int sum (List *l){
    List *t;
    int s = 0;
    for(t = l; t != NULL; t = t->next)
        s += t->data;
    
    return s;
}
