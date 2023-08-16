/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:38:34 by luizedua          #+#    #+#             */
/*   Updated: 2023/08/16 14:22:37 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return(1);
	}
	return (0);
}

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

int	arg_checker(char **args, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i <= argc - 2)
	{
		j = i + 1;
		while (j <= argc -1)
		{
			if (ft_strcmp(args[i], args[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	t_stack	stacks;
	t_radix	radix;
	int		*aux;

	aux = 0;
	if (arg_checker(argv, argc) == 1)
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	init_stacks(&stacks, argv, argc);
	aux = normalize(&stacks);
	free(stacks.stack_a);
	stacks.stack_a = aux;
	push_swap(&stacks, &radix);
	free(stacks.stack_a);
	free(stacks.stack_b);
	return (0);
}
