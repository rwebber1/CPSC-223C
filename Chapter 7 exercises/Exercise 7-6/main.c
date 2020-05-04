/*
 * Author:		Riley Webber
 * CWID:		890347164
 * Class:		CPSC 223C
 * Date:		5/03/2020
 * Topic(s):	Exercise 7-6
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAXLINE 1000


int main(int argc, char *argv[] )
{
	FILE *file1, *file2;
	char line1[MAXLINE], line2[MAXLINE];
	bool noDiff = true;

	file1 = fopen( argv[1], "r" );
	file2 = fopen( argv[2], "r" );

	int lineNum = 0;
	while (noDiff){
		fgets(line1, MAXLINE, file1);
		fgets(line2, MAXLINE, file2);
		if(strcmp (line1, line2) != 0){
			printf( "First file line %d: %s\nSecond file line %d: %s\n", lineNum, line1, lineNum, line2);
			noDiff = false;
		}
		lineNum++;
	}

	if(noDiff){ printf("Files are the exact same\n");}

	return 0;
}
