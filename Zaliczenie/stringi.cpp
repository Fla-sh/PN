#include <stdio.h>
#include <string.h>

int main()
{
	
	char a[20] = "SDfsdf";
	a = "sdf"; // nie
	strcpy_s(a, "dfsfd"); //tak
	// strcpy nie dziala bo Windows (y)
	
	char napis1[100] = "napis1";
	char napis2[100] = "napis2";

	printf("%s %s \n", napis1, napis2);
	
	char napis_z_konsoli[20];
	scanf_s("%s", napis_z_konsoli, 20);
	printf("%s\n", napis_z_konsoli);
	
	// dolacza napis2 do napis1
	strcat_s(napis1, napis2);
	printf("%s", napis1);
	
	// wskaznik na pierwsze wystapienie
	char* miejsce = strchr(napis1, 'a');
	printf("%d", miejsce);

	if (strcmp(napis1, napis2) == 0) {
		printf("Takie same");
	}

	return 0;

}
