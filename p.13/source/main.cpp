#include<stdio.h>
#include<stdlib.h>

void cubevalue(int &nptr);

int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);

	cubevalue(number);
	printf("\nThe new value of number is %d\n", number);

	system("pause");
	return 0;
}

void cubevalue(int &nptr)
{
	nptr = nptr* nptr* nptr;
}
