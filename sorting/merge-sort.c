/* Merge Sort Implementation
 * Copyright 2017, Ankit R Gadiya
 * MIT License
 */
#include <stdio.h>

#define NUM 10

int sample[NUM] = {3, 7, 9, 5, 1, 0, 6, 2, 4, 8};

void mergeSort (int array[], int range)
{
	if (range == 1) {
		return;
	} else {
		int new[range];
		int l1, l2;
		int *list1, *list2;

		if (range % 2 == 0) {
			mergeSort(array, range / 2);
			mergeSort(array + range / 2, range / 2);
			list1 = array;
			list2 = array + range / 2;
			l1 = range / 2;
			l2 = range / 2;
		} else {
			mergeSort(array, range / 2);
			mergeSort(array + range / 2, range / 2 + 1);
			list1 = array;
			list2 = array + range / 2 ;
			l1 = range / 2;
			l2 = range / 2 + 1;
		}


		for (int i = 0; i < range; i++) {
			if ((*list1 > *list2 && l2 != 0) || l1 == 0) {
				new[i] = *list2++;
				l2--;
			} else {
				new[i] = *list1++;
				l1--;
			}
		}

		for (int j = 0; j < range; j++)
			array[j] = new[j];

		return;
	}
}

int main (void)
{
	for (int i = 0; i < NUM; i++)
		printf("%d ", sample[i]);

	printf("\n");

	mergeSort(sample, NUM);

	for (int i = 0; i < NUM; i++)
		printf("%d ", sample[i]);

	printf("\n");
	return 0;
}
