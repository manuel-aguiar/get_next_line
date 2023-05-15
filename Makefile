
## BUILD DETAILS

NAME = main
CC = gcc
CFLAGS = -Wall -Wextra -Werror



INC_PATH	= 		get_next_line

SRCS		= 		get_next_line.c get_next_line_utils.c main.c



all: $(NAME)

$(NAME): $(SRCS)
	@$(CC) $(CFLAGS) -I$(INC_PATH) $(SRCS) -o $(NAME)

clean:
	@rm -f $(OBJS)

re: fclean all

mkclean: all clean

bruh:
	rm mymain.exe

.PHONY: clean fclean re mkclean bruh message


