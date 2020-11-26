#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
	int face1, face2;
	int roll;
	int n[7][7] = { 0 };
	
	srand(time(0));
	for (roll = 0; roll < 36000; roll++)
	{
		face1 = 1 + rand() % 6;
		face2 = 1 + rand() % 6;

		n[face1][face2]++;
	}
	printf("%s%17s\n", "點數", "次數");
	
	printf("%4d%17d\n",2, n[1][1]);
	printf("%4d%17d\n",3, n[1][2] + n[2][1]);
	printf("%4d%17d\n",4, n[1][3] + n[3][1] + n[2][2]);
	printf("%4d%17d\n",5, n[3][2] + n[2][3] + n[1][4] + n[4][1]);
	printf("%4d%17d\n",6, n[1][5] + n[5][1] + n[2][4] + n[4][2] + n[3][3]);
	printf("%4d%17d\n",7, n[1][6] + n[6][1] + n[2][5] + n[5][2] + n[3][4] + n[4][3]);
	printf("%4d%17d\n",8, n[2][6] + n[6][2] + n[3][5] + n[5][3] + n[4][4]);
	printf("%4d%17d\n",9, n[3][6] + n[6][3] + n[4][5] + n[5][4]);
	printf("%4d%17d\n",10, n[4][6] + n[6][4] + n[5][5]);
	printf("%4d%17d\n",11, n[5][6] + n[6][5]);
	printf("%4d%17d\n",12, n[6][6]);
}