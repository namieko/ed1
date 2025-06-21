/* Função para calcular a fatoração prima */
void prime_factorization(int n) {
    Stack *stack = create(n);
    int divisor = 2;
    // Encontrar os fatores primos
    while (n > 1) {
        while (n % divisor == 0) {
            push(stack, divisor);
            n /= divisor;
        }
        divisor++;
    }

    // Imprimir os fatores em ordem decrescente
    while (!empty(stack)) {
        printf("%d", pop(stack));
        if (!empty(stack))
            printf(" * ");
    }
    destroy(stack);
}
