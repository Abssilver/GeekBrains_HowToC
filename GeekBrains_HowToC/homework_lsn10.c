#include "homework_lsn10.h"
#include <stdio.h>
#include <math.h>
#define ARRAY_LENGTH 10

/*
	��������� ������������ ���� <math.h>, ������� �������,
	int calculateSquareEquality(int a, int b, int c, float* x1, float* x2);
	������� ����� ������ ���������� ��������� ���� a * x ^ 2 + b * x + c = 0 �
	���������� ����� ����� ��������� � ����������, ������ ������� �������� �
	�������� ���������� �1 � �2. ������� ������ ������� -1, ���� ���������
	�� ����� ������, 0, ���� � ��������� ���� ���� ������, � 1, ���� � ��������� ��� �����.
*/
int calculateSquareEquality(int a, int b, int c, float* x1, float* x2){
	int discriminant;
	discriminant = pow(b, 2) - 4 * a * c;
	if (discriminant > 0)
	{
		float discSqrt = sqrt(discriminant);
		*x1 = (-1 * b + discSqrt) / (2 * a);
		*x2 = (-1 * b - discSqrt) / (2 * a);
		return 1;
	}
	else if (discriminant == 0)
	{
		float newValue = -1 * b / (2 * a);
		*x1 = newValue;
		*x2 = newValue;
		return 0;
	}
	else
		return -1;
}
/*
���������������� ������ �� ����� �����, ������� �������, ����������� �� ���� ���� ������. 
������� ������ ������� ����, ���� � ������� ��� �������� �����, � ��������� ������ ������� 
��� �������� ����� � ������� � ������� �������. ����� ���������� �������, ���� ������ ��� 
������, ������� ��� ����� �� ������� �� �����.
*/
void printArray(int* array, int length);//prototype
void doubleOddNumbersOfArray()
{
	int arr[ARRAY_LENGTH];
	int result=0;
	for (int i =0; i < ARRAY_LENGTH; i++)
	{
		printf("Enter value no.%d:", i);
		scanf_s("%d", arr + i);
	}
	printf("\nOur array is: ");
	printArray(arr, ARRAY_LENGTH);
	result = makeDouble(arr, ARRAY_LENGTH);
	if (result != 0)
	{
		printf("\nOur changed array is: ");
		printArray(arr, ARRAY_LENGTH);
	}
}
int makeDouble(int* array, int length)
{
	int result = 0;
	for (int i = 0; i < length; i++)
		if (array[i]%2!=0)
		{
			array[i] *= 2;
			result++;
		}
	return result>0;
}