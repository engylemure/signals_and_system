#include "util.h"
#define EQUAL_DELIMITER "="

/*Dumb parser for string arguments in the command line*/
char** parse_command_line_arguments(int argc, char** argv){
    if(argc >= 2){
        
    } else {
        return NULL;
    }
}

char** parse_argument(char *argument){
    char** parsed_argument;
    parsed_argument = malloc(sizeof(char*)*2);
    int i = 0;
    parsed_argument[0] = strtok(argument, EQUAL_DELIMITER);
    parsed_argument[1] = strtok(NULL, EQUAL_DELIMITER);
    return parsed_argument;
}