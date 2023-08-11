/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tiny_sorts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:02:54 by luizedua          #+#    #+#             */
/*   Updated: 2023/08/11 15:35:44 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_order(t_stack *stacks)
{
	int	i;
	int	j;

	j = 0;
	while (j < stacks->alength - 1)
	{
		i = j + 1;
		while (i < stacks->alength)
		{
			if (stacks->stack_a[j] < stacks->stack_a[i])
				i++;
			else
				return(0);
		}
		j++;
	}
	return (1);
}

void sort_less(t_stack *stacks)
{
	if (!check_order(stacks))
		sa(stacks);
}

void sort_three(t_stack *stacks)
{
	while (!check_order(stacks))
	{
		if (stacks->stack_a[0] > stacks->stack_a[1])
			sa(stacks);
		else
			rra(stacks);
	}
}

void sort_fiveish(t_stack *stacks)
{
	if (stacks->alength == 4)
	{
		return ;
	}
	if(stacks->alength == 5)
	{
		if (!check_order(stacks))
		{
			pb(stacks);
			pb(stacks);
			sort_three(stacks);
			
		}
	}
}
