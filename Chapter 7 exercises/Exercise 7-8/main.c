/*
 * Author:		Riley Webber
 * CWID:		890347164
 * Class:		CPSC 223C
 * Date:		5/03/2020
 * Topic(s):	Exercise 7-8
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define LINES_PER_PAGE 10

void print_file(char *file_name)
{
	FILE *file;
	int pageNum = 1;
	int lineCount;
	int c;
	bool newPage = true;

	if ((file = fopen(file_name, "r")) != NULL) {
		while ((c = fgetc(file)) != EOF) {
			if (newPage) {
				printf("[%s] page %d starts\n", file_name, pageNum);
				newPage = false;
				lineCount = 1;
			}
			putchar(c);
			if (c == '\n' && ++lineCount > LINES_PER_PAGE) {
				printf("[%s] page %d ends\n\n", file_name, pageNum);
				newPage = true;
				pageNum++;
			}
		}
		if (!newPage) {
			printf("\n[%s] page %d ends\n", file_name, pageNum);
		}
		putchar('\n');
		fclose(file);
	}
}

int main(int argc, char *argv[])
{
	int i;

	if (argc < 2){ printf("Error - Must add files from command line\n"); exit(1);}

	for (i = 1; i < argc; i++){
		print_file(argv[i]);
	}

	return 0;
}
