/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:38:34 by luizedua          #+#    #+#             */
/*   Updated: 2023/09/13 23:57:11 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (1);
	}
	return (0);
}

static int	init_stacks(t_stack *stacks, char **args, int size)
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
	i = -1;
	while (++i < stacks->alength - 1)
	{
		c = i;
		while (++c < stacks->alength)
			if (stacks->stack_a[i] == stacks->stack_a[c])
				return (1);
	}
	return (0);
}

int	arg_checker(char **args, int argc)
{
	int	i;
	int	j;

	i = 1;
	while (i <= argc - 2)
	{
		j = i + 1;
		while (j <= argc - 1)
		{
			if (ft_strcmp(args[i], args[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	alpha_checker(char *s)
{
	int	i;

	i = 0;
	if (s[i] == '\0')
		return (2);
	if ((s[0] == '-' || s[0] == '+') && s[1] == '\0')
		return (2);
	if (s[0] == '-' || s[0] == '+')
		i++;
	while (s[i] != '\0')
	{
		if (!ft_isdigit(s[i]) || ft_isspace(s[i]))
			return (1);
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
	if (argc < 2)
		return (2);
	if (checker_checker(argv, argc))
	{
		ft_putstr_fd("Error\n", 2);
		return (1);
	}
	if (init_stacks(&stacks, argv, argc))
	{
		ft_putstr_fd("Error\n", 2);
		return (ft_free(stacks));
	}
	aux = normalize(&stacks);
	free(stacks.stack_a);
	stacks.stack_a = aux;
	if (!check_order(stacks.stack_a, stacks.alength))
		push_swap(&stacks, &radix);
	ft_free(stacks);
	return (0);
}
