// ConsoleApplication13.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>


double wartosc_podatku(int kwota, double procent) {
	return kwota * procent;
}

double C1(int kwota) {
	if(kwota < 64000) return wartosc_podatku(kwota, 0);
	else return wartosc_podatku(kwota, 0.1);
}

double C2(int kwota) {
	if(kwota < 64000) return 250;
	else return 250 + wartosc_podatku(kwota - 64000, 0.15);
}

double C3(int kwota) {
	return wartosc_podatku(kwota, 0.17);
}

void podatek() {
	char pokrewienstwo[32];
	int kwota;
	double podatek;

	scanf_s("%s", pokrewienstwo, 32);
	scanf_s("%d", &kwota);
	
	if (strcmp("dziadkowie", pokrewienstwo)) podatek = C1(kwota);
	else if (strcmp(pokrewienstwo, "rodzice")) podatek = C1(kwota);
	else if (strcmp(pokrewienstwo, "dzieci")) podatek = C1(kwota);
	else if (strcmp(pokrewienstwo, "rodzenstwo")) podatek = C2(kwota);
	else if (strcmp(pokrewienstwo, "rodzenstwo rodzicow")) podatek = C2(kwota);
	else podatek = C3(kwota);
	
	printf("%lf", podatek);
}



int main()
{
	podatek();
}
