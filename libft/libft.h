/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinto-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:01:45 by fpinto-c          #+#    #+#             */
/*   Updated: 2022/02/14 18:04:48 by fpinto-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

//-\\-//-\\-//-\\-//-\\-//-\\-//-\\-INCLUDES-//-\\-//-\\-//-\\-//-\\-//-\\-//-\\

#include <stdlib.h>

//-\\-//-\\-//-\\-//-\\-//-\\-FUNCTIONS_PROTOTYPES-//-\\-//-\\-//-\\-//-\\//-\\

//MANDATORY
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t  ft_strlen(const char *s);
void *	ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void *	ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *	ft_memmove(void *des, const void *src, size_t len);
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
int	ft_toupper(int c);
int	ft_tolower(int c);
char *	ft_strchr(const char *s, int c);
char *	ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void * ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void*s2, size_t n);
char *	ft_strnstr(const char *haystack, const char *needle, size_t len);
int	ft_atoi(const char *str);
void *	ft_calloc(size_t count, size_t size);
char *	ft_strdup(const char *s1);

//EXTRA

#endif
