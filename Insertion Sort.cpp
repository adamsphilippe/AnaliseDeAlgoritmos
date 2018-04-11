/*
Aluno: Philippe Adams
Matrícula; 3214142
*/

#include <stdio.h>
#include <iostream>
using namespace std;

// função que executa a ordenação do Insertion Sort.
void insertionSortC(int array[], int tamanho)
{
      int i, j, chave;

      for (i = 1; i < tamanho; i++)
      {
            j = i;
            while (j > 0 && array[j - 1] > array[j])
            {
                  chave = array[j];
                  array[j] = array[j - 1];
                  array[j - 1] = chave;
                  j--;
            }
      }
}

int main(int argc, char** argv)
{
	int array[100], tamanho, ordem;

	printf("\n\t Defina o numero de termos: ");
	scanf("%d", &tamanho);

	printf("\n\t Digite os numeros do arranjo: ");
	for(int i = 0; i < tamanho;i++)
    {
        cin >> array[i];
	}

    insertionSortC(array, tamanho);
    printf("\n\t Numeros ordenados em ordem crescente: ");
		for(int i=0; i<tamanho; i++)
        {
            printf("%d ", array[i]);
        }

	return 0;
}
