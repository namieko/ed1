/*Escreva uma função que recebe uma lista encadeada e um inteiro k como entrada e 
retorna verdadeiro se o elemento k pertence a lista*/
int in (List *l, int k){
    List *t;
    for(t = l; t != NULL; t = t->next)
        if(t->data == k)
            return 1;
    
    return 0;
}
