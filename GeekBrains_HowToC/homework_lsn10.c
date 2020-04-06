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
int calculateSquareEquation(int a, int b, int c, float* x1, float* x2){
	int discriminant;
	discriminant = pow(b, 2) - 4 * a * c;
	if (a == 0)
	{
		*x1 = -c / b;
		return 0;
	}
	if (discriminant > 0)
	{
		float discSqrt = sqrt(discriminant);
		*x1 = (- b + discSqrt) / (2 * a);
		*x2 = (- b - discSqrt) / (2 * a);
		return 1;
	}
	else if (discriminant == 0)
	{
		*x1 = -b / (2 * a);
		return 0;
	}
	else
		return -1;
}
void calculateRoots()
{
	int a, b, c;
	float x1, x2;
	printf("This program will calculate a square equation 'ax2 + bx + c =0'");
	printf("\nEnter a: ");
	scanf_s("%d", &a);
	printf("\nEnter b: ");
	scanf_s("%d", &b);
	printf("\nEnter c: ");
	scanf_s("%d", &c);
	int result;
	result = calculateSquareEquation(a, b, c, &x1, &x2);
	switch (result)
	{
	case 0:
		printf("Equation has a unique root x=%f", x1);
		break;
	case 1:
		printf("Equation has two root x1=%f, x2=%f", x1, x2);
		break;
	case -1:
		printf("Equation has no roots");
		break;
	default:
		printf("Exceptional answer: %d", result);
		break;
	}
}
/*
���������������� ������ �� ����� �����, ������� �������, ����������� �� ���� ���� ������. 
������� ������ ������� ����, ���� � ������� ��� �������� �����, � ��������� ������ ������� 
��� �������� ����� � ������� � ������� �������. ����� ���������� �������, ���� ������ ��� 
������, ������� ��� ����� �� ������� �� �����.
*/
void printArray(int* array, int length);//prototype
void fillArrayWithInput(int* array, int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("Enter value no.%d:", i);
		scanf_s("%d", array + i);
	}
	printf("\nOur array is: ");
}
void doubleOddNumbersOfArray()
{
	int arr[ARRAY_LENGTH];
	int result=0;
	fillArrayWithInput(arr, ARRAY_LENGTH);
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
/*
��� ��������, ���������� ���� integer �������� � ������ 4 �����, � ���������� ���� short ��� �����. 
������� �������, ������� ��������� ������ �� ��������������������� ����� (���� int), � 
������� ��� �� ����� ��������������������� ������� (���� short). ���, �� ����, ������ ���������� ���� �������. 
������ ����������� ��� ��������������� ������ �� �������� ������� ��� ����� �������� ������.
*/
void startDecording()
{
	unsigned int arr[ARRAY_LENGTH];
	fillArrayWithInput(arr, ARRAY_LENGTH);
	decoder(arr, ARRAY_LENGTH);
}
int decoder(unsigned int* array, int length)
{
	unsigned short* out= array;
	for (int i = 0; i < length*2; i++) {
		printf("%d ", *(out + i));
	}
	return 0;
}