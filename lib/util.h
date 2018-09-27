#ifndef SIGNALS_AND_SYSTEM_UTIL_H
#define SIGNALS_AND_SYSTEM_UTIL_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char** parse_command_line_arguments(int argc, char** argv);

char** parse_argument(char *argument);

#endif // SIGNALS_AND_SYSTEM_UTIL_H