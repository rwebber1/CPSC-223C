/*
 * Author:		Riley Webber
 * CWID:		890347164
 * Class:		CPSC 223C
 * Date:		5/03/2020
 * Topic(s):	Exercise 7-1
 */

#include "files.h"


bool open_io_files(int argc, const char* argv[], FILE** fin,
                   int min_expected_argc, int max_expected_argc,
                   const char* usage) {
  /* open an input file, and optionally an output file */
  if (argc < min_expected_argc || argc > max_expected_argc) {
    fprintf(stderr, "%s\n", usage);
    return false;
  }

  *fin = fopen(argv[1], "r");
  if (*fin == NULL) {
    fprintf(stderr, "failed to open input file: '%s'\n", argv[1]);
    return false;
  }

  return true;
}

    // must include <stdarg.h>  -- see files.h
void closefiles(int n, ...) {   // uses varargs (variable # of args)
  va_list pargs;
  va_start (pargs, n);    // initialize the list ptr

  for (int i = 0; i < n; i++)
    fclose(va_arg (pargs, FILE*));  // get next argument

  va_end (pargs);   // clean up
}
