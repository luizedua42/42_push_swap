/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luizedua <luizedua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:38:34 by luizedua          #+#    #+#             */
/*   Updated: 2023/08/04 14:45:05 by luizedua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"
#include <stdio.h>



int main(int argc, char *argv[])
{
	t_stack stacks;
	int	c;
	int	i;
	
	c = 0;
	i = 1;
	stacks.alength = argc - 1;
	stacks.blength = 0;
	stacks.stack_a = ft_calloc(argc - 1, sizeof(int));
	stacks.stack_b = ft_calloc(argc - 1, sizeof(int));
	while (c < stacks.alength)
	{
		stacks.stack_a[c] = ft_atoi(argv[i]);
		c++;
		i++;
	}
	c = 0;
	while (c < argc - 1)
	{
		printf("pos a[%i]: %i	|	", c, stacks.stack_a[c]);
		printf("pos b[%i]: %i\n", c, stacks.stack_b[c]);
		c++;
	}
	printf("pushing b 3 times ...\n");
	pb(&stacks);
	pb(&stacks);
	pb(&stacks);
	sleep(1);
	c = 0;
	while (c < argc - 1)
	{
		printf("pos a[%i]: %i	|	", c, stacks.stack_a[c]);
		printf("pos b[%i]: %i\n", c, stacks.stack_b[c]);
		c++;
	}
	printf("pushing b 3 times ...\n");
	pb(&stacks);
	pb(&stacks);
	pb(&stacks);
	sleep(1);
	c = 0;
	while (c < argc - 1)
	{
		printf("pos a[%i]: %i	|	", c, stacks.stack_a[c]);
		printf("pos b[%i]: %i\n", c, stacks.stack_b[c]);
		c++;
	}
	printf("pushing b...\n");
	pb(&stacks);
	sleep(1);
	c = 0;
	while (c < argc - 1)
	{
		printf("pos a[%i]: %i	|	", c, stacks.stack_a[c]);
		printf("pos b[%i]: %i\n", c, stacks.stack_b[c]);
		c++;
	}
	return (0);
}
