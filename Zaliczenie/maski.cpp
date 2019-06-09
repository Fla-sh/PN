int main()
{
	int liczba = 0b0001;
	printf("%d\n", liczba);

	liczba = liczba << 2;
	printf("%d\n", liczba);

	int najwiekszyInt = 1 << 30;
	printf("%d\n", najwiekszyInt);

	printf("%d\n", 0b1111 & 0b1100);
	printf("%d\n", 0b1100 ^ 0b0011);

	return 0;
}
