NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT = libft.a
RM = rm -drf
SRCS = sort_nb.c main.c verify.c utils.c sabs.c pab.c rabr.c rrr.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(LIBFT):
	make -C lib

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -I. -L./lib ./lib/$(LIBFT)

clean:
	$(RM) $(OBJS)
	make clean -C lib

fclean: clean
	$(RM) $(NAME)
	make fclean -C lib

re: fclean all
	make re -C lib

