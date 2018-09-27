// #include "lib/play.h"
// #include "lib/record.h"
#include <unistd.h>
#include "lib/util.h"
#include "lib/complex_util.h"

int main(int argc, char** argv) {
    if (write(1, "This will be output to standard out\n", 36) != 36) {
        write(2, "There was an error writing to standard out\n", 44);
        return -1;
    }
    if (argc > 1){
        char **arguments = parse_argument(argv[1]);
        if(arguments != NULL){
            printf("%s %s\n", arguments[0], arguments[1]);
        } else return -1;
    }
    Exp_vector *v = new_exp_vector(3);
    printf("%f + %fi\n", crealf(v->vector[0]), cimagf(v->vector[0]));
    printf("%f + %fi\n", crealf(v->vector[1]), cimagf(v->vector[1]));
    return 0;
}