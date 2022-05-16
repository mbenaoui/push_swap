/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errore.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 17:06:16 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/24 00:13:36 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_error1(char **b)
{
	int	i;
	int	j;
	int	k;

	j = ft_strlentab(b);
	i = 0;
	while (i < j)
	{
		k = i + 1;
		while (k < j)
		{
			if (ft_atoi(b[i]) == ft_atoi(b[k]) || ft_atoi(b[k]) > 2147483647
				|| ft_atoi(b[k]) < -2147483648)
				return (1);
			k++;
		}
		i++;
	}
	return (0);
}

int	check_error2(char *b)
{
	int	i;

	i = 0;
	while (b[i])
	{
		if (b[i] == '+' || b[i] == '-')
		{
			if (b[i + 1] == ' ')
				return (1);
			if (b[i - 1] >= 48 && b[i - 1] <= 57)
				return (1);
			i++;
		}
		if (ft_isdigit(b[i]) == 0 || ft_atoi(b) > 2147483647
			|| ft_atoi(b) < -2147483648)
			return (1);
		i++;
	}
	return (0);
}

int	check_error(char **b, char *c)
{
	if (check_error1(b) == 1 || check_error2(c) == 1)
	{
		write(2, "error ", 6);
		return (1);
	}
	return (0);
}
