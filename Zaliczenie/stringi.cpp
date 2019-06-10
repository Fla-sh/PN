#include <stdio.h>
#include <string.h>

int main()
{
	
	char a[20] = "SDfsdf";
	a = "sdf"; // nie
	strcpy(a, "dfsfd"); //tak
	
	char napis1[100] = "napis1";
	char napis2[100] = "napis2";

	printf("%s %s \n", napis1, napis2);

	char napis_z_konsoli[20];
	scanf_s("%s", napis_z_konsoli, 20);
	printf("%s\n", napis_z_konsoli);

	strcat_s(napis1, napis2);
	printf("%s", napis1);

	char* miejsce = strchr(napis1, 'a');
	printf("%d", miejsce);

	if (strcmp(napis1, napis2) == 0) {
		printf("Takie same");
	}

	return 0;

}
