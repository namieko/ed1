/*Caça-níquel com fila*/
void jackpot (int n, int r) 
{
  int i, j, k, num, primeiro, atual, ganhou;
  Queue *carreteis[n]; //Cria as filas 

  //Inicializa os carretéis e os gira aleatoriamente
  for(i = 0; i < n; i++)
  {
    carreteis[i] = create(10); //Cada carretel tem tamanho 10 (9 números + 1 espaço)
    for(j = 1; j <= 9; j++) //Enfileira os números de 1 a 9
      enqueue(carreteis[i], j);

    for(k = 0; k < (rand() % r); k++) //Gira o carretel um número aleatório de vezes
    {
      num = dequeue(carreteis[i]); // Remove o primeiro da fila
      enqueue(carreteis[i], num); // Reenfileira o número ao final
    }
  }

  primeiro = front(carreteis[0]); // Armazena o primeiro número do primeiro carretel
  ganhou = 1; // Assume que o jogador ganhou

  printf("Resultado: %d ", primeiro); // Imprime o primeiro número

  // Verifica o resultado dos carretéis restantes
  for(i = 1; i < n; i++) 
  {
    atual = front(carreteis[i]);
    printf("%d ", atual); // Imprime o número atual

    // Se algum número é diferente, o jogador não ganha
    if (atual != primeiro) 
      ganhou = 0; 
  }

  printf("\n");

  if (ganhou)
    printf("You win!\n");
  else
    printf("You loose.\n");

  // Destruindo as filas (carretéis)
  for(i = 0; i < n; i++)
    destroy(carreteis[i]);

}

int main () {
  srand(time(NULL));	
  int n = 3;  /*número de carretéis*/ 
  int r = 10; /*sequência de números em cada carretel*/ 
  jackpot (n, r);
}
