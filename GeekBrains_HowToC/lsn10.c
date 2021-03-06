#include "lsn10.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_LENGTH 10
#define NUMBERS_AMOUNT 1000000

void advancedArraysMain() {
	printf("Multi-dimensional Arrays!");
	const int rows = 10, cols = 10;
	int table[10][10];
	int r, c;
	for (r = 0; r < rows; r++)
		for (c = 0; c < cols; c++)
			table[r][c] = (r + 1) * (c + 1);
	for (r = 0; r < rows; r++) {
		for (c = 0; c < cols; c++)
			printf("%3d ", table[r][c]);
		printf("\n");
	}
	char* stringArray[3] = { "Hello", "C", "World!" };
	for (c = 0; c < 3; c++)
		printf("%s ", stringArray[c]);
}