NAME	= push_swap

CC 		= gcc

SRCS	= push_swap.c error_handling.c fill_stacks.c \
						operations.c quic_sort.c init.c

LIBFT	= Libft/
# LIBA = Libft/libft.a

OBJS	= ${SRCS:%.c=%.o}

FLAGS = -Wall -Wextra -Werror
# $(LIBFT):
# 			@cd ./Libft/
# 			@make
# 			@cd ..

$(NAME):
			@${CC} -o $(NAME) $(SRCS) Libft/libft.a

all: 	$(NAME)

clean:
			@rm -rf $(NAME)

fclean:	clean
			@rm -rf $(NAME)

re:	fclean all

.PHONY: all clean fclean re