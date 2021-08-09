DIR_HEADERS = ./includes/

DIR_SRCS	= ./

# LIBFT	= Libft/./
# # LIBA = Libft/libft.a
SRC			= push_swap.c \
			error_handling.c \
			get_ints.c \
		 	utils.c	\
			struct.c \
			functions.c \
			three_n.c \
			divide_a.c \
			divide_b.c \
			sort.c \
			
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
