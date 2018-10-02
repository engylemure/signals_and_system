#ifndef SIGNALS_AND_SYSTEM_UTIL_H
#define SIGNALS_AND_SYSTEM_UTIL_H
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char** parse_command_line_arguments(int argc, char** argv);

char** parse_argument(char *argument);

typedef struct list List;

struct list{
    void* content;
    size_t size;
    List *next, *prev;
};

List* new_list();
List* append_list(List* list, List* element);
List* rm_from_list(List* list);
void free_list(List* list);

#endif // SIGNALS_AND_SYSTEM_UTIL_H