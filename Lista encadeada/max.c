/*Escreva uma função que recebe uma lista encadeada como entrada e retorna o maior 
elemento armazenado*/
int max (List *l){
    int max = -INT_MAX;
    List *t;
    for(t = l; t != NULL; t = t->next){
        if(t->data > max)
            max = t->data;
    }
    return max;
}
