bool czyNajstarsze(unsigned int liczba) {
	unsigned int maska = 0b1111 << 28;
	unsigned int bity = liczba & maska;
	unsigned int oczekiwaneBity = 0b1011 << 28;

	if (bity == oczekiwaneBity) return 1;
	else return 0;
}

bool czyNajmlodsze(unsigned int liczba) {
	unsigned int maska = 0b1111;
	unsigned int bity = liczba & maska;
	unsigned int oczekiwaneBity = 0b0010;
	
	if (bity == oczekiwaneBity) return 1;
	else return 0;
}

void zad1() {
	int W;
	int K;

	scanf_s("%d", &W);
	scanf_s("%d", &K);

	/*
	printf("%d/n", W);
	printf("%d", K);
	*/

	unsigned int ** tab = new unsigned int *[W];
	unsigned int * doWypisania = new unsigned int[W];

	for (int i = 0; i < W; i++) {
		doWypisania[i] = 0;
	}

	for (int i = 0; i < K; i++) {
		tab[i] = new unsigned int[K];
	}

	for (int i = 0; i < W; i++) {
		for (int j = 0; j < K; j++) {
			scanf_s("%u", &tab[i][j]);
		}
	}

	for (int i = 0; i < W; i++) {
		for (int j = 0; j < K; j++) {
			printf("%u ", tab[i][j]);
		}
		printf("\n");
	}

	for (int i = 0; i < W; i++) {
		if (czyNajstarsze(  tab[0][i]  )) {
			doWypisania[i] = 1;
		}
		else if (czyNajmlodsze(  tab[0][i]  )) {
			doWypisania[i] = 1;
		}
	}

	for (int i = 0; i < W; i++) {
		for (int j = 0; j < K; j++) {
			if(doWypisania[j]) printf("%u ", tab[i][j]);
		}
		printf("\n");
	}
}
