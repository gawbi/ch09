// file: threedary.c
#include <stdio.h>

#define ROWSIZE 4
#define COLSIZE 2

int main(void)
{
	//3차원 배열 초기화, 첫 번째 크기는 지정하지 않을 수 있음
	int score[][ROWSIZE][COLSIZE] = {
	   {{ 95, 85 },
		{ 85 , 83 },
		{ 92 , 75 },
		{ 90 , 88 }},
	   {{ 88 , 77 },
		{ 72 , 95 },
		{ 88 , 92 },
		{ 93 , 83 }}
	};

	for (int i = 0; i < 2; i++) 
	{
		if (i == 0) printf("[강좌 1]");
		else printf("[강좌 2]");
		printf("%11s%7s\n", "중간", "기말");

		for (int j = 0; j < ROWSIZE; j++)
		{
			printf("%10s%2d", "학생", j + 1);
			for (int k = 0; k < COLSIZE; k++)
				printf("%6d ", score[i][j][k]);
			printf("\n");
		}
		printf("\n");
	}

	return 0;
}
/* 결과
[강좌 1]       중간   기말
	  학생 1    95     85
	  학생 2    85     83
	  학생 3    92     75
	  학생 4    90     88

[강좌 2]       중간   기말
	  학생 1    88     77
	  학생 2    72     95
	  학생 3    88     92
	  학생 4    93     83
*/