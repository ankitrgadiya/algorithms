/* Selection Sort Implementation
 * Copyright 2017, Ankit R Gadiya
 * MIT License
 */
#include <stdio.h>

#define NUM 10

int sample[NUM] = {3, 7, 9, 5, 1, 0, 6, 2, 4, 8};

void selectionSort(int array[], int range)
{
	for (int i = 0; i < range; i++) {
		for (int j = i; j < range; j++) {
			if (array[j] < array[i]) {
				int temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	return;
}

int main (int argc, char *argv[])
{
	for (int i = 0; i < NUM; i++)
		printf("%d ", sample[i]);

	printf("\n");

	selectionSort(sample, NUM);

	for (int i = 0; i < NUM; i++)
		printf("%d ", sample[i]);

	printf("\n");
	return 0;
}
