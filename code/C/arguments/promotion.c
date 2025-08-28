#include<stdio.h>

void congrats(int years, char name[])
{
	printf("Congrats for the %d years, %s!\n", years, name);
}

int main()
{
	int years = 20;
	char name[] = "nicolas";
	congrats(years, name);

	return 0;
}
