/*Calcular uma expressão a partir de notação polonesa*/
int compute_polish_expression(char *c) {
    Stack *s = create(strlen(c));  // Cria a pilha com tamanho baseado no comprimento da string.
    int i = 0;

    while (c[i] != '\0') {
        // Se for um operando (número)
        if (c[i] >= '0' && c[i] <= '9') {
            int num = c[i] - '0';  // Converter o caractere para inteiro
            push(s, num);         // Empilhar o número
        }
        // Se for um operador
        else if (c[i] == '+' || c[i] == '-' || c[i] == '*' || c[i] == '/') {
            // Retirar os dois operandos do topo da pilha
            int op2 = pop(s);  // Operando 2
            int op1 = pop(s);  // Operando 1

            // Realizar a operação
            int result;
            if (c[i] == '+')
                result = op1 + op2;
            else if (c[i] == '-')
                result = op1 - op2;
            else if (c[i] == '*')
                result = op1 * op2;
            else if (c[i] == '/')
                result = op1 / op2;

            // Empilhar o resultado
            push(s, result);
        }

        i++;  // Avançar para o próximo caractere
    }

    // O resultado final estará no topo da pilha
    int final_result = pop(s);
    destroy(s);  // Liberar a memória da pilha
    return final_result;
}
