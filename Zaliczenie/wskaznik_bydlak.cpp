#include <stdio.h>

int fun(int a) {
	return a;
}

int more_fun(int a) {
	return a * a;
}

// funkcja, ktora zwraca wskaznik
int* fun_wsk(int a) {
	int* b;
	return b;
}

// funkcja, ktora zwraca wskaznik i przyjmuje wskaznik
int* fun_wsk2(int* a) {
	return a;
}
// funkcja, ktora zwraca wskaznik i przyjmuje wskaznik oraz wskaznik na funkcje
int* fun_wsk2(int* a, int (*fun)(int)) {
	int* a;
	*a = fun(2);
	return a;
}

// funkcja, ktora zwraca wskaznik i przyjmuje wskaznik oraz wskaznik na funkcje, ktora zwraca wskaznik
int* fun_wsk3(int* a, int* (*fun)(int)) {
	return fun(2);
}

// funkcja, ktora zwraca wskaznik i przyjmuje wskaznik oraz wskaznik na funkcje, ktora zwraca wskaznik i przyjmuje wskaznik
int* fun_wsk3(int* a, int* (*fun)(int*)) {
	return fun(a);
}

// funkcja ktora, zwraca wskaznik na funkcje, ktora przyjmie int i przyjmujac wskaznik oraz wskaznik na funkcje, ktroa zwraca wskaznik na funkcje i przyjmuje wskaznik 
int (* real_fun (int* a, int* (*fun)(int*)))(int) {
	return more_fun;
}

// funkcja zwracajaca wskaznik na funkcje zwracajaca wskaznik, ktora przyjmuje wskaznik i wskaznik na funkcje zwracajaca wskaznik i przyjmujaca wskaznik 
int* (*real_fun2(int* a, int* (*fun)(int*)))(int) {
	return fun_wsk;
}

// funkcja zwracajaca wskaznik na funkcje zwracajaca wskaznik, ktora przyjmuje wskaznik i wskaznik na funkcje zwracajaca wskaznik i przyjmujaca wskaznik oraz wskaznik na funkcje przyjmujaca int
int* (*real_fun3(int* a, int* (*fun)(int*)))(int*, int (*)(int)) {
	return fun_wsk2;
}

int main()
{
	int (*wsk)(int);
	wsk = fun;
	printf("%d\n", wsk(3));

	int (*more_wsk[2])(int) = {
		fun,
		more_fun
	};

	printf("%d", more_wsk[1](10));

	return 0;
}
