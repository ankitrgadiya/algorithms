/* Linear Search Implementation
 * Copyright 2017, Ankit R Gadiya
 * MIT License
 */
#include <stdio.h>

#define NUM 10

int sample[NUM] = {3, 7, 9, 5, 1, 0, 6, 2, 4, 8};

int linearSearch (int array[], int range, int num)
{
	for (int i = 0; i < range; i++) {
		if (array[i] == num)
			return i + 1;
	}
	return -1;
}

int main (void)
{
	int position;

	for (int i = 0; i < NUM; i++)
		printf("%d ", sample[i]);

	printf("\n");

	if ((position = linearSearch(sample, NUM, 4)) == -1)
		printf("%d Not found!\n", 4);
	else
		printf("%d Position: %d\n", 4, position);

	if ((position = linearSearch(sample, NUM, 11)) == -1)
		printf("%d Not found!\n", 11);
	else
		printf("%d Position: %d\n", 11, position);

	return 0;
}
