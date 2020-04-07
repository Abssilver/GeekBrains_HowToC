#include "lsn11.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void helloFunction(char* name, char* out) {
	char welcome[256] = "Hello, ";
	name[0] = tolower(name[0]);
	//printf("%d\n", _countof(name));
	if (strcmp("pavel", name)==0)
		strcpy_s(name, _countof(name), "Master!");
	name[0] = toupper(name[0]);
	strcat_s(welcome, _countof(welcome), name);
	strcpy_s(out, _countof(welcome), welcome);
	//printf("%d\n", _countof(welcome));
	//printf("%d\n", _countof(out));
}
// isaplha() - символ из алфавита (истина/ложь)
// isdigit() - символ - цифра
// isspace() - символ - пробел
// isupper() - символ в верхнем регистре
// islower() - символ в нижнем регистре
// toupper() / tolower() - переводят в верхний/нижний регистр
// atoi() - перевод написанного в строке в integer (alphabetical to integer)
// atof() - перевод написанного в строке в float

int lsn11(){
	char string1[256]="This is a string";
	char* string2 = "This is also a string";

	printf("%s\n", string1);
	printf("%s\n", string2);

	string1[5] = 'X';
	printf("%s\n", string1);

	char name[256];
	char result[256];
	gets(name);

	helloFunction(name, result);
	puts(result);

	char num[64];
	puts("Enter a number");
	gets(num);
	int number = atoi(num);
	number *= number;

	printf("We powered your number to %d\n", number);



	return 0;
}
