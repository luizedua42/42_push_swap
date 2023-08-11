/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rots.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 10:22:10 by luizedua          #+#    #+#             */
/*   Updated: 2023/08/11 13:18:10 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_rev_rot(int *a, int len)
{
	int	i;
	int	temp;

	i = len;
	temp = a[i - 1];
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[0] = temp;
}

void	rra(t_stack *stacks)
{
	ft_rev_rot(stacks->stack_a, stacks->alength);
	write(1, "rra\n", 4);

}

void	rrb(t_stack *stacks)
{
	ft_rev_rot(stacks->stack_b, stacks->blength);
	write(1, "rrb\n", 4);

}

void	rrr(t_stack *stacks)
{
	ft_rev_rot(stacks->stack_a, stacks->alength);
	ft_rev_rot(stacks->stack_b, stacks->blength);
	write(1, "rrr\n", 4);

}
