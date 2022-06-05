/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 22:13:45 by abouazi           #+#    #+#             */
/*   Updated: 2022/05/24 05:05:09 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pop(t_node **stack)
{
	t_node	*tmp;

	if (!stack || !*stack)
		return ;
	tmp = (*stack)->next;
	free(*stack);
	(*stack) = tmp;
}

void	free_all(t_node **stack)
{
	while (*stack)
		pop(stack);
	free(*stack);
}

void	put_error(char *msg)
{
	while (*msg)
		write(2, msg++, 1);
	exit(1);
}
