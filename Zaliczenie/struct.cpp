#include <stdio.h>
# include <string.h>

struct Dane {
	int liczba;
	char napis[20];
};

int main()
{

	Dane d1;
	d1.liczba = 20;
	strcpy(d1.napis, "sfsf");

	Dane* wsk;
	wsk = new Dane;
	wsk->liczba = 20;
	strcpy(wsk->napis, "fddf");

	return 0;
}
