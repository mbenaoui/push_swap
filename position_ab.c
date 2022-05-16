/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position_ab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 00:03:46 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 23:22:34 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	min_tabl(int *tab, int len)
{
	int	i;
	int	j;
	int	min;

	i = 1;
	j = 0;
	min = tab[0];
	while (i < len)
	{
		if (min > tab[i])
		{
			min = tab[i];
			j = i;
		}
		i++;
	}
	return (j);
}

void	ft_pos_b(t_list **stackb, t_listt *p)
{
	int	i;
	int	j;

	i = 0;
	j = ft_lstsize((*stackb));
	while (i < j)
	{
		if (i <= j / 2)
			p[i].pos_b = i;
		else
			p[i].pos_b = i - j;
		i++;
	}
}

void	ft_pos_a(t_list *top_a, t_list *top_b, t_listt *p, int *tab)
{
	p->indx = 0;
	while (top_b)
	{
		if (case1(top_a, top_b, p, tab))
		{
			p->indx++;
			top_b = top_b->next;
			continue ;
		}
		if (case2(top_a, top_b, p, tab))
		{
			p->indx++;
			top_b = top_b->next;
			continue ;
		}
		case3(top_a, p, tab);
		p->indx++;
		top_b = top_b->next;
	}
}

void	position_ab(t_list **stacka, t_list **stackb)
{
	int		*tab;
	t_listt	*p;
	int		i;
	int		min_tab;

	i = 0;
	tab = malloc(sizeof(int) * ft_lstsize((*stackb)));
	p = malloc(sizeof(t_listt) * ft_lstsize((*stackb)));
	ft_pos_b(stackb, p);
	ft_pos_a(*stacka, *stackb, p, tab);
	min_tab = 0;
	min_tab = min_tabl(tab, ft_lstsize((*stackb)));
	apply_sort(stacka, stackb, p, min_tab);
	free (p);
	free (tab);
}
