/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rots.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:22:10 by luizedua          #+#    #+#             */
/*   Updated: 2023/08/11 11:39:08 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	ft_rot(int *a, int len)
{
	int	i;
	int	temp;

	i = 0;
	temp = a[0];
	while (i < len - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i] = temp;
}

void	ra(t_stack *stacks)
{
	ft_rot(stacks->stack_a, stacks->alength);
	write(1, "ra\n", 3);
}

void	rb(t_stack *stacks)
{
	ft_rot(stacks->stack_b, stacks->blength);
	write(1, "rb\n", 3);
}

void	rr(t_stack *stacks)
{
	ft_rot(stacks->stack_a, stacks->alength);
	ft_rot(stacks->stack_b, stacks->blength);
	write(1, "rr\n", 3);
}
