#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996) 
#include "헤더.h"

int randomNum[14];


int main() {
	int flag = 0;
	int i = 0;
	dealer();
reget:
	printf("패를 받을 것인지 선택하세요. Y : 1, N : 0 \n선택 : ");
	scanf(" %d", &flag);
	if (flag) {
		//카드 받기
		//임의로 가져와  

		int *numPtr = malloc(sizeof(int)*1);//int크기 입력만큼 동적 메모리 할당
		
		
			numPtr[0] = randomNum[i]; //인덱스로 접근하여 값 할당
		
		
			printf("%d\n", numPtr[0]); //인덱스로 접근하여 값 출력
		
		free(numPtr); //동적으로 할당한 메모리 해제
		i++;
				   //전에 가져온건가? 
		           //그러면 다시

		
		
		goto reget;  //아니면 진행
	}


	else {
		goto noget;
	}
noget:

	return 0;
}