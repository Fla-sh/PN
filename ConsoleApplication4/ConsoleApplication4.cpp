// ConsoleApplication4.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

void zad1(void) {
	const int MAX = 50;
	int tab[MAX][MAX];
	int x;
	int y;

	scanf_s("%d", &x);
	scanf_s("%d", &y);

	int i;
	int j;
	int wartosc;

	if (x < MAX && y < MAX) {
		for (i = 0; i < x; i++) {
			for (j = 0; j < y; j++) {
				scanf_s("%d", &wartosc);
				tab[i][j] = wartosc;
			}
		}
	}
	else printf("x i y musza byc mniejsze niz: %d", MAX);
}

void zad2(void) {
	int M;
	int N;
	int X;

	scanf_s("%d", &M);
	scanf_s("%d", &N);
	scanf_s("%d", &X);

	double **tab = new double * [M];
	int i;
	int j;
	double wartosc;
	double suma;
	int ilosc = 0;

	for (i = 0; i < M; i++) tab[i] = new double[N];

	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			scanf_s("%lf", &wartosc);
			tab[i][j] = wartosc;
		}
	}

	for (i = 0; i < M; i++) {
		for (j = 0; j < N; j++) {
			printf("%lf ", tab[i][j]);
		}
		printf("\n");
	}

	for (j = 0; j < N; j++) {
		suma = 0;
		for (i = 0; i < M; i++) {
			suma += tab[i][j];
		}
		if (suma > X) ilosc++;
	}
	printf("%d", ilosc);
}

struct znak {
	char nazwa[16];
	int dzien;
};

struct znak znaki[12] = {
	{"wodnik", 20},
	{"ryba", 19},
	{"baran", 21},
	{"byk", 20},
	{"bliznieta", 21},
	{"rak", 21},
	{"lew", 23},
	{"panna", 23},
	{"waga", 23},
	{"skorpion", 23},
	{"strzelec", 22},
	{"koziorozec", 22}
};

void zad3(void) {
	int dzien;
	int miesiac;
	struct znak z;
	scanf_s("%d", &dzien);
	scanf_s("%d", &miesiac);

	int idx;

	if (znaki[miesiac - 1].dzien > dzien) idx = miesiac - 2;
	else idx = miesiac - 1;

	printf("%s", znaki[idx].nazwa);
}

int main()
{
	zad3();
}
