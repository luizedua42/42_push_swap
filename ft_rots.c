/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rots.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:22:10 by luizedua          #+#    #+#             */
/*   Updated: 2023/08/04 15:02:38 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void ft_rot(int *a, int len)
{
	int i;
	int temp;
	
	i = 0;
	temp = a[0];
	while (i < len)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i - 1] = temp;
}

void ra(t_stack *stacks)
{
	ft_rot(stacks->stack_a, stacks->alength);
}

void rb(t_stack *stacks)
{
	ft_rot(stacks->stack_b, stacks->blength);
}

void rr(t_stack *stacks)
{
	ft_rot(stacks->stack_a, stacks->alength);
	ft_rot(stacks->stack_b, stacks->blength);
}
