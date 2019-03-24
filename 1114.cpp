#include<stdio.h>
void output(int A[]);
int main()
{
	int A[4], B[3];
	int i;
	for(i = 0 ; i < 4; i++)
	{
		scanf("%d", &A[i]);
	}
	
	B[0] = A[0];
	B[1] = A[1];
	B[2] = A[2];
	output(B);
	
	B[2] = A[3];
	output(B);
	
	B[1] = A[2];
	output(B);
	
	B[0] = A[1];
	output(B);
	
	return 0;	
} 
void output(int A[])
{
	printf("%d %d %d\n", A[0], A[1], A[2]);
	printf("%d %d %d\n", A[0], A[2], A[1]);
	printf("%d %d %d\n", A[1], A[0], A[2]);
	printf("%d %d %d\n", A[1], A[2], A[0]);
	printf("%d %d %d\n", A[2], A[0], A[1]);
	printf("%d %d %d\n", A[2], A[1], A[0]);
}
