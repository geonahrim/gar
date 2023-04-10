#include <stdio.h>
#include <cstdlib>
#include <ctime>

int sum_of_N(int n)
{
	int sum = 0;
	for (int i = 0; i < n + 1; i++) {
		sum = sum + i;
	}
	return sum;
}
int sum_of_N2(int n)
{
	return (n * (n + 1)) / 2;
}

int main()
{
	clock_t start, finish;
	double duration;

	start = clock();
	//int a = 10 + 20;
	//int sum1 = sum_of_N(100000000);
	int sum2 = sum_of_N2(1000000);
	//
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f �ʰ� �ɷȽ��ϴ�.\n", duration);
	return 0;
}