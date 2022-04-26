#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996) 

int randomNum[14];

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
	printf("딜러가 가지고 있는 숫자  \n");
	for (i = 0; i < 14; i++)
		printf("%d, ", randomNum[i]);
	printf("\n");
	return 0;
}

int main () {
	int size;
	scanf(" %d", &size);
	int *numPtr = malloc(sizeof(int)*size);//int크기 입력만큼 동적 메모리 할당
	dealer();
	for (int i = 0; i < size; i++) //입력받은 크기만큼 반복
	{
		numPtr[i] = randomNum[i]; //인덱스로 접근하여 값 할당
	}
	for (int i = 0; i < size; i++) //입력받은 크기만큼 반복
	{
		printf("%d\n", numPtr[i]); //인덱스로 접근하여 값 출력
	}
	free(numPtr); //동적으로 할당한 메모리 해제
	return 0;
}