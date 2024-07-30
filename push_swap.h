/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 10:44:31 by eneto             #+#    #+#             */
/*   Updated: 2024/07/24 10:53:07 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./lib/libft.h"
# include "stdbool.h"

typedef struct s_list
{
	int				val;
	int				negative;
	struct s_list	*next;
}	t_list;

int			ft_atoi_arg(const char *str);
bool		duplicate(t_list **stack, int counter);
bool		is_not_sorted(t_list **stack);
void		pa(t_list **a, t_list **b);
void		pb(t_list **a, t_list **b);
void		sa(t_list **a);
void		sb(t_list **b);
void		ss(t_list **a, t_list **b);

#endif 
