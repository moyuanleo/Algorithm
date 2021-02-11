#include <stdio.h>
int arr[1001],n;

// Quick Sort
void quick_sort(int* array, int start, int end) {
	if (start < end) {
		int q = partition(array, start, end);
		quick_sort(array, start, q - 1);
		quick_sort(array, q + 1, end);
	}
}
// Partition by pivot 按基准值进行分区
int partition(int* array, int start, int end) {
	int pivot = array[end];
	int i = start - 1;
	int temp = 0;
	for (int j = start; j < end; j++) {
		if (array[j] <= pivot) {
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
		}
	}
	temp = array[i + 1];
	array[i + 1] = array[end];
	array[end] = temp;

	return i + 1;
}

int main(void) {
	//int arr[4] = { 10, 5, 2, 3 };
	int i;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		scanf_s("%d", &arr[i]);
	quick_sort(arr, arr[0], arr[n-1]);//有bug
	// Print result
	for (i = 0; i <= n; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}