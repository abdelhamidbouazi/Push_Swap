/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 23:11:15 by abouazi           #+#    #+#             */
/*   Updated: 2022/05/24 04:54:23 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_isdigit(int n)
{	
	if (n >= '0' && n <= '9')
		return (1);
	return (0);
}

int	arg_valid(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (-1);
	while (str[i])
	{
		if (str[i] != '-' && str[i] != ' ' && str[i] != '+'
			&& !(ft_isdigit(str[i])))
			return (-1);
		if (str[i] == '-' && str[i] != '+' && !(ft_isdigit(str[i + 1])))
			return (-1);
		i++;
	}
	return (0);
}

char	*args_to_string(const char **argv)
{
	int		i;
	char	*str;
	char	*tmp;

	i = 1;
	str = (char *)malloc(sizeof(char));
	while (argv[i])
	{
		if (arg_valid(argv[i]) == -1)
			put_error("Error\n");
		tmp = ft_strjoin(str, argv[i]);
		free(str);
		str = ft_strjoin(tmp, " ");
		free(tmp);
		i++;
	}
	return (str);
}

int	is_duplicate(t_node *node, int num)
{
	while (node)
	{
		if (node->data == num)
			return (-1);
		node = node->next;
	}
	return (0);
}

void	fill_stack(t_node **stack, char *str)
{
	int		size;
	t_node	*node;
	char	**tab;
	int		num;

	tab = ft_split(str, ' ');
	size = 0;
	while (tab[size])
		size++;
	while (--size >= 0)
	{
		num = ft_atoi(tab[size]);
		if (is_duplicate(*stack, num) == -1)
			put_error("Error\n");
		node = create(num);
		add(node, stack);
	}
}
