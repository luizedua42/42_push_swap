#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

//INCLUDES
# include "libft/libft.h"

//Stack_struct
typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	alength;
	int	blength;
}	t_stack;

typedef struct s_radix
{
	int	bit_period;
	int	bit_size;
	int	digit;
	int	stack_size;
}	t_radix;

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
void	sort_less(t_stack *stacks);
void	sort_three(t_stack *stacks);
int		*normalize(t_stack *stacks);
void	sort_fiveish(t_stack *stacks);
void	push_swap(t_stack *stacks, t_radix *radix);


#endif