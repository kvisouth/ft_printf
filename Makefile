CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:src/%.c=obj/%.o)
NAME = libftprintf.a
RM	 = rm -rf
AR	 = ar rcs

$(NAME): $(OBJS)
	$(AR) $@ $<

all: $(NAME)

obj/%.o: src/%.c
	@mkdir -p obj
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) obj

fclean: clean
	$(RM) $(NAME)

re: fclean all