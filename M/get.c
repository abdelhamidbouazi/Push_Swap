/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 05:01:12 by abouazi           #+#    #+#             */
/*   Updated: 2022/05/24 05:02:35 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	get_index(t_node *stack, int nm)
{
	int	index;

	index = 0;
	while (stack)
	{
		if (stack->data != nm)
			index++;
		else if (stack->data == nm)
		{
			index++;
			return (index);
		}
		stack = stack->next;
	}
	return (index);
}

int	get_m(t_node *stack)
{
	int	max;

	max = stack->data;
	while (stack)
	{
		if (stack->data > max)
			max = stack->data;
		stack = stack->next;
	}
	return (max);
}

int	get_max(t_node *stack)
{
	int	max;

	max = stack->index;
	while (stack)
	{
		if (stack->index > max)
			max = stack->index;
		stack = stack->next;
	}
	return (max);
}

int	get_min(t_node *stack)
{
	int	min;

	min = stack->data;
	while (stack)
	{
		if (stack->data < min)
			min = stack->data;
		stack = stack->next;
	}
	return (min);
}

int	get_size(t_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		i++;
		stack = stack->next;
	}
	return (i);
}
