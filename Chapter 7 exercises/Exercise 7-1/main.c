/*
 * Author:		Riley Webber
 * CWID:		890347164
 * Class:		CPSC 223C
 * Date:		5/03/2020
 * Topic(s):	Exercise 7-1
 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "files.h"


int main(int argc, const char* argv[]){
	int c;
	FILE* fin;

	if (!open_io_files(argc, argv, &fin, 2, 3,"Usage: ./Exercise7-1.c inputfile")) {
			exit(1);
		}

	if(strcmp(argv[2], "lower") == 0) {
		while((c = fgetc(fin)) != EOF){
			putchar(tolower(c));
		}
	}
	else if(strcmp(argv[2], "upper") == 0) {
		while((c = fgetc(fin))!= EOF){
			putchar(toupper(c));
		}
	}
	else{
		printf("\nError: must indicate \"upper\" or \"lower\" after fileName");
	}

	closefiles(1, fin);

	return 0;
}
