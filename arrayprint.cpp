// file: arrayprint.c
#include<stdio.h>

int main()
{
	int a[3][4] = {
		{ 1, 2, 7, 3 },		/* initializers for row indexed by 0*/
		{ 5, 6, 3 ,4 },		/* initializers for row indexed by 1*/
		{ 9, 7, 1, 8 }		/* initializers for row indexed by 2*/
	};
	
	printf("%6s %6s %3s	 ", "����", "�ּ�", "��");
	printf("%6s %6s %3s	 ", "����", "�ּ�", "��");
	printf("%6s %6s %3s	 ", "����", "�ּ�", "��");
	printf("%6s %6s %3s\n", "����", "�ּ�", "��");
	printf("---------------------------------------");
	printf("---------------------------------------\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("a[%d][%d] %d %d	 ", i, j, &a[i][j], a[i][j]);
		puts("");
	}

	return 0;
}
/* ���
  ����   �ּ�  ��          ����   �ּ�  ��         ����   �ּ�  ��         ����   �ּ�  ��
------------------------------------------------------------------------------
a[0][0] 5699540 1        a[0][1] 5699544 2       a[0][2] 5699548 7       a[0][3] 5699552 3
a[1][0] 5699556 5        a[1][1] 5699560 6       a[1][2] 5699564 3       a[1][3] 5699568 4
a[2][0] 5699572 9        a[2][1] 5699576 7       a[2][2] 5699580 1       a[2][3] 5699584 8
*/