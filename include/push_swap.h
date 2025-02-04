/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arturhar <arturhar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:26:31 by arturhar          #+#    #+#             */
/*   Updated: 2025/02/05 00:09:58 by arturhar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stddef.h>
# include <stdbool.h>
# include <limits.h>
# include "../libft/include/libft.h"

typedef struct s_stack
{
	int				num;
	int				index;
	struct s_stack	*next;
}				t_stack;

void		sa(t_stack **stack);
void		sb(t_stack **stack);
void		ss(t_stack **stack_a, t_stack **stack_b);
void		pa(t_stack **stack_a, t_stack **stack_b);
void		pb(t_stack **stack_a, t_stack **stack_b);
void		ra(t_stack **stack_a);
void		rb(t_stack **stack);
void		rr(t_stack **stack_a, t_stack **stack_b);
void		rra(t_stack **stack);
void		rra(t_stack **stack);
void		rrb(t_stack **stack);
void		rrr(t_stack **stack_a, t_stack **stack_b);
void		check(t_stack **stack);
void		push_to_stack(t_stack **stack, int num);
void		set_index(t_stack **stack);
void		add_to_stack(t_stack **stack, int argc, char **argv);
void		free_stack(t_stack **stack);
void		*ft_memmove(void *dest, const void *src, size_t n);
void		free_split(char **str);
void		sort_2(t_stack **stack);
void		sort_3(t_stack **stack);
void		sort_5(t_stack **stack_a, t_stack **stack_b, int size);
void		sort(t_stack **stack_a, t_stack **stack_b, int size);
void		push_back(t_stack **stack_a, t_stack **stack_b, int size);
void		butterfly(t_stack **stack_a, t_stack **stack_b, int size);
void		print_error(void);

// long long	ft_atoi(const char *str);
int			ft_isdigit(int c);
int			is_sorted(t_stack *head);
int			ft_sqrt(int nb);
int			get_pos(t_stack *stack, int i);
int			stack_length(t_stack **stack);

bool		validator(int argc, char **argv);
bool		is_all_num(char **str);

char		**ft_split(char const *s, char c);
char		*ft_strchr(const char *str, int c);

size_t		ft_strlen(const char *str);
t_stack		*ft_lstnew(int num);
#endif
