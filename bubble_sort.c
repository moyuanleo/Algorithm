#include<stdio.h>
int main(viod)
{
	int a[1000], i, j, t, n;
	scanf_s("%d", &n);
	for (i = 1; i<=n; i++)
		scanf_s("%d", &a[i]);
	for (i = 1; i <= n - 1; i++) {
		for (j = 1; j <= n - i; j++) {
			if (a[j] > a[j + 1]) {
				t = a[j]; a[j] = a[j + 1]; a[j + 1] = t;
			}
		}
	}
	for (i = 1; i <= n; i++)
		printf("%d ", a[i]);

	return 0;

}