#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996) 
#include "���.h"

int randomNum[14];


int main() {
	int flag = 0;
	int i = 0;
	dealer();
reget:
	printf("�и� ���� ������ �����ϼ���. Y : 1, N : 0 \n���� : ");
	scanf(" %d", &flag);
	if (flag) {
		//ī�� �ޱ�
		//���Ƿ� ������  

		int *numPtr = malloc(sizeof(int)*1);//intũ�� �Է¸�ŭ ���� �޸� �Ҵ�
		
		
			numPtr[0] = randomNum[i]; //�ε����� �����Ͽ� �� �Ҵ�
		
		
			printf("%d\n", numPtr[0]); //�ε����� �����Ͽ� �� ���
		
		free(numPtr); //�������� �Ҵ��� �޸� ����
		i++;
				   //���� �����°ǰ�? 
		           //�׷��� �ٽ�

		
		
		goto reget;  //�ƴϸ� ����
	}


	else {
		goto noget;
	}
noget:

	return 0;
}