/* Função para verificar se uma string é um palíndromo */
int palindrome(char *c) {
    int len = strlen(c);
    Stack *stack = create(len);

    // Carrega todos os caracteres da string na pilha (ficam na ordem inversa quando forem desempilhados)
    for (int i = 0; i < len; i++) {
        push(stack, c[i]);
    }

    // Compara os caracteres da string original com os da pilha (na ordem inversa)
    for (int i = 0; i < len; i++) {
        // Se algum caractere for diferente do correspondente na pilha, não é palíndromo
        if (c[i] != pop(stack)) {
            destroy(stack); 
            return 0;
        }
    }

    destroy(stack); 
    return 1;
}
