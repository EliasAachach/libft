/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elaachac <elaachac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/07 12:59:18 by elaachac          #+#    #+#             */
/*   Updated: 2019/11/08 15:52:30 by elaachac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <string.h>
# include <strings.h>
# include <stdio.h>
# include <stdlib.h>
# include <ctype.h>

int             ft_atoi(const char *str);
char            ft_toupper(int c);
char            ft_tolower(int c);
char            *ft_substr(char const *s, unsigned int start, size_t len);
char            *ft_strtrim(char *s);
char            *ft_strnstr(const char *haystack,const char *needle, size_t len);
int             ft_strncmp(const char *s1, const char *s2,size_t n);
size_t          ft_strlen(const char *str);
char            *ft_strcat(char *dest, char *src);
char            *ft_strdup(const char *s1);
char            *ft_strchr(const char *s, int c);
int             **ft_split(char *str, char *charset);
void            *ft_memset(void *b, int c, size_t len);
void            *ft_memcpy(void *dest, const void *src, size_t n);
char            *ft_itoa(int nbr);
int             ft_isprint(int c);
int             ft_isdigit(int c);
int             ft_isascii(int c);
int             ft_isalnum(int c);
int             ft_isalpha(int c);
void            *ft_calloc(size_t count, size_t size);
void            ft_bzero(void *s, size_t n);

#endif