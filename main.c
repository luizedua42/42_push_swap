/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:38:34 by luizedua          #+#    #+#             */
/*   Updated: 2023/08/15 16:04:40 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	init_stacks(t_stack *stacks, char **args, int size)
{
	int	c;
	int	i;

	c = 0;
	i = 1;
	stacks->alength = size - 1;
	stacks->blength = 0;
	stacks->stack_a = ft_calloc(size - 1, sizeof(int));
	stacks->stack_b = ft_calloc(size - 1, sizeof(int));
	while (c < stacks->alength)
	{
		stacks->stack_a[c] = ft_atoi(args[i]);
		c++;
		i++;
	}
}

int	main(int argc, char *argv[])
{
	t_stack	stacks;
	t_radix	radix;
	int		*aux;

	aux = 0;
	init_stacks(&stacks, argv, argc);
	aux = normalize(&stacks);
	free(stacks.stack_a);
	stacks.stack_a = aux;
	push_swap(&stacks, &radix);
	free(stacks.stack_a);
	free(stacks.stack_b);
	return (0);
}
