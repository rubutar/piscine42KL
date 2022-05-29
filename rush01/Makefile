CC=gcc
CFILES=$(shell find ex00 -type f -name "*.c")
HEADERS_DIR=
CFLAGS=-Wall -Wextra -Werror
DEBUG_FLAGS=-Wall -Wextra -Werror
NAME=rush-01
OBJS=${CFILES:.c=.o}

all: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf ex00/*.o

debug:
	$(CC) $(DEBUG_FLAGS) -g debug/test.c

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean debug fclean re