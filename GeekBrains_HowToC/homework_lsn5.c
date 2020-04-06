#include "homework_lsn5.h"
#include <stdio.h>
#include <locale.h>

int program() {
	/*
	���� ������� (������� ������������ ��������) Uo = Ui * (R1 / (R2 + R1)).
	�������� ������� ������� ������ ���������� �� �����������, � �������:
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
	��������� � ������������ ����� ����� �����. 
	�������� ��������� ������� ��������, ������ �� �������� ����� � �������� (��������, �� 0 �� 100, ������������) 
	� ������� �� ����� ��������� � ���������� ��������.
	*/

	int input;
	const int RANGE_MIN = 0;
	const int RANGE_MAX = 100;
	printf("������� ����� ����� �����\n");
	scanf_s("%d", &input);
	printf("���� ����� '%d' %s������ � �������� �� %d �� %d\n",
		input,
		(input >= RANGE_MIN && input <= RANGE_MAX) ? "" : "�� ",
		RANGE_MIN,
		RANGE_MAX
		);
	/*
	��������� � ������������ ������ �����. ������� �� ����� ������� �������������� �������� �����.
	*/

	const int numToAsk = 10;
	int ten_numbers;
	float total = 0;
	printf("������� 10 ����� �����\n");
	for (size_t i = 0; i < numToAsk; i++)
	{
		printf("������� �����\n");
		scanf_s("%d", &ten_numbers);
		total += ten_numbers;
	}
	printf("������� �������������� %.2f", total / numToAsk);
	
	/*
	��������� � ������������ ���������� ������������ ��� ������ �����. 
	�������� ���������, ������� ��� ������ ������ � ������� ^ ����� 
	�������� �� ��������� ���������� ����� �������������� �����������.
	*/

	printf("������� ���������� �����\n");
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

