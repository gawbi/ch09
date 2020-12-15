// file: inittwodarray.c
#include<stdio.h>

#define ROWSIZE 2
#define COLSIZE 3

int main(void)
{
	//2차원 배열 초기화
	int td[][3] = { { 1 },{ 1, 2, 3 } };
	
	printf("반복문 for를 이용하여 출력\n");
	for (int i = 0; i < ROWSIZE; i++)
	{
		for (int j = 0; j < COLSIZE; j++)
			printf("%d ", td[i][j]);
		printf("\n");
	}

	return 0;
}
/* 결과
반복문 for를 이용하여 출력
1 0 0
1 2 3
*/