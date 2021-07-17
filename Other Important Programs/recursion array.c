#include <stdio.h>

int findSum(int A[], int N)
{
    if (N < 0){
    	return 0;
	}
    else{
    	return (findSum(A, N - 1) + A[N - 1]);
	}
}

void main()
{
    int A[] = { 1, 2, 3, 4, 5 };
    int N = sizeof(A) / sizeof(A[0]);
    printf("%d", findSum(A, N));
    getch();
}
