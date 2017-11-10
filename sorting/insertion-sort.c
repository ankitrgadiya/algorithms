/* Insertion Sort Implementation
 * Copyright 2017, Ankit R Gadiya
 * MIT License
 */
#include <stdio.h>

#define NUM 10

int sample[NUM] = {3, 7, 9, 5, 1, 0, 6, 2, 4, 8};

void insertionSort (int array[], int range)
{
	int i, j, num;
	for (i = 1; i < range; i++) {
		num = array[i];
		for (j = i - 1; j >= 0; j--) {
			if (num < array[j]) {
				array[j + 1] = array[j];
				array[j] = num;
			} else {
				break;
			}
		}
	}
	return;
}

int main (void)
{
	for (int i = 0; i < NUM; i++)
		printf("%d ", sample[i]);

	printf("\n");

	insertionSort(sample, NUM);

	for (int i = 0; i < NUM; i++)
		printf("%d ", sample[i]);

	printf("\n");
	return 0;
}
