/* Bubble Sort Implementation
 * Copyright 2017, Ankit R Gadiya
 * MIT License
 */
#include <stdio.h>

#define NUM 10

int sample[NUM] = {3, 7, 9, 5, 1, 0, 6, 2, 4, 8};

void bubbleSort(int array[], int range)
{
	int change, i;
	do {
		change = 0;
		for (i = 0; i < range - 1; i++) {
			if (array[i] > array[i + 1]) {
				int temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				change++;
			}
		}
	} while (change != 0);
	return;
}

int main (void)
{
	for (int i = 0; i < NUM; i++)
		printf("%d ", sample[i]);

	printf("\n");

	bubbleSort(sample, NUM);

	for (int i = 0; i < NUM; i++)
		printf("%d ", sample[i]);

	printf("\n");
	return 0;
}
