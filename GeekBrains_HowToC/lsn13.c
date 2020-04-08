#include <stdio.h>
#include <stdlib.h>

int lsn13() {
	FILE *f;
	errno_t error;
	error = fopen_s(&f, "lsn13_file.txt", "w+"); //r=read, w=write, a=append, rb, wb, ab - where b - binary;
	if (error == 0) {
		fprintf(f, "Hello, files! %s", "We did it!\n");
		fclose(f);
	}
	else
		return 1;
	char word [256];
	error = fopen_s(&f, "lsn13_file.txt", "r");
	if (error == 0) {
		while (!feof(f)) {//file end of file. 0 - end is not reached
			fscanf_s(f, "%s ", word, _countof(word));
			printf("%s ", word);
		}
		fclose(f);
		puts("");
	}
	return 0;
}
