#include<stdio.h>
#include<stdlib.h>
#include <string.h>

void stringreverse(char *n, int lo, int hi);

int main(void)
{
	char a[100];
	printf("¿é¤J¦r¦ê:");
	scanf_s("%s", &a ,sizeof(a));
	int len = strlen(a);
	printf("¤Ï¦r¦ê:");
	stringreverse(a, 0, len - 1);
}
void stringreverse(char *n, int lo, int hi)
{
	char *m=n;
	char temp;
	
	if (hi == lo+1)
	{
		temp = m[lo];
		m[lo] = m[hi];
		m[hi] = temp;
		printf("%s", m);
	}
	else if (hi == lo)
	{
		printf("%s", m);									
	}
	else
	{
		temp = m[lo];
		m[lo] = m[hi];
		m[hi] = temp;
		stringreverse(n, ++lo, --hi);
	}
	printf("\n");	
}