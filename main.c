/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 18:28:38 by xinu              #+#    #+#             */
/*   Updated: 2020/04/13 21:40:52 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

int		main(void)
{
	VARS(int, error)

	VARS(int, fd)
	VARS(char , buff[100])
	VARS(int, count)
	VARS(char *, out_str)
	VARS(char *, str)
	VARS(char *, str_1)
	VARS(int, bytes_read)

	DO(bzero, buff, 100);

	SET(count, 50)
	SET(fd, open("author", O_RDONLY))
	// READ(fd, buff, count, bytes_read, error)
	// SET(fd, -3)
	// READ(fd, buff, count, bytes_read, error)
	// SET(fd, 10)
	// READ(fd, buff, count, bytes_read, error)
	READ(fd, buff, count, bytes_read, error)

	STRDUP(buff, str, error);
	STRLEN(str, count, error);
	// SET(str, "a")
	// STRLEN(str, count, error);

	SET(str, "Test")
	SET(str_1, "Test")
	STRCMP(str, str_1, count, error);

	SET(str, malloc(sizeof(char) * 20))
	SET(str_1, "Test")
	STRCPY(str, str_1, out_str, error);

	return (0);
}
