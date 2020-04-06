#include "lsn9.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_LENGTH 10
#define NUMBERS_AMOUNT 1000000

void printArray(int* array, int length)
{
	int i;
	for (i = 0; i < length; i++)
		printf("%d ", array[i]);
}

float average(int* array, int length)
{
	float result = 0;
	int i = 0;
	for (int i = 0; i < length; i++)
		result += *(array + i);
	return result / length;
}

int lsn9() {
	int arr[ARRAY_LENGTH];
	int i=0;
	while (i<ARRAY_LENGTH)
	{
		printf("Enter value no.%d:", i);
		scanf_s("%d", arr + i);
		i++;
	}
	printf("Our array is: ");
	printArray(arr, ARRAY_LENGTH);

	printf("\nAnd the average is: ");
	printf("%f \n", average(arr, ARRAY_LENGTH));
	return 0;
}