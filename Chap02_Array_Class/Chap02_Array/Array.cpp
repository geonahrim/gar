#include <stdio.h>
#define MAX_SIZE 10

// �迭�� �Ķ���ͷ� �޴� �Լ�
void sub(int x, int arr[])
{
	x = 10;
	arr[0] = 10;
}

int main()
{
	int var = 0;
	int list[MAX_SIZE];
	sub(var, list);
	// var?, list[0]?
	printf("var = %d, list[0] = %d\n", var, list[0]);

	return 0;
}