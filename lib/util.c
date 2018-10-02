#include "util.h"
#define EQUAL_DELIMITER "="


List* new_list(){
    List* newer = malloc(sizeof(List));
    newer->content = NULL;
    newer->prev = NULL;
    newer->next = NULL;
    return newer;
}

List* append_list(List* list, List* element){
    if(element == NULL) {
        return NULL;
    }
    if(list->next == NULL){
        list->next = element;
        element->prev = list;
    } else {
        append_list(list->next, element);
    }
}

List* rm_from_list(List* list){
    if(list->next != NULL && list->prev != NULL){
        list->next = list->prev;
    } else if(list->next != NULL && list->prev == NULL){
        list->next->prev = NULL;
    } else if(list->prev != NULL && list->next == NULL){
        list->prev->next = NULL;
    }
    return list;
}

void free_list(List* list){
    if(list == NULL) return;
    else {
        List* next = list->next, *prev = list->prev;
        next->prev = NULL;
        prev->next = NULL;
        if(list->content != NULL){
            free(list->content);
        }
        free(list);
        free_list(next);
        free_list(prev);
    }
}


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

