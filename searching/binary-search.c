/* Binary Search Implementation
 * Copyright 2017, Ankit R Gadiya
 * MIT License
 */
#include <stdio.h>

#define NUM 10

int sample[NUM] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

int binarySearch (int array[], int range, int num)
{
	int left = 0, right = range;
	while (right > left) {
		if (array[(right + left) / 2] == num)
			return (right + left) / 2;
		else if (array[(right + left) / 2] > num)
			right = (right + left) / 2;
		else if (array[(right + left) / 2] < num)
			left = (right + left) / 2 + 1;
	}
	return -1;
}

int main (void)
{
	int position;

	for (int i = 0; i < NUM; i++)
		printf("%d ", sample[i]);

	printf("\n");

	if ((position = binarySearch(sample, NUM, 8)) == -1)
		printf("%d Not found!\n", 8);
	else
		printf("%d Position: %d\n", 8, position);

	if ((position = binarySearch(sample, NUM, 11)) == -1)
		printf("%d Not found!\n", 11);
	else
		printf("%d Position: %d\n", 11, position);

	return 0;
}
