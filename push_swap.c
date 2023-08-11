/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:46:54 by luizedua          #+#    #+#             */
/*   Updated: 2023/08/11 14:58:30 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	get_period(int period)
{
	int	n_period;

	n_period = 0;
	while (period != 0)
	{
		period = period / 2;
		n_period++;
	}
	return (n_period);
}

// static void	little_sort(t_stack *stacks)
// {
// 	if (stacks->alength < 3)
// 		sort_less(stacks);
// 	else if (stacks->alength == 3)
// 		sort_three(stacks);
// 	else
// 		sort_fiveish(stacks);
// }

void	push_swap(t_stack *stacks, t_radix *radix)
{
	radix->stack_size = stacks->alength;
	if (radix->stack_size == 5)
	{
		sort_fiveish (stacks);
		return ;
	}
	radix->bit_period = 0;
	radix->bit_size = get_period(radix->stack_size);
	while (radix->bit_period < radix->bit_size)
	{
		radix->digit = 0;
		while (radix->digit < radix->stack_size)
		{
			if ((stacks->stack_a[0] >> radix->bit_period & 1) == 0)
				pb(stacks);
			else
				ra(stacks);
			radix->digit++;
		}
		while (stacks->blength > 0)
			pa(stacks);
		radix->bit_period++;
	}
}

int	*normalize(t_stack *stacks)
{
	int	*aux;
	int	i;
	int	j;
	int	n;

	n = 0;
	i = 0;
	j = 0;
	aux = ft_calloc(stacks->alength, sizeof(int));
	if (!aux)
		return (0);
	while (j < stacks->alength)
	{
		i = 0;
		n = 0;
		while (i < stacks->alength)
		{
			if (stacks->stack_a[j] > stacks->stack_a[i])
				n++;
			i++;
		}
		aux[j] = n;
		j++;
	}
	return (aux);
}