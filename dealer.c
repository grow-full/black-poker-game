#include<stdio.h>
#include "헤더.h"

extern int randomNum[14];

int dealer()
{
	int k, i, j;
	printf("1~14 숫자 랜덤 배열 만들기!\n");
	srand((int)time(NULL));
	for (i = 0; i < 14; )
	{
		randomNum[i] = rand() % 14 + 1;
		for (j = 0, k = 0; j < i; j++)  //배열 내 중복 제외
		{
			if (randomNum[i] == randomNum[j])
			{
				k = 1; break;
			}
		}
		if (k == 0)
			i = i + 1;
	}
	//printf("딜러가 가지고 있는 숫자  \n");
	for (i = 0; i < 14; i++)
		//printf("%d, ", randomNum[i]);
	//printf("\n");
	return 0;
}