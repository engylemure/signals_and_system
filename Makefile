COMPILER := gcc
APPLICATION_NAME := application.out
all:	build clean

build:
	@$(COMPILER) *.c -c -g -lasound
	@$(COMPILER) *.o -o $(APPLICATION_NAME) -g -lasound

run:
	@./$(APPLICATION_NAME)

clean:
	@rm -f *.o