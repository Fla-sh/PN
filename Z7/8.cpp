double maxElem2(double * data, int size) {
	int maxE = data[0];
	for (int i = 1; i < size; i++) {
		if (data[i] > maxE) maxE = data[i];
	}
	return (double)maxE;
}

double minElem2(double * data, int size) {
	int minE = data[0];
	for (int i = 1; i < size; i++) {
		if (minE > data[i]) minE = data[i];
	}
	return (double)minE;
}

double avg2(double * data, int size) {
	double avg = 0;
	for (int i = 0; i < size; i++) avg += data[i];
	return avg / size;
}

struct Seria {
	int numer_serii;
	double pomiary[4];
	int kod;
};



void zad2() {
	double(*F[])(double *, int) = {
		avg2,
		maxElem2,
		minElem2
	};
	int size = 3;
	Seria * dane = new Seria[size];
	FILE * file;
	FILE * file2;
	fopen_s(&file2, "wynik.txt", "w");
	fopen_s(&file, "dane.txt", "r");
		for (int i = 0; i < size; i++) {
			Seria row;
			fscanf_s(file, "%d", &row.numer_serii);
			for (int j = 0; j < 4; j++) {
				fscanf_s(file, "%lf", &row.pomiary[j]);
			}
			fscanf_s(file, "%d", &row.kod);
			dane[i] = row;
		}

		for (int i = 0; i < size; i++) {
			Seria row = dane[i];
			printf("%d\n", row.numer_serii);
			for (int j = 0; j < 4; j++) {
				printf("%lf\n", row.pomiary[j]);
			}
			printf("%d\n", row.kod);
		}
		fclose(file);

		for (int i = 0; i < size; i++) {
			fprintf(file2, "%d\n", dane[i].numer_serii);
			fprintf(file2, "%lf\n", F[dane[i].kod](dane[i].pomiary, 4));
			fprintf(file2, "%d\n\n", dane[i].kod);
		}
}
