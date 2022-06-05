/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   giving_index.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 07:59:21 by abouazi           #+#    #+#             */
/*   Updated: 2022/05/24 04:55:12 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	compare(t_node *stack, int data)
{
	t_node	*tmp;
	int		index;

	index = 0;
	tmp = stack->next;
	if (tmp->data == data)
		return (-1);
	if (tmp->data < data)
		index++;
	tmp = tmp->next;
	while (tmp != stack)
	{
		if (tmp->data == data)
			return (-1);
		if (tmp->data < data)
			index++;
		tmp = tmp->next;
	}
	return (index);
}

void	give_index(t_node **stack, long long *check)
{
	t_node	*tmp;
	int		index;

	tmp = (*stack)->next;
	index = compare(tmp, tmp->data);
	tmp->index = index;
	tmp = tmp->next;
	while (tmp != (*stack)->next)
	{
		index = compare(tmp, tmp->data);
		if (index == -1)
		{
			*check = index;
			return ;
		}
		tmp->index = index;
		tmp = tmp->next;
	}
}
