DIR_HEADERS = ./includes/

DIR_SRCS	= ./

SRC			= push_swap.c \
			error_handling.c \
			fill_stacks.c \
		 	utils.c \
			get_ints.c \
			operations.c \
			fill_array.c \
			chunk.c \
			three_n.c \
			divide_a.c \
			divide_b.c \

SRCS		= $(addprefix $(DIR_SRCS), $(SRC))

OBJS		= $(SRCS:.c=.o)

NAME		= push_swap



GCC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Werror -Wextra 

%.o: %.c
			$(GCC) $(CFLAGS) -I $(DIR_HEADERS) -c $< -o $@

$(NAME):	$(OBJS)
			$(GCC) $(CFLAGS) -I $(DIR_HEADERS)  $(OBJS) -o $(NAME)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

phony:		all clean fclean re


# NAME	= push_swap

# CC 		= gcc

# SRCS	= push_swap.c \
# 				error_handling.c \
# 				fill_stacks.c\
# 				init.c \
# 				operations.c \
# 				utils.c \
# 				# quic_sort.c \

# LIBFT	= Libft/
# # LIBA = Libft/libft.a

# OBJS	= ${SRCS:%.c=%.o}

# FLAGS = -Wall -Wextra -Werror
# # $(LIBFT):
# # 			@cd ./Libft/
# # 			@make
# # 			@cd ..

# # $(LIBFT):
# # 		@make -C ./Libft/

# $(NAME):
# 			@${CC} -o $(NAME) $(SRCS) Libft/libft.a

# all:	$(NAME)

# clean:
# 			@rm -rf $(NAME)

# fclean:	clean
# 			@rm -rf $(NAME)

# re:	fclean all

# .PHONY: all clean fclean re