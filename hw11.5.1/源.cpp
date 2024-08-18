#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define N 10
void Transpose(int a[][N], int at[][N], int m, int n);
void Swap(int* x, int* y);
void InputMatrix(int a[][N], int m, int n);
void PrintMatrix(int at[][N], int m, int n);
int  main(void)
{
	int s[N][N], st[N][N], m, n;
	printf("Please input m&n:");
	scanf("%d&%d", &m, &n);
	InputMatrix(s, m, n);
	Transpose(s, st, m, n);
	printf("The transposed matrix is:\n");
	PrintMatrix(st, m, n);
	return 0;

}
void InputMatrix(int a[][N], int m, int n)
{
	int i, j;
	printf("Please input %d*%d matrix:\n", m, n);
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
}
void Transpose(int a[][N], int at[][N], int m, int n)
{
	int i, j;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			at[j][i] = a[i][j];
		}
	}
}
void PrintMatrix(int at[][N], int m, int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			printf("%d\t", at[i][j]);
		}
		printf("\n");
	}
}
