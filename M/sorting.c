/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 05:19:42 by abouazi           #+#    #+#             */
/*   Updated: 2022/05/24 04:56:04 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_node *stack, char *str)
{
	int	tmp;

	if (!stack || !(stack->next))
		return ;
	tmp = stack->data;
	stack->data = stack->next->data;
	stack->next->data = tmp;
	tmp = stack->index;
	stack->index = stack->next->index;
	stack->next->index = tmp;
	if (str)
		ft_putstr(str);
}

void	rotate(t_node *stack, char *str)
{
	if (!stack || !(stack->next))
		return ;
	while (stack)
	{
		swap(stack, 0);
		stack = stack->next;
	}
	if (str)
		ft_putstr(str);
}

void	r_rotate(t_node *stack, char *str)
{
	if (!stack || !(stack->next))
		return ;
	r_rotate(stack->next, 0);
	swap(stack, 0);
	if (!str)
		return ;
	if (str)
		ft_putstr(str);
}
