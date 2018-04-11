/*
Aluno:
Matrícula;
*/

#include <stdio.h>

void selection_sort (int vetor[],int max) {
  int i, j, min, aux;

  for (i = 0; i < (max - 1); i++) {
    /* O minimo é o primeiro número não ordenado ainda */
    min = i;
    for (j = i+1; j < max; j++) {
      /* Caso tenha algum numero menor ele faz a troca do minimo*/
      if (vetor[j] < vetor[min]) {
	min = j;
      }
    }
    /* Se o minimo for diferente do primeiro numero não ordenado ele faz a troca para ordena-los*/
    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
  }
  /* Imprime o vetor ordenado */
  printf("\n\t Numeros ordenados em ordem crescente: ");
  for (i = 0; i < max; i++) {
    printf ("%d ",vetor[i]);
  }
  printf ("\n");
}

int main () {
  int max, i;
  //int vetor[100];
  int  vetor[100];
  /* Lê o máximo de algarismos do vetor*/
  printf("\n\t Defina o numero de termos: ");
	scanf ("%d",&max);

  /* Lê os algarismos do vetor */
  printf("\n\t Digite os numeros do arranjo: ");
	for(int i = 0; i < max; i++)
    {
        scanf ("%d",&vetor[i]);
	}

  selection_sort (vetor, max);

}
