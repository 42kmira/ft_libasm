# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/10 22:24:44 by xinu              #+#    #+#              #
#    Updated: 2020/04/10 23:00:38 by xinu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

FLAGS = -Wall -Wextra -Werror

FILES = \
	ft_strlen \

SRCS = $(addprefix srcs/, $(addsuffix .c, $(FILES)))

OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS):
	gcc -c $(FLAGS) $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

save: fclean
	git add .
	git commit -m  "$(MSG)"
	git push

TEST_SUITE = test_program

test: fclean
	rm -f $(TEST_SUITE)
	gcc -o $(TEST_SUITE) $(FLAGS) main.c
