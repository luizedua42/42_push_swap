NAME = push_swap
CC = cc
CCFLAGS = -g3 -Wall -Werror -Wextra 
OBJ = $(SRC:%.c=%.o)

SRC = ft_rots.c ft_swaps.c ft_pushes.c main.c ft_rev_rots.c \
	push_swap.c tiny_sorts.c


%.o: %.c
	$(CC) $(CCFLAGS) -c $<

all: $(NAME) 

$(NAME): $(OBJ)
	make -C libft/ --no-print-directory
	$(CC) $(CCFLAGS) $(OBJ) libft/libft.a -o $(NAME)

clean:
	rm -f $(OBJ)
	make -C libft/ clean --no-print-directory

fclean: clean
	rm -f $(NAME)
	make -C libft/ fclean --no-print-directory

re: fclean all

.PHONY: all clean fclean re