#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a;
	int *aptr;

	a = 7;
	aptr = &a;

	printf("The address of a is %p\nThe value of aPtr is %p", &a, aptr);
	printf("\n\nThe value of a is %d\nThe value of *aPtr is %d", a, *aptr);
	printf("\n\nShowing that * and & are complements of each other\n&*aPtr = %p\n*&aPtr = %p\n", &*aptr,*&aptr);

	system("pause");
	return 0;
}