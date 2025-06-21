/*Notação polonesa*/
void reversed_polish_notation (char *c) {
  Stack *s = create(strlen(c)); // Cria a pilha com tamanho suficiente para a string
  int i = 0;

  while (c[i] != '\0') { // Percorre a string até o final
    if ((c[i] == '+') || (c[i] == '*') || (c[i] == '-')) {
      push(s, c[i]); // Empilha operadores
    } 
    else {
      if (c[i] == ')') {
        // Quando encontra um parêntese de fechamento, desempilha e imprime o operador
        printf("%c ", pop(s));
      } 
      else if ((c[i] >= '0') && (c[i] <= '9')) {
        // Imprime diretamente números (operandos)
        printf("%c ", c[i]);
      }
    }
    i++; // Avança para o próximo caractere
  }

  printf("\n"); // Quebra de linha para formatar a saída
  destroy(s); // Libera memória da pilha
}
