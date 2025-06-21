/*Escreva uma função que recebe uma lista encadeada como entrada e retorna o tamanho 
da lista*/
int size (List *l){
    List *t;
    int s = 0;
    for(t = l; t != NULL; t = t->next)
        s ++;
    
    return s;
}
