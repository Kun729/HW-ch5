#include<stdio.h>
#include<stdlib.h>

int cubevalue(int n);

int main(void)
{
	int number = 5;
	printf("The original value of number is %d", number);

	number = cubevalue(number);
	printf("\nThe new value of number is %d\n", number);

	system("pause");
	return 0;
}

int cubevalue(int n)
{
	return n * n * n;
}
