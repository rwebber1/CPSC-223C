/*
 * Author:		Riley Webber
 * CWID:		890347164
 * Class:		CPSC 223C
 * Date:		5/03/2020
 * Topic(s):	Exercise 7-1
 */

#ifndef files_h
#define files_h

#include <stdio.h>
#include <stdarg.h>
#include <stdbool.h>


bool open_io_files(int argc, const char* argv[], FILE** fin,
                   int min_expected_argc, int max_expected_argc,
                   const char* usage);

void closefiles(int n, ...);

#endif /* files_h */

