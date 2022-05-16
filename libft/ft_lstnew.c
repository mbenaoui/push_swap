/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 20:57:37 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/10 17:13:58 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*p;

	p = (t_list *) malloc(sizeof(t_list));
	if (!p)
		return (0);
	p->content = content;
	p->next = NULL;
	p->prev = NULL;
	return (p);
}
