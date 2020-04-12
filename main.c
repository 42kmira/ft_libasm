/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/11 18:28:38 by xinu              #+#    #+#             */
/*   Updated: 2020/04/12 02:15:09 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libasm.h"

extern void say_hi();

int		main(void)
{
	int		len;
	char	str[] = "Hello World!";

	// len = ft_strlen(str);
	len = 4;
	printf("STR: %s has %d length\n", str, len);
	say_hi();
	return (0);
}
