/*

This example reads from the default PCM device
and writes to standard output for 5 seconds of data.

*/

#include "lib/play.h"
#include "lib/record.h"
#include <alsa/asoundlib.h>

int main() {
    if (write(1, "This will be output to standard out\n", 36) != 36) {
        write(2, "There was an error writing to standard out\n", 44);
        return -1;
    }
    return 0;
}