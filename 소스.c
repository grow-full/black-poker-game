#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996) 

int randomNum[14];

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
	printf("������ ������ �ִ� ����  \n");
	for (i = 0; i < 14; i++)
		printf("%d, ", randomNum[i]);
	printf("\n");
	return 0;
}

int main () {
	int size;
	scanf(" %d", &size);
	int *numPtr = malloc(sizeof(int)*size);//intũ�� �Է¸�ŭ ���� �޸� �Ҵ�
	dealer();
	for (int i = 0; i < size; i++) //�Է¹��� ũ�⸸ŭ �ݺ�
	{
		numPtr[i] = randomNum[i]; //�ε����� �����Ͽ� �� �Ҵ�
	}
	for (int i = 0; i < size; i++) //�Է¹��� ũ�⸸ŭ �ݺ�
	{
		printf("%d\n", numPtr[i]); //�ε����� �����Ͽ� �� ���
	}
	free(numPtr); //�������� �Ҵ��� �޸� ����
	return 0;
}