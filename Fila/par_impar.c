/*Escreva um programa que, dado uma sequência de números aleatórios — gerados
através de um while — determina se o número é par ou ímpar e o insere em uma fila para 
pares ou em uma outra fila para ímpares e no final imprime o conteúdo de ambas*/
int main () 
{
  int num, cont = 0, n = 10;	

  //Cria as filas para os números pares e ímpares
  Queue *pares = create(n + 1); //+1 para deixar um espaço vazio quando cheia
  Queue *impares = create(n + 1);

  srand(time(NULL));

  //Loop que separa os números em pares ou ímpares até que tenham sido gerados n números aleatórios
  while(cont < n)
  {
    num = rand()%100; //Gera números aleatórios entre 0 e 99
    printf("Numero: %d\n", num);

    if((num % 2) == 0) //Verifica se num é divisível por 2
      enqueue(pares, num); 
    else
      enqueue(impares, num);

    cont++; //Incrementa o contador de números gerados
  }

  //Imprime as filas de pares e ímpares
  printf("Fila de pares:\n");
  print(pares);

  printf("Fila de impares:\n");
  print(impares);

  //Desaloca as filas
  destroy(pares);
  destroy(impares);

  return 0;
}
