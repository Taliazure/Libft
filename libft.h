#ifndef LIBFT_H

# define LIBFT_H

#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

size_t	ft_strlen(const char *a);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
void	*ft_calloc(size_t nmemb, size_t size);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strdup(const char *str);
void	ft_putnbr_fd(int n, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_bzero(void *s, size_t n);

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;



#endif
