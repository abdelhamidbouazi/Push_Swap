/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 03:10:10 by abouazi           #+#    #+#             */
/*   Updated: 2022/05/24 04:49:23 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin1(char *s1, char *s2)
{
	char	*nstr;
	int		i;
	int		s;
	int		l;

	i = 0;
	s = 0;
	l = 0;
	if (!s2)
		return (NULL);
	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	nstr = malloc(ft_strlen1(s1) + ft_strlen1(s2) +1);
	if (!nstr)
		return (NULL);
	while (s1[s])
		nstr[i++] = s1[s++];
	while (s2[l])
		nstr[i++] = s2[l++];
	nstr[i] = '\0';
	free(s1);
	return (nstr);
}

int	ft_strsh(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen1(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
