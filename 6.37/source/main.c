#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int maxiumu(int LIST[],int n);

int main(void)
{
	int a[10];
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		a[i] = rand();
		printf("%d ",a[i]);
	}
	printf("\n³Ì¤j­È¬°%d\n", maxiumu(a, 9));
	system("pause");
	return 0;
}

int maxiumu(int LIST[],int n)
{
	if (n == 0)
	{
		return LIST[n];
	}
	else
	{
		if (LIST[n] > maxiumu(LIST, n - 1))
		{
			return LIST[n];
		}
		else
		{
			return maxiumu(LIST, n - 1);
		}
	}
} 