char vchar()
{
	char cc;
	while ((cc = getchar()) <= ' ');
	return cc;
}

double sine(double x) {
	return sin(x);
}

double tang(double x) {
	return tan(x);
}

double sqrtx(double x) {
	return sqrt(x);
}

double lnn(double x) {
	return log(x);
}

void zad3() {
	char opcja;
	double wartosc;
	opcja = vchar();

	double(*F[])(double x) = {
		sine,
		tang,
		sqrtx,
		lnn
	};

	int dzialaj = 1;

	while (dzialaj == 1) {
		switch (opcja) {
		case 'N':{
			scanf_s("%lf", &wartosc);
			break;
		}
		case 'n': {
			scanf_s("%lf", &wartosc);
			break;
		}
		case 'F': {
			int opcja2;
			scanf_s("%d", &opcja2);
			if (opcja2 > 1 && wartosc < 0) {
				printf("Blad");
			}
			else {
				printf("%lf", F[opcja2](wartosc));
			}
			break;
		}
		case 'f': {
			break;
		}
		case 'Q': {
			dzialaj = 0;
			break;
		}
		case 'q': {
			dzialaj = 0;
			break;
		}
		opcja = vchar();
	}
}
