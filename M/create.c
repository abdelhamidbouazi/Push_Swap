/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:35:08 by abouazi           #+#    #+#             */
/*   Updated: 2022/05/24 04:54:39 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_node	*create(int n)
{
	t_node	*node;

	node = (t_node *)malloc(sizeof(t_node));
	node->data = n;
	node->next = NULL;
	return (node);
}
