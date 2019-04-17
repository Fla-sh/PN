// ConsoleApplication13.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>

void wieksze() {
	int liczba;
	char nazwa_in[20];
	char nazwa_out[20];
	FILE * in;
	FILE * out;

	scanf_s("%s", nazwa_in, 20);
	scanf_s("%s", nazwa_out, 20);

	fopen_s(&in, nazwa_in, "rt");
	fopen_s(&out, nazwa_out, "wt+");

	if (in != NULL && out != NULL) {
		 fscanf_s(in, "%d", &liczba);
		while (feof(in) == NULL) {
			if(liczba > 137) fprintf(out, "%d ", liczba);
			fscanf_s(in, "%d", &liczba);
		}
	}
	_fcloseall();
}

int main()
{
	wieksze();
}
