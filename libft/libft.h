/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: canocent <canocent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:28:54 by canocent          #+#    #+#             */
/*   Updated: 2023/11/06 17:34:21 by canocent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdarg.h>

char	*ft_itoa(int n);
char	*ft_strchr(const char *str, int c);
char	*ft_strdup(const char *source);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *str, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

size_t	ft_strlen(const char *str);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);

void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_bzero(void *s, size_t n);

int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_tolower(int c);
int		ft_toupper(int i);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_memcmp(const void *pointer1, const void *pointer2, size_t n);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*ft_strchr_gnl(const char *str, int c);
char	*ft_strjoin_gnl(char *s1, char *s2);
size_t	ft_strlen_gnl(const char *str);

int		ft_printf(const char *str, ...);
int		ft_putadd(unsigned long n);
int		ft_putchar(char c);
int		ft_puthexa(unsigned int n, char c);
int		ft_putnbr(int n);
int		ft_putstr(char *s);
int		ft_putunsigned(unsigned int n);

#endif