#pragma once
int swap_variables(int* x, int* y)
{
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;
}
/*
int a = 50;
	printf("value of a is %d \n", a);
	printf("address of a is %p \n" , &a);
	int * pointer;
	pointer = &a;
	printf("value of pointer is %p \n", pointer);
	printf("address of pointer is %p \n", &pointer);

	printf("variable 'pointer' points at: %d\n", *pointer);
	*pointer = 70;
	printf("value of a is %d \n", a);
	int first = 50;
	int second = 40;
	printf("first = %d, second = %d\n", first, second);
	swap_variables(&first, &second);
	printf("first = %d, second = %d\n", first, second);
*/