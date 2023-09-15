/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sorts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:02:54 by luizedua          #+#    #+#             */
/*   Updated: 2023/09/15 17:23:31 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_order(int *stack, int len)
{
	int	i;
	int	j;

	j = 0;
	while (j < len - 1)
	{
		i = j + 1;
		while (i < len)
		{
			if (stack[j] < stack[i])
				i++;
			else
				return (0);
		}
		j++;
	}
	return (1);
}

void	sort_less(t_stack *stacks)
{
	if (!check_order(stacks->stack_a, stacks->alength))
		sa(stacks);
}

void	sort_three(t_stack *stacks)
{
	while (!check_order(stacks->stack_a, stacks->alength))
	{
		if (stacks->stack_a[0] > stacks->stack_a[1])
			sa(stacks);
		else
			rra(stacks);
	}
}

void	sort_four(t_stack *stacks)
{
	int	i;

	i = 0;
	if (!check_order(stacks->stack_a, stacks->alength))
	{
		while (i <= stacks->alength)
		{
			if (stacks->stack_a[0] == 0)
			{
				pb(stacks);
				break ;
			}
			ra(stacks);
			i++;
		}
		sort_three(stacks);
		pa(stacks);
	}
}

void	sort_five(t_stack *stacks)
{
	int	i;

	if (!check_order(stacks->stack_a, stacks->alength))
	{
		i = 0;
		while (i <= stacks->alength)
		{
			if (stacks->stack_a[0] <= 1)
				pb(stacks);
			else if (stacks->blength != 2)
				ra(stacks);
			i++;
		}
		sort_three(stacks);
		if (check_order(stacks->stack_b, stacks->blength))
			sb(stacks);
		while (stacks->blength != 0)
			pa(stacks);
	}
}
