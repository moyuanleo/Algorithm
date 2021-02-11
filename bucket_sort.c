#include<stdio.h>
int main(void)
{
	int book[1001], i, j, t, n;
	for (i = 0; i <= 1000; i++)
		book[i] = 0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		scanf_s("%d", &t);
		book[t]++;
	}
	
	for (i = 1000; i >= 0; i--)
		for (j = 1; j <= book[i]; j++)
			printf("%d ", i);
	
	return 0;
}