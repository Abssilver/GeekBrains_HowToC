#include "lsn8.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_LENGTH 10
#define NUMBERS_AMOUNT 1000000

int lsn8() {
	srand(time(NULL));
	int frequency[ARRAY_LENGTH] = { 0 };
	int a, i;
	for (i = 0; i < NUMBERS_AMOUNT; i++)
	{
		a = rand() % ARRAY_LENGTH;
		frequency[a]++;
	}
	for (i = 0; i < ARRAY_LENGTH; i++)
	{
		printf("Number of %d generated %6d (%5.2f%%) times\n", i, frequency[i], ((float)frequency[i] / NUMBERS_AMOUNT * 100));
	}
	return 0;
}