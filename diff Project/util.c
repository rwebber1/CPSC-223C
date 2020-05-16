/*
 * Author:		Riley Webber
 * CWID:		890347164
 * Class:		CPSC 223C
 * Date:		5/16/2020
 * Project:		Diff Final
 */

#include <string.h>
#include <stdlib.h>
#include "util.h"

#define BUFLEN 256


char* yesorno(int condition) { return condition == 0 ? "no" : "YES"; }

FILE* openfile(const char* filename, const char* openflags) {
	FILE* f;
	if ((f = fopen(filename, openflags)) == NULL) {  printf("can't open '%s'\n", filename);  exit(1); }
	return f;
}

void printline(void) {
	for (int i = 0; i < 10; ++i) { printf("=========="); }
	printf("\n");
}

void printleft(const char* left) {
	char buf[BUFLEN];

	strcpy(buf, left);
	int j = 0, len = (int)strlen(buf) - 1;
	for (j = 0; j <= 48 - len ; ++j) { buf[len + j] = ' '; }
	buf[len + j++] = '<';
	buf[len + j++] = '\0';
	printf("%s\n", buf);
}

void printright(const char* right) {
	if (right == NULL) { return; }
	printf("%50s %s", ">", right);
}

void printboth(const char* left_right) {
	char buf[BUFLEN];
	size_t len = strlen(left_right);
	if (len > 0) { strncpy(buf, left_right, len); }
	buf[len - 1] = '\0';
	printf("%-50s %s", buf, left_right);
}

void printboth2(const char* left_right) {
	char buf[BUFLEN];
	strcpy(buf, left_right);
	int j = 0, len = (int)strlen(buf) - 1;
	for (j = 0; j <= 48 - len ; ++j) { buf[len + j] = ' '; }
	buf[len + j++] = '(';
	buf[len + j++] = '\0';
	printf("%s\n", buf);
}

void printleftmatch(const char* left) {
  char buf[BUFLEN];

  strcpy(buf, left);
  int j = 0, len = (int)strlen(buf) - 1;
  for (j = 0; j <= 48 - len ; ++j) { buf[len + j] = ' '; }
  buf[len + j++] = '\0';
  printf(" %s\n", buf);
}
void printleftminus(const char* left) {
  char buf[BUFLEN];

  strcpy(buf, left);
  int j = 0, len = (int)strlen(buf) - 1;
  for (j = 0; j <= 48 - len ; ++j) { buf[len + j] = ' '; }
  buf[len + j++] = '\0';
  printf("- %s\n", buf);
}
void printleftplus(const char* left) {
  char buf[BUFLEN];

  strcpy(buf, left);
  int j = 0, len = (int)strlen(buf) - 1;
  for (j = 0; j <= 48 - len ; ++j) { buf[len + j] = ' '; }
  buf[len + j++] = '\0';
  printf("+ %s\n", buf);
}
