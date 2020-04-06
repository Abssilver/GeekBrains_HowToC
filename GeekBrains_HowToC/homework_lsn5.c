#include "homework_lsn5.h"
#include <stdio.h>
#include <locale.h>

int program() {
	/*
	Есть формула (расчёта резисторного делителя) Uo = Ui * (R1 / (R2 + R1)).
	Напишите формулы расчёта каждой переменной по отдельности, в формате:
	Ui = ...;
	R1 = ...;
	R2 = ...;
	*/

	setlocale(LC_ALL, "Russian");
	int Ui;
	int Uo;
	int R1;
	int R2;
	/*
	formulas
	Uo = Ui * (R1 / (R2 + R1));
	Ui = Uo / (R1 / (R2 + R1));
	R1 = (Ui * R2) / (1 - Ui);
	R2 = ((Ui * R1) / Uo) - R1;
	*/
	/*
	Запросить у пользователя любое целое число. 
	Написать программу которая проверит, входит ли введённое число в диапазон (например, от 0 до 100, включительно) 
	и выведет на экран сообщение о результате проверки.
	*/

	int input;
	const int RANGE_MIN = 0;
	const int RANGE_MAX = 100;
	printf("Введите любое целое число\n");
	scanf_s("%d", &input);
	printf("Ваше число '%d' %sвходит в диапазон от %d до %d\n",
		input,
		(input >= RANGE_MIN && input <= RANGE_MAX) ? "" : "не ",
		RANGE_MIN,
		RANGE_MAX
		);
	/*
	Запросить у пользователя десять чисел. Вывести на экран среднее арифметическое введённых чисел.
	*/

	const int numToAsk = 10;
	int ten_numbers;
	float total = 0;
	printf("Введите 10 целых чисел\n");
	for (size_t i = 0; i < numToAsk; i++)
	{
		printf("Введите число\n");
		scanf_s("%d", &ten_numbers);
		total += ten_numbers;
	}
	printf("Среднее арифметическое %.2f", total / numToAsk);
	
	/*
	Запросить у пользователя количество используемых для вывода строк. 
	Написать программу, которая при помощи циклов и символа ^ будет 
	рисовать на указанном количестве строк равнобедренный треугольник.
	*/

	printf("Введите количество строк\n");
	int stringNumber;
	scanf_s("%d", &stringNumber);
	if (stringNumber >= 2 && stringNumber<=50)
	{
		for (size_t i = 0; i < stringNumber; i++)
		{
			if (i == 0)
			{
				for (size_t j = 0; j < stringNumber; j++)
				{
					printf(" ");
				}
				printf("^\n");
			}
			else if (i == stringNumber - 1)
			{
				printf(" ");
				for (size_t j = 0; j < stringNumber + i; j++)
				{
					printf("^");
				}
				printf("\n");
			}
			else
			{
				for (size_t j = 0; j < stringNumber - i; j++)
				{
					printf(" ");
				}
				printf("^");
				for (size_t j = stringNumber - i + 1; j < stringNumber + i; j++)
				{
					printf(" ");
				}
				printf("^\n");
			}
		}
	}
	else printf("^\n");

	getchar();
	return 0;
}

