#include "Main.h"
#include <stdio.h>
#include <locale.h>
#include <math.h>
#include "Header.h"

/*
#define ARRAY_LENGTH 50
#define boolean int
#define true 1
#define false 0
*/
//prototypes
int isPrime(int number);
int calculateSquareEquality(int a, int b, int c, float* x1, float* x2);
void doubleOddNumbersOfArray();
void startDecording();
int lsn11();
int lsn13();

int main() {
	
	/* \n символ новой строки
	\t символ табуляции
	\\ символ обратного слеша
	\0 символ конца строки
	*/
	setlocale(LC_ALL, "Russian");
	lsn13();
	lsn11();
	startDecording();
	//doubleOddNumbersOfArray();
/*
	float x1=0, x2=0;
	printf("%d\n", calculateSquareEquality(1, 12, 36, &x1, &x2));
	printf("%.2f\n%.2f\n", x1, x2);
	printf("%d\n", isPrime(5));
*/
	/*
	заполнители
	%d - int (%i) / decimal
	%s - string
	%c - char
	%p - указатели
	%f - float
	%lf - double (long float)
	%x - type
	%.2f (знаки после запятой) и %05d (общее количество знаков целого числа) для %d, %i, %f
	%% - процент
	*/
	printf("Hello World");
	getchar();
	int a = 50;
	printf("%05d%%\n", a);
	printf("text and%5d%%\n", a);

	short sh = 345; //2 bytes -32768...32767
	int number = -56; //4 bytes -2.147.000000...+2.147.000000
	unsigned int uint = 4000000000; //0...4.294.000.000
	unsigned char symbol = 'A'; //0...255
	float real = 5.345f; //4 bytes
	double realdouble = 5.345; //8 bytes long float
	//no boolean type in c
	int true = 1;
	int false = 0;
	char sym = 75; //1 byte -128...127

	printf("Переменная a имеет значение: %d \n", a);
	printf("Переменная a хранится по адресу: %p \n", &a);
	/*
	int input;
	printf("Введите число");
	scanf("%d", &input);
	printf("Вы ввели число %d, мы удвоили его для Вас: %d\n", input, input*2);
	*/
	return 0;
}