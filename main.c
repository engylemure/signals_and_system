#include "lib/play.h"
#include "lib/record.h"
#include <unistd.h>
#include "lib/util.h"
#include "lib/complex_util.h"


void print_buffer(char* buffer){
    printf("b[0]=%f, b[1]=%f, b[2]=%f, b[3]=%f, b[4]=%f, b[5]=%f, b[6]=%f, b[7]=%f and sizeof=%f\n",buffer[0], buffer[1],buffer[2],buffer[3],buffer[4], buffer[5],buffer[6],buffer[7], sizeof(buffer));
};

int main(int argc, char** argv) {
    List* my_list = new_list();
    int n_list = record_to_file("sound.raw",0, print_buffer, my_list);

    play_from_file("sound.raw");
    Exp_vector *v = new_exp_vector(3);
    printf("%f + %fi\n", crealf(v->vector[0]), cimagf(v->vector[0]));
    printf("%f + %fi\n", crealf(v->vector[1]), cimagf(v->vector[1]));
    return 0;
}
