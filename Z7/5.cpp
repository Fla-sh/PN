// ConsoleApplication13.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

void automat() {
	FILE * in;
	int suma = 0;
	char moneta;

	fopen_s(&in, "automat", "rt");
	moneta = fgetc(in);
	while (feof(in) == NULL) {
		switch (moneta) {
		case 'c': {
			suma += 1;
			break;
		}
		case 't': {
			suma += 2;
			break;
		}
		case 'f': {
			suma += 5;
			break;
		}
		case 'd': {
			suma += 10;
			break;
		}
		case 'q': {
			suma += 20;
			break;
		}
		case 'h': {
			suma += 50;
		}
		case 'K': {
			suma += 100;
			break;
		}
		case 'D': {
			suma += 200;
			break;
		}
		case 'F': {
			suma += 500;
			break;
		}
		}

		moneta = fgetc(in);
	}
	_fcloseall();
	printf("%d", suma);
}


int main()
{
	automat();
}
