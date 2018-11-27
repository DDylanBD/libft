# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbeaucam <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 14:53:59 by dbeaucam          #+#    #+#              #
#    Updated: 2018/11/06 14:54:00 by dbeaucam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS =  ft_memset.c ft_strjoin.c ft_atoi.c ft_print_words_tables.c ft_strjoinf.c \
		ft_bzero.c ft_putchar.c ft_strlcat.c ft_isalnum.c ft_putchar_fd.c ft_strlen.c \
		ft_isalpha.c ft_putendl.c ft_strmap.c ft_isascii.c ft_putendl_fd.c ft_strmapi.c \
		ft_isdigit.c ft_putnbr.c  ft_strncat.c ft_isprint.c ft_putnbr_fd.c ft_strncmp.c \
		ft_itoa.c ft_putstr.c ft_strncpy.c ft_lstadd.c  ft_putstr_fd.c ft_strnequ.c \
		ft_lstdel.c  ft_sort_integer_table.c ft_strnew.c ft_lstdelone.c ft_strcapitalize.c ft_strnstr.c \
		ft_lstiter.c ft_strcat.c  ft_strrchr.c ft_lstmap.c  ft_strchr.c  ft_strrev.c \
		ft_lstnew.c  ft_strclr.c  ft_strsplit.c ft_memalloc.c ft_strcmp.c  ft_strstr.c \
		ft_memccpy.c ft_strcpy.c  ft_strsub.c ft_memchr.c  ft_strdel.c  ft_strtrim.c \
		ft_memcmp.c  ft_strdup.c  ft_swap.c ft_memcpy.c  ft_strequ.c  ft_tolower.c \
		ft_memdel.c  ft_striter.c ft_toupper.c ft_memmove.c ft_striteri.c \

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I .
	ar rc $(NAME) $(SRCS:.c=.o)
	ranlib $(NAME)

clean:
	rm -rf $(SRCS:.c=.o)

fclean: clean
	rm -rf $(NAME)

re: fclean all

