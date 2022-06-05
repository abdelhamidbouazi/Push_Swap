/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 15:29:22 by abouazi           #+#    #+#             */
/*   Updated: 2022/05/24 21:13:26 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_node **stack1, t_node **stack2, char *str)
{
	t_node	*tmp;

	if (!stack2 || !stack1 || !*stack1)
		return ;
	tmp = (*stack1)->next;
	(*stack1)->next = (*stack2);
	*stack2 = (*stack1);
	*stack1 = tmp;
	if (str)
		ft_putstr(str);
}

void	push_all_to_a(t_node **stack_a, t_node **stack_b)
{
	while (*stack_b != NULL)
		push(stack_b, stack_a, "pa");
}
