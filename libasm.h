/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/10 23:06:03 by xinu              #+#    #+#             */
/*   Updated: 2020/04/13 21:03:41 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H

extern size_t	ft_read(int fd, void *buf, size_t count);
extern int		ft_strcmp(const char *s1, const char *s2);
extern char		*ft_strcpy(char *dest, const char *src);
extern char*	ft_strdup(const char *s);
extern size_t	ft_strlen(const char *str);
extern size_t	ft_write(int fd, const void *buff, size_t count);

#endif
