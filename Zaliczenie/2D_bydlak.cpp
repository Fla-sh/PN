#include <stdio.h>


int main()
{

	int** tablica = new int* [5];
	for (int i = 0; i < 5; i++) {
		tablica[i] = new int[5];
		for (int j = 0; j < 5; j++) {
			tablica[i][j] = i * j;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d ", tablica[i][j]);
		}
		printf("\n");
	}

	return 0;
}
