/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swaps.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 15:28:47 by luizedua          #+#    #+#             */
/*   Updated: 2023/08/04 15:02:17 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(int *stack)
{
	int aux;
	
	aux = stack[0];
	stack[0] = stack[1];
	stack [1]= aux;
}

void	sa(t_stack *stacks)
{
	if (stacks->alength < 2)
		return ;
	ft_swap(stacks->stack_a);
}

void	sb(t_stack *stacks)
{
	if (stacks->blength < 2)
		return ;
	ft_swap(stacks->stack_b);
}

void	ss(t_stack *stacks)
{
	if (stacks->alength < 2)
		return ;
	if (stacks->blength < 2)
		return ;
	ft_swap(stacks->stack_a);
	ft_swap(stacks->stack_b);
}