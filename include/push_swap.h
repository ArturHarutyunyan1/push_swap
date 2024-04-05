#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdbool.h>

typedef struct s_stack
{
    int num;
    int index;
    struct s_stack *next;
}t_stack;

void	*ft_memmove(void *dest, const void *src, size_t n);
bool validator(int argc, char **argv);
bool is_all_num(char **str);
bool has_duplicate_string(char **str);
bool has_duplicate(int argc, char **argv);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *str, int c);
int	ft_isdigit(int c);
int ft_strcmp(const char *str1, const char *str2);
size_t	ft_strlen(const char *str);

#endif