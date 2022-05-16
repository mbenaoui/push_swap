/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 18:00:04 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/23 01:05:52 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	*ft_strdup( char *s1)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (!p)
		return (0);
	while (i)
	{
		p[j] = s1[j];
		i--;
		j++;
	}
	p[j] = '\0';
	return (p);
}
