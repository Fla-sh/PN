void zad2() {
	FILE * file;
	fopen_s(&file, "trawy.txt", "r+");
	char typ;
	int ilosc['L' - 'A'] = { 0 };
	int ilosc2['L' - 'A'] = { 0 };

	if (file != NULL) 
	{
		typ = fgetc(file);
		while (feof(file) == 0) 
		{
			//printf("%c", typ);
			if (typ <= 'L', typ >= 'A')
			{
				ilosc[typ - 'A']++;
				ilosc2[typ - 'A']++;
			}
			typ = fgetc(file);
		}
		_fcloseall();
	}
	else printf("ss");

	/*
	for (int i = 0; i < 'L' - 'A'; i++) {
		printf("%d ", ilosc[i]);
	}
	*/

	for (int i = 0; i < 'L' - 'A'; i++) {
		printf("%c | ", 'A' + i);
		while (ilosc2[i] > 0) {
			printf("%c", '*');
			ilosc2[i]--;
		}
		printf("\n\n");
	}

	int maks = 0;
	for (int i = 0; i < 'L' - 'A'; i++) {
		if (ilosc[i] > maks) maks = ilosc[i];
	}

	for (int i = 0; i < 'L' - 'A'; i++) {
		ilosc[i] = maks - ilosc[i];
	}

	for (int i = 0; i < maks; i++) {
		for (int j = 0; j < 'L' - 'A'; j++) {
			if (ilosc[j] > 0) {
				printf("   ");
				ilosc[j]--;
			}
			else printf("** ");
		}
		printf("\n");
	}

	for (int j = 0; j < 'L' - 'A'; j++) {
		printf("---");
	}
	printf("\n");

	for (int j = 0; j < 'L' - 'A'; j++) {
		printf("%c  ", 'A' + j);
	}
}
