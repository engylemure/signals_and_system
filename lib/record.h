//
// Created by jordao on 25/09/18.
//

#ifndef SIGNALS_AND_SYSTEM_RECORD_H
#define SIGNALS_AND_SYSTEM_RECORD_H
#ifndef ALSA_PCM_NEW_HW_PARAMS_API
#define ALSA_PCM_NEW_HW_PARAMS_API

#include <alsa/asoundlib.h>

int record_to_file(char* file_path);

#endif //ALSA_PCM_NEW_HW_PARAMS_API
#endif //SIGNALS_AND_SYSTEM_RECORD_H
