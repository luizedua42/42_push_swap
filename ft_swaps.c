/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swaps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:28:47 by luizedua          #+#    #+#             */
/*   Updated: 2023/08/11 13:17:12 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(int *stack)
{
	int	aux;

	aux = stack[0];
	stack[0] = stack[1];
	stack[1] = aux;
}

void	sa(t_stack *stacks)
{
	if (stacks->alength < 2)
		return ;
	ft_swap(stacks->stack_a);
	write(1, "sa\n", 3);
}

void	sb(t_stack *stacks)
{
	if (stacks->blength < 2)
		return ;
	ft_swap(stacks->stack_b);
	write(1, "sb\n", 3);

}

void	ss(t_stack *stacks)
{
	if (stacks->alength < 2)
		return ;
	if (stacks->blength < 2)
		return ;
	ft_swap(stacks->stack_a);
	ft_swap(stacks->stack_b);
	write(1, "ss\n", 3);

}
