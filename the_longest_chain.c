/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   the_longest_chain.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 16:51:51 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 23:19:37 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <string.h>

t_list	*get_node(t_list *b, int c)
{
	int	i;

	i = 0;
	while (b && i < c)
	{
		b = b->next;
		i++;
	}
	if (b)
		return (b);
	return (0);
}

void	*ft_memset(int *b, int c, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		b[i] = c;
		i++;
	}
	return (b);
}

int	max_of_arr(int *list, int size, int last_max)
{
	int	i;
	int	j;
	int	m;

	i = 1;
	j = 0;
	m = list[0];
	while (i < size)
	{
		if (m <= list[i] && list[i] < last_max)
		{
			m = list[i];
			j = i;
		}
		i++;
	}
	return (j);
}

int	*ft_test(t_list *stacka)
{
	t_list	*prev;
	t_list	*next;
	int		*list;
	int		i;
	int		j;

	i = 1;
	next = stacka->next;
	list = malloc(sizeof(int) * ft_lstsize(stacka));
	list = ft_memset(list, 1, ft_lstsize(stacka));
	while (next)
	{
		prev = stacka;
		j = 0;
		while (i != j)
		{
			if (next->content > prev->content && list[i] < list[j] + 1)
				list[i] += 1;
			j++;
			prev = prev->next;
		}
		next = next->next;
		i++;
	}
	return (list);
}

int	*the_longest_chain(t_list **b, int *tab1)
{
	int	*tab;
	int	*tab2;
	int	i;
	int	j;

	j = 0;
	tab = ft_test((*b));
	i = max_of_arr(tab, ft_lstsize((*b)), ft_lstsize((*b)) + 1);
	tab1 = (int *)malloc(sizeof(int) * (tab[i] + 1));
	tab2 = tran_linked_tab((*b));
	tab1[0] = tab[i];
	j = tab[i];
	while (j)
	{
		tab1[j] = tab2[i];
		i = max_of_arr(tab, i, tab[i]);
		j--;
	}
	free (tab);
	free (tab2);
	return (tab1);
}
