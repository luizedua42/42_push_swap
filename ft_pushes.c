/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushes.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 11:05:22 by luizedua          #+#    #+#             */
/*   Updated: 2023/08/11 11:39:49 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_pushes(int *src, int *dst, int src_len, int dst_len)
{
	int	i;
	int	temp_len;

	i = 0;
	if (src_len == 0)
		return ;
	temp_len = dst_len;
	while (temp_len > i)
	{
		dst[temp_len] = dst[temp_len - 1];
		temp_len--;
	}
	dst[0] = src[0];
	while (i < src_len - 1)
	{
		src[i] = src[i + 1];
		i++;
	}
}

void	pa(t_stack *stacks)
{
	ft_pushes(stacks->stack_b, stacks->stack_a, stacks->blength,
		stacks->alength);
	stacks->blength--;
	stacks->alength++;
	write(1, "pa\n", 3);
}

void	pb(t_stack *stacks)
{
	ft_pushes(stacks->stack_a, stacks->stack_b, stacks->alength,
		stacks->blength);
	stacks->alength--;
	stacks->blength++;
	write(1, "pb\n", 3);
}
