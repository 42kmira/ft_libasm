/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 23:06:03 by xinu              #+#    #+#             */
/*   Updated: 2020/04/25 19:33:05 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

#include <stddef.h>

size_t	ft_read(int fd, void *buf, size_t count);
int		ft_strcmp(const char *s1, const char *s2);
char		*ft_strcpy(char *dest, const char *src);
char*	ft_strdup(const char *s);
size_t	ft_strlen(const char *str);
size_t	ft_write(int fd, const void *buff, size_t count);

#endif
