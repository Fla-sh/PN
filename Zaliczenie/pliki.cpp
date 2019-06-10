#include <stdio.h>

char vchar()
{
	char cc;
	while ((cc = getchar()) <= ' ');
	return cc;
}

void read1() {
	FILE* in;
	FILE* out;

	fopen_s(&in, "nazwa.txt", "r+");
	fopen_s(&out, "nazwa2.txt", "wt+");

	char liczba[100];

	if (in != NULL && out != NULL) {
		fscanf_s(in, "%s", &liczba, 100);
		while (feof(in) == 0) {
			fprintf(out, "%s\n", liczba);
			fscanf_s(in, "%s", &liczba, 100);
		}
	}
}

void read2() {
	FILE* file;
	fopen_s(&file, "nazwa.txt", "r+");

	char typ;

	if (file != NULL)
	{
		typ = fgetc(file);
		while (feof(file) == 0)
		{
			printf("%c", typ);
			typ = fgetc(file);
		}
		fclose(file);
	}

	else printf("ss");
}
