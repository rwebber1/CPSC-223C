/*
 * Author:		Riley Webber
 * CWID:		890347164
 * Class:		CPSC 223C
 * Date:		5/16/2020
 * Project:		Diff Final
 */

#ifndef util_h
#define util_h

#include <stdio.h>
#define BUFLEN 256

char* yesorno(int condition);
FILE* openfile(const char* filename, const char* openflags);

void printleft(const char* left);
void printright(const char* right);
void printboth(const char* left_right);
void printboth2(const char* left_right);

void printline(void);

void printleftmatch(const char* left);
void printleftminus(const char* left);
void printleftplus(const char* left);
#endif /* util_h */
