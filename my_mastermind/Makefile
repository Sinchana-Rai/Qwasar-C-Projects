CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
NAME    = my_mastermind

SRCS    = my_mastermind.c helpers.c
OBJS    = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

%.o: %.c my_mastermind.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all