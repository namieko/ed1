/* Parser */
int parser (char *c) {
  Stack *s = create(strlen(c)); 

  int i = 0; 

  // Percorre cada caractere da string 
  while (c[i] != '\0') {

    // Se o caractere for um parêntese ou colchete de abertura, empilha na pilha
    if ( (c[i] == '(') || (c[i] == '[') ) 
      push (s, c[i]);

    else {
      // Se o caractere for um parêntese de fechamento ')'
      if (c[i] == ')') {
        // Verifica se a pilha está vazia ou se o topo da pilha não é o parêntese correspondente '('
        // Se for o caso, a expressão está incorreta, então retorna 0 (falso)
        if (empty(s) || pop(s) != '(') 
          return 0;	
      }	
      // Se o caractere for um colchete de fechamento ']'
      else if (c[i] == ']') {
        // Verifica se a pilha está vazia ou se o topo da pilha não é o colchete correspondente '['
        // Se for o caso, a expressão está incorreta, então retorna 0 (falso)
        if (empty(s) || pop(s) != '[') 
          return 0;	
      }
    }
    i++; // Avança para o próximo caractere
  }

  // Após o fim da string, verifica se ainda restaram elementos na pilha
  // Se sim, há símbolos de abertura sem fechamento
  if (!empty(s)) {
    return 0;
  } else {
    // Caso contrário, a expressão está balanceada
    return 1;
  }
}
