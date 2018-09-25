cmake_minimum_required(VERSION 3.12)
project(signals_and_system C)

set(CMAKE_C_STANDARD 11)

if(WITH_ALSA)
    find_package(ALSA REQUIRED)
elseif(NOT WITHOUT_ALSA)
    find_package(ALSA)
endif()

add_executable(signals_and_system main.c lib/play.c lib/play.h lib/record.c lib/record.h)

if (ALSA_FOUND)
    include_directories(${ALSA_INCLUDE_DIRS})
    target_link_libraries (signals_and_system ${ALSA_LIBRARIES})
endif(ALSA_FOUND)
