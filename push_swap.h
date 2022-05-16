/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbenaoui <mbenaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 16:02:43 by mjalloul          #+#    #+#             */
/*   Updated: 2022/04/23 23:23:35 by mbenaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# define BUFFER_SIZE 3

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>

typedef struct s_list
{
	int				content;
	int				keep;
	struct s_list	*next;
	struct s_list	*prev;
}t_list;

typedef struct s_listt
{
	int	pos_a;
	int	pos_b;
	int	indx;
	int	size;
}t_listt;

size_t	ft_strlen(char *str);
size_t	ft_strlentab(char **str);
char	**ft_split(char *s, char c);
int		ft_isdigit(int c);
long	ft_atoi(const char *str);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
void	ft_sa(t_list **stacka, int len);
void	ft_sb(t_list **stackb, int len);
void	ft_ss(t_list **stacka, t_list **stackb, int len);
void	ft_ra(t_list **stacka, int len);
void	ft_rb(t_list **stackb, int len);
void	ft_rr(t_list **stacka, t_list **stackb, int len);
void	ft_rra(t_list **stacka, int len);
void	ft_rrb(t_list **stackb, int len);
void	ft_rrr(t_list **stacka, t_list **stackb, int len);
void	ft_pa(t_list **linked, t_list **stackb, int p);
void	ft_pb(t_list **linked, t_list **stackb, int p);
int		check_error(char **b, char *c);
char	*ft_strdup_line(const char *s1);
int		chack_espace(char *b);
int		*tran_linked_tab(t_list *stacka);
int		*the_longest_chain(t_list **b, int *tab1);
size_t	ft_strlentab(char **str);
char	**read_arg(int ar, char **argc);
int		max_stack(t_list *temp);
int		case1(t_list *stacka, t_list *stackb, t_listt *p, int *tab);
int		case2(t_list *stacka, t_list *stackb, t_listt *p, int *tab);
void	case3(t_list *top_a, t_listt *p, int *tab);
void	separet_lis(t_list **top_a, t_list **top_b, int *list);
void	position_ab(t_list **stacka, t_list **stackb);
int		max_tab(t_list *b);
int		privs(t_list **top_a, int *list);
void	ft_sort_3(t_list **stacka, t_list **stackb);
int		pos_by_node(t_list *top, t_list *node);
void	finl_sort(t_list **stacka);
int		nbr_pn(int x);
int		max_nb(int a, int b);
void	apply_sort(t_list **stacka, t_list **stackb, t_listt *p, int min_tab);
/*GNL*/
size_t	ft_strlen( char *s);
char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strchr(char *s, int c);
int		ft_strcmp( char *s1, char *s2);
char	*get_next_line(int fd);

#endif
