/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 13:46:54 by luizedua          #+#    #+#             */
/*   Updated: 2023/09/10 21:53:16 by luizedua         ###   ########.fr       */
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

static void	little_sort(t_stack *stacks, int len)
{
	if (len < 3)
		sort_less(stacks);
	else if (len == 3)
		sort_three(stacks);
	else if (len == 4)
		sort_four(stacks);
	else
		sort_five(stacks);
}

void	push_swap(t_stack *stacks, t_radix *radix)
{
	radix->stack_size = stacks->alength;
	if (radix->stack_size <= 5)
	{
		little_sort (stacks, radix->stack_size);
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

int	checker_checker(char **argv, int argc)
{
	int	i;

	i = 1;
	while (i <= argc - 1)
	{
		if (ft_atoi(argv[i]) > MAX_INT || ft_atoi(argv[i]) < MIN_INT)
			return (1);
		i++;
	}
	i = 1;
	if (arg_checker(argv, argc) == 1)
		return (1);
	while (i <= argc - 1)
	{
		if (alpha_checker(argv[i]))
			return (1);
		i++;
	}
	return (0);
}
