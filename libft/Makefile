# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/12 17:26:39 by kvisouth          #+#    #+#              #
#    Updated: 2022/11/30 15:21:32 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = 	ft_strlen.c \
		ft_strrchr.c \
		ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_striteri.c \
		ft_strmapi.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_putstr_fd.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \

SRCB =	ft_lstadd_back.c \
		ft_lstadd_front.c \
		ft_lstclear.c \
		ft_lstdelone.c \
		ft_lstiter.c \
		ft_lstlast.c \
		ft_lstmap.c \
		ft_lstnew.c \
		ft_lstsize.c \

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
RM			= rm -rf
AR			= ar rcs

#Compile nos .c en .o
OBJS		= $(SRCS:.c=.o)
OBJB		= $(SRCB:.c=.o)

#Creer une archive 'libft.a' contenant tout nos .o
$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

#Ajoute / Creer 'libft.a' contenant les .o des bonus
bonus:		$(OBJB)
			$(AR) $(NAME) $(OBJB)

all:		$(NAME)

#Fait rm -rf pour tout les fichier .o
clean:
			$(RM) $(OBJS) $(OBJB)

#Utilise la regle clean, puis retire egalement libft.a et a.out
fclean:		clean
			$(RM) $(NAME) a.out

re:			fclean $(NAME)

.PHONY:		all clean fclean re bonus