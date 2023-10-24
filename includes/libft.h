/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:52:34 by lumedeir          #+#    #+#             */
/*   Updated: 2023/10/16 11:43:52 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

// Get next line

# define BUFFER_SIZE 10

char			*get_next_line(int fd);
char			*ft_read_line(int fd, char *str);
char			*ft_get_line(char *str);
char			*ft_next_line(char *str);

// Printf

# define G_HEX_BASE_LOWER "0123456789abcdef"
# define G_HEX_BASE_UPPER "0123456789ABCDEF"

int				ft_printf(const char *str, ...);
int				ft_convert_to_char(char s);
int				ft_convert_to_decimal(int number);
int				ft_convert_to_lowhexa(unsigned int number);
int				ft_convert_to_pointer(unsigned long *pointer);
int				ft_convert_to_str(char *str);
int				ft_convert_to_uphexa(unsigned int number);
int				ft_convert_to_udecimal(int number);
char			*ft_unsigned_itoa(unsigned int n);
char			*ft_itoa_base(size_t n, char *base);

// Libft
int				ft_atoi(const char *str);
long			ft_atol(char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
char			*ft_itoa(int n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *str, int c, size_t n);
void			ft_putchar_fd(char c, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int nb, int fd);
void			ft_putstr_fd(char *s, int fd);
char			**ft_split(char const *s, char c);
char			*ft_strchr(const char *str, int c);
char			*ft_strdup(const char *str);
void			ft_striteri(char *s, void (*f)(unsigned int, char*));
char			*ft_strjoin(char *s1, char *s2);
unsigned int	ft_strlcat(char *dest, const char *src, size_t size);
unsigned int	ft_strlcpy(char *dest, const char *src, size_t size);
int				ft_strlen(const char *str);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strncmp(const char *str1, const char *str2, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_strrchr(const char *str, int c);
char			*ft_strtrim(char *s1, char *set);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_toupper(int c);
int				ft_tolower(int c);

#endif
