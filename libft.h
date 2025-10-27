/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkerdad <wkerdad@student.42.fr>                   */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:04:00 by wkerdad           #+#    #+#             */
/*   Updated: 2025/10/18 12:28:36 by wkerdad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>

// memory manupilation
void *ft_memmove(void *dest, const void *src, size_t count);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
void *ft_calloc(size_t nmemb, size_t size);

// characters
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);

// string manupilation
char *ft_strchr(const char *str, int c);
size_t ft_strlen(const char *str);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlcat(char *dest, const char *src, size_t size);
int ft_tolower(int c);
int ft_toupper(int c);
char *ft_strrchr(const char *s, int c);
char **ft_split(char const *s, char c);
int		ft_atoi(const char *nptr);
char *ft_itoa(int n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strdup(const char *s);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
//FD
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
#endif
