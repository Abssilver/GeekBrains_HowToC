#include "homework_lsn10.h"
#include <stdio.h>
#include <math.h>
#define ARRAY_LENGTH 10

/*
	Используя заголовочный файл <math.h>, описать функцию,
	int calculateSquareEquality(int a, int b, int c, float* x1, float* x2);
	Которая будет решать квадратное уравнение вида a * x ^ 2 + b * x + c = 0 и
	записывать корни этого уравнения в переменные, адреса которых переданы в
	качестве указателей х1 и х2. Функция должна вернуть -1, если уравнение
	не имеет корней, 0, если у уравнения есть один корень, и 1, если у уравнения два корня.
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
Инициализировать массив из целых чисел, описать функцию, принимающую на вход этот массив. 
Функция должна вернуть ноль, если в массиве нет нечётных чисел, в противном случае удвоить 
все нечётные числа в массиве и вернуть единицу. После выполнения функции, если массив был 
изменён, вывести все числа из массива на экран.
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
Как известно, переменная типа integer занимает в памяти 4 байта, а переменная типа short два байта. 
Опишите функцию, которая принимает массив из тридцатидвухразрядных чисел (типа int), и 
выводит его на экран шестнадцатиразрядными числами (типа short). Это, по сути, задача приведения типа массива. 
Широко применяется для расшифровывания данных из входящих потоков или логов цифровых систем.
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