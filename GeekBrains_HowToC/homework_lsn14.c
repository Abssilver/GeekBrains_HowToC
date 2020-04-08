#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/*
������� �������, ������������ ������ � �������� �������������� ����������� �����, 
����������� � ��������� ���� �������.
*/

void ConverterFunction() {
	errno_t err;
	char num[64], *end;
	puts("Enter a number");
	gets(num);
	int number = strtol(num, &end, 10);
	int isNegative = number < 0;
	if (isNegative) number = -number;
	char p[17];
	err = _ltoa_s(number, p,_countof(p) ,2);
	if (!err)
	{
		if (isNegative) printf("-%s", p);
		else printf(p);
	}
}
/* Speaker's solution
void decToBin(int in, char* result) {
	char out[64];
	int i = 0;
	int temp = in;
	while (temp != 0) {
		temp = temp >> 1;
		i++;
	}
	out[i] = '\0';
	while (in > 0){
		out[--i] = (in % 2) ? '1' : '0';
		in /= 2;
	}
	strcat(result, out);
}
*/
/*
������� ��������� "�������������", ���������� ������������� �������� 
�����, ������, ��������� � ������� ��������������.
�������� �������, ����������� �� ���� ��������� �� ���������, 
�������������� � ������������ ������� � �������� ������� �������������� � ���������.
*/

struct rectangle {
	int length;
	int width;
	int perimeter;
	int area;
};

typedef struct rectangle Rectangle;
/*
typedef struct rectangle{
	int height;
	int width;
	int perimeter;
	int area;
} Rectangle;
*/
void CreateRectangle(int length, int width, Rectangle* rect) {
	rect->length = length;
	rect->width = width;
}

void CalculatePerimeterAndSquare(Rectangle * rect) {
	rect->perimeter = (rect->length + rect->width) * 2;
	rect->area = rect->length * rect->width;
}

void Rectangles(){
	Rectangle r1, r2;

	CreateRectangle(2, 5, &r1);
	CreateRectangle(10, 10, &r2);

	CalculatePerimeterAndSquare(&r1);
	CalculatePerimeterAndSquare(&r2);

	printf("%d - perimeter, %d - square\n", r1.perimeter, r1.area);
	printf("%d - perimeter, %d - square\n", r2.perimeter, r2.area);
}

/*
�������� ������� - ������, ������������ ��������� �� ������� ������, 
������� ����� ����� ������������ ��� ������ �� ��������� ���� integer.
���������� ��������� ����������� � ��������� �������.
������ ������ ���� �������������� ��������������� ������.
��� �������� - ��������� ���� ������ � �������� �� �����.
*/
int* CreateAnArray(int size) {
	int *area = (int*)calloc(size, sizeof(int));
	return area;
}
void Wrapper() {
	char num[64];
	puts("Enter a memory size");
	gets(num);
	int memorySize = atoi(num);
	int* area = CreateAnArray(memorySize);
	int i;
	for (i = 0; i < memorySize; i++) {
		if (i % 5 == 0) *(area + i) = 5;
		printf("%d ", *(area + i));
	}
	free(area);
}

/*
������� ��������� "������ �����", ������� ������ �������� �� ����� � ���� ���������� �������� ����
"�����", � ������ �� ������� ������ ����������� ���������� �� ��� '�' � �� ��� '�'. �������
�������, ����������� �� ���� ���������� ���� �����, � ������������ ��������� '�����' � ������������ ������.
*/

struct point {
	double x, y;
};

typedef struct point Point;

struct line {
	double length;
	Point p1, p2;
};

typedef struct line Line;

void InitPoint(double dx, double dy, Point* point) {
	point->x = dx;
	point->y = dy;
}
void InitLine(Point start, Point end, Line* ln){
	ln->p1 = start;
	ln->p2 = end;
}
Line CalculateLengthOfLine(Point frst, Point scnd) {
	Line lineToReturn;
	InitLine(frst, scnd, &lineToReturn);
	lineToReturn.length = sqrt(pow((frst.x - scnd.x), 2) + pow((frst.y - scnd.y), 2));
	return lineToReturn;
}
void DistanceCalculation(){
	Point point1, point2;
	Line resultLine;
	InitPoint(1, -1, &point1);
	InitPoint(1, 3, &point2);
	resultLine = CalculateLengthOfLine(point1, point2);
	printf("%.2lf", resultLine.length);
}


