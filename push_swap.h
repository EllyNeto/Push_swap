/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:44:31 by eneto             #+#    #+#             */
/*   Updated: 2024/08/05 14:10:35 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./lib/libft.h"
# include "stdbool.h"

typedef struct s_list
{
	int				val;
	struct s_list	*next;
}	t_list;
//Sorts
void		avalue_nb(t_list **a, t_list **b);
int		sort_two(t_list **a);
// VERIFS
bool		duplicate(t_list **stack);
bool		is_not_sorted(t_list **stack);
void		free_stack(t_list **stack_a);
void		free_arg(char **arg_split);
void		message_error(t_list **a, char **arg_split);
int			count_arg(char **arg_split);
int			count_l(t_list *arg);
int			ft_atoi_arg(const char *str, t_list **a, char **arg_split);

// OPERATIONS3
void		pa(t_list **a, t_list **b);
void		pb(t_list **a, t_list **b);
void		sa(t_list **a);
void		sb(t_list **b);
void		ss(t_list **a, t_list **b);
void		ra(t_list **a);
void		rb(t_list **b);
void		rr(t_list **a, t_list **b);
void		rra(t_list **a);
void		rrb(t_list **b);
void		rrr(t_list **a, t_list **b);

#endif 
