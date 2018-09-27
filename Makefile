COMPILER := gcc
APPLICATION_NAME := application.out
all:	build clean

build:
    @$(COMPILER) lib/*.c -c -g -lasound -lm
	@$(COMPILER) *.c -c -g -lasound -lm
	@$(COMPILER) *.o -o $(APPLICATION_NAME) -g -lasound -lm

run:
	@./$(APPLICATION_NAME)

clean:
	@rm -f *.o