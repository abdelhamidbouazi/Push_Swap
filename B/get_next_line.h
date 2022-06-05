/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 21:31:24 by abouazi           #+#    #+#             */
/*   Updated: 2022/05/24 04:49:09 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# define BUFFER_SIZE 1

char	*ft_check(char *sv);
char	*get_next_line(int fd);
char	*ft_strjoin1(char *s1, char *s2);
int		ft_strlen1(const char *str);
int		ft_strsh(char *str);
char	*readl(char *save, int fd);
char	*ft_rest(char *rst);

#endif