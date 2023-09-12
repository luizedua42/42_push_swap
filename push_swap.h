/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 16:01:41 by luizedua          #+#    #+#             */
/*   Updated: 2023/09/10 22:01:23 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define MAX_INT 2147483647
# define MIN_INT -2147483648
//INCLUDES
# include "libft/libft.h"

//Stack_struct
typedef struct s_radix
{
	int	bit_period;
	int	bit_size;
	int	digit;
	int	stack_size;
}	t_radix;

typedef struct s_stack
{
	int		*stack_a;
	int		*stack_b;
	int		alength;
	int		blength;
	t_radix	*radix;
}	t_stack;

//functions
void	sa(t_stack *stacks);
void	sb(t_stack *stacks);
void	ss(t_stack *stacks);
void	ra(t_stack *stacks);
void	rb(t_stack *stacks);
void	rr(t_stack *stacks);
void	pa(t_stack *stacks);
void	pb(t_stack *stacks);
void	rra(t_stack *stacks);
void	rrb(t_stack *stacks);
void	rrr(t_stack *stacks);
int		alpha_checker(char *s);
void	sort_less(t_stack *stacks);
void	sort_four(t_stack *stacks);
void	sort_five(t_stack *stacks);
void	sort_three(t_stack *stacks);
int		*normalize(t_stack *stacks);
int		check_order(int *stack, int len);
int		arg_checker(char **args, int argc);
int		checker_checker(char **argv, int argc);
void	push_swap(t_stack *stacks, t_radix *radix);

#endif