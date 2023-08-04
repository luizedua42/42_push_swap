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

#endif