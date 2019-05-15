void read(int * data, int size) {
	for (int i = 0; i < size; i++) {
		scanf_s("%d", &data[i]);
	}
}

double maxElem(int * data, int size) {
	int maxE = data[0];
	for (int i = 1; i < size; i++) {
		if (data[i] > maxE) maxE = data[i];
	}
	return (double)maxE;
}

double minElem(int * data, int size) {
	int minE = data[0];
	for (int i = 1; i < size; i++) {
		if (minE > data[i]) minE = data[i];
	}
	return (double)minE;
}

double avg(int * data, int size) {
	double avg = 0;
	for (int i = 0; i < size; i++) avg += data[i];
	return avg / size;
}

void zad1() {
	int n;
	scanf_s("%d", &n);
	//printf("%d", n);

	int * data = new int[n];
	read(data, n);
	double(*F[])(int *, int) = {
		maxElem,
		minElem,
		avg
	};

		/*for (int i = 0; i < n; i++) {
			printf("%d\n", data[i]);
		}*/
}
