# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/04/10 22:24:44 by xinu              #+#    #+#              #
#    Updated: 2020/04/13 21:58:06 by xinu             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# nasm -f elf64 hello.asm -o hello.o
# ld -o hello hello.o -m elf_x86_64

NAME = libasm.a

FLAGS = -Wall -Wextra -Werror

FILES = \
	ft_strlen \
	ft_write \
	ft_strcpy \
	ft_strcmp \
	ft_read \
	ft_strdup \

SRCS = $(addprefix srcs/, $(addsuffix .s, $(FILES)))

OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS):
	$(foreach file, $(FILES), nasm -f elf64 srcs/$(file).s -o $(file).o;)

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

test: re test_clean
	gcc -o $(TEST_SUITE) $(FLAGS) main.c $(NAME)
	clear

quick: test
	@./$(TEST_SUITE)

test_clean: fclean
	rm -f $(TEST_SUITE)
