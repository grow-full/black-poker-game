#include<stdio.h>
#include "���.h"

extern int randomNum[14];

int dealer()
{
	int k, i, j;
	printf("1~14 ���� ���� �迭 �����!\n");
	srand((int)time(NULL));
	for (i = 0; i < 14; )
	{
		randomNum[i] = rand() % 14 + 1;
		for (j = 0, k = 0; j < i; j++)  //�迭 �� �ߺ� ����
		{
			if (randomNum[i] == randomNum[j])
			{
				k = 1; break;
			}
		}
		if (k == 0)
			i = i + 1;
	}
	//printf("������ ������ �ִ� ����  \n");
	for (i = 0; i < 14; i++)
		//printf("%d, ", randomNum[i]);
	//printf("\n");
	return 0;
}