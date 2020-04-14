/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xinu <xinu@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/13 19:48:05 by xinu              #+#    #+#             */
/*   Updated: 2020/04/13 21:44:57 by xinu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <errno.h>
#include <fcntl.h>
#include <unistd.h>
#include <strings.h>
#include <string.h>

#include "libasm.h"
#include "color.h"

#define VARS(type, name)	\
	type	syst_##name __attribute__((unused));\
	type	mine_##name __attribute__((unused));\

#define SET(var_name, body)	\
	syst_ ## var_name = body;	\
	mine_ ## var_name = body;	\

#define DO(body, ...)	\
	body (syst_##__VA_ARGS__);	\
	body (mine_##__VA_ARGS__);	\

#define PRINT(format, ...)						\
	printf(BOLDCYAN"[SYST]: |"format"|\n", syst_##__VA_ARGS__);	\
	printf(BOLDPURPLE"[MINE]: |"format"|\n", mine_##__VA_ARGS__);	\
	printf("\n");										\

#define READ(var1, var2, var3, ret, err)	\
	errno = 0;													\
	syst_##ret = read(syst_##var1, syst_##var2, syst_##var3);	\
	syst_##err = errno;											\
	mine_##ret = ft_read(mine_##var1, mine_##var2, mine_##var3);	\
	mine_##err = errno;											\
	printf(BOLDCYAN"[SYST]: | RET: %d and ERR: %d |\n", syst_##ret, syst_##err);	\
	printf(BOLDPURPLE"[MINE]: | RET: %d and ERR: %d |\n", mine_##ret, mine_##err);	\
	printf("\n");										\

#define STRCMP(var1, var2, ret, err)	\
	errno = 0;													\
	syst_##ret = strcmp(syst_##var1, syst_##var2);				\
	syst_##err = errno;											\
	mine_##ret = ft_strcmp(mine_##var1, mine_##var2);			\
	mine_##err = errno;											\
	printf(BOLDCYAN"[SYST]: | RET: %d and ERR: %d |\n", syst_##ret, syst_##err);	\
	printf(BOLDPURPLE"[MINE]: | RET: %d and ERR: %d |\n", mine_##ret, mine_##err);	\
	printf("\n");										\

#define STRCPY(var1, var2, ret, err)	\
	errno = 0;													\
	syst_##ret = strcpy(syst_##var1, syst_##var2);				\
	syst_##err = errno;											\
	mine_##ret = ft_strcpy(mine_##var1, mine_##var2);			\
	mine_##err = errno;											\
	printf(BOLDCYAN"[SYST]: | RET: %s and ERR: %d |\n", syst_##ret, syst_##err);	\
	printf(BOLDPURPLE"[MINE]: | RET: %s and ERR: %d |\n", mine_##ret, mine_##err);	\
	printf("\n");										\

#define STRDUP(var1, ret, err)	\
	errno = 0;													\
	syst_##ret = strdup(syst_##var1);							\
	syst_##err = errno;											\
	mine_##ret = ft_strdup(mine_##var1);						\
	mine_##err = errno;											\
	printf(BOLDCYAN"[SYST]: | RET: %s and ERR: %d |\n", syst_##ret, syst_##err);	\
	printf(BOLDPURPLE"[MINE]: | RET: %s and ERR: %d |\n", mine_##ret, mine_##err);	\
	printf("\n");										\

#define STRLEN(var1, ret, err)	\
	errno = 0;													\
	syst_##ret = strlen(syst_##var1);							\
	syst_##err = errno;											\
	mine_##ret = ft_strlen(mine_##var1);						\
	mine_##err = errno;											\
	printf(BOLDCYAN"[SYST]: | RET: %d and ERR: %d |\n", syst_##ret, syst_##err);	\
	printf(BOLDPURPLE"[MINE]: | RET: %d and ERR: %d |\n", mine_##ret, mine_##err);	\
	printf("\n");										\

#define WRITE(var1, var2, var3, ret, err)	\
	errno = 0;													\
	syst_##ret = write(syst_##var1, syst_##var2, syst_##var3);	\
	syst_##err = errno;											\
	mine_##ret = ft_write(mine_##var1, mine_##var2, mine_##var3);			\
	mine_##err = errno;											\
	printf(BOLDCYAN"[SYST]: | RET: %d and ERR: %d |\n", syst_##ret, syst_##err);	\
	printf(BOLDPURPLE"[MINE]: | RET: %d and ERR: %d |\n", mine_##ret, mine_##err);	\
	printf("\n");										\

#define NL	\
	printf("\n"); \

#endif
