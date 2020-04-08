#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SIZE 10

int lsn14() {
	//void* malloc(<memory size>);	//memory allocation
	//int variable;
	//int* area = (int*)malloc(sizeof(int) * SIZE);
	int* area = (int*)calloc(SIZE, sizeof(int)); //clear allocate
	//almost the same
	int array[SIZE];
	int i;
	for (i = 0; i < SIZE; i++) array[i] = i * 10;
	for (i = 0; i < SIZE; i++) printf("%d ",array[i]);
	puts("");
	for (i = 0; i < SIZE; i++) *(area+i)=i*10;
	for (i = 0; i < SIZE; i++) printf("%d ", *(area+i));
	//free(area);
	int newSize = SIZE + 10;
	puts("");
	area = (int*)realloc(area, sizeof(int)*newSize); //re-allocate
	for (i = 0; i < newSize; i++) *(area + i) = i * 10;
	for (i = 0; i < newSize; i++) printf("%d ", *(area + i));
	free(area);
	return 0;
}