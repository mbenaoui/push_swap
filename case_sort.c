/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   case_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 22:48:23 by mbenaoui          #+#    #+#             */
/*   Updated: 2022/04/23 23:23:01 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	case1(t_list *top_a, t_list *top_b, t_listt *p, int *tab)
{
	t_list	*node;

	node = ft_lstlast(top_a);
	if (top_b->content < top_a->content && top_b->content > node->content)
	{
		p[p->indx].pos_a = 0;
		if (p[p->indx].pos_b > 0)
			tab[p->indx] = p[p->indx].pos_b;
		else
			tab[p->indx] = nbr_pn(p[p->indx].pos_b);
		return (1);
	}
	return (0);
}

void	set_tab(int	*tab, t_listt *p)
{
	int	a;
	int	b;

	a = p[p->indx].pos_a;
	b = p[p->indx].pos_b;
	if ((a >= 0 && b >= 0) || (a <= 0 && b <= 0))
		tab[p->indx] = max_nb(nbr_pn(a), nbr_pn(b));
	else
		tab[p->indx] = nbr_pn(a) + nbr_pn(b);
}

int	case2(t_list *top_a, t_list *top_b, t_listt *p, int *tab)
{
	t_list	*node;
	int		j;

	node = top_a;
	j = 0;
	while (node->next)
	{
		if (top_b->content > node->content
			&& node->next->content > top_b->content)
		{
			if (j <= ft_lstsize(top_a) / 2)
				p[p->indx].pos_a = j + 1;
			else
				p[p->indx].pos_a = j + 1 - ft_lstsize(top_a);
			set_tab(tab, p);
			return (1);
		}
		j++;
		node = node->next;
	}
	return (0);
}

void	case3(t_list *top_a, t_listt *p, int *tab)
{
	int		j;
	int		x;
	int		y;

	j = max_stack(top_a);
	if (j <= ft_lstsize(top_a) / 2)
		p[p->indx].pos_a = j + 1;
	else
		p[p->indx].pos_a = j + 1 - ft_lstsize(top_a);
	x = p[p->indx].pos_a;
	y = p[p->indx].pos_b;
	if (x >= 0 && y >= 0)
		tab[p->indx] = max_nb(x, y);
	else if (x <= 0 && y <= 0)
		tab[p->indx] = max_nb(nbr_pn(x), nbr_pn(y));
	else
		tab[p->indx] = nbr_pn(x) + nbr_pn(y);
}
