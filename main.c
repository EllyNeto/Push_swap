/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eneto <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 16:46:40 by eneto             #+#    #+#             */
/*   Updated: 2024/08/05 15:06:16 by eneto            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stacks(t_list *a, t_list *b)
{
	t_list	*tmp_a;
	t_list	*tmp_b;

	tmp_a = a;
	tmp_b = b;
	while (tmp_a || tmp_b)
	{
		if (tmp_a != NULL)
			printf("| %d |", tmp_a->val);
		if (tmp_b != NULL)
			printf("| %d |\n", tmp_b->val);
		else
			printf("\n");
		if (tmp_a)
			printf("  ↓");
		if (tmp_b)
			printf("    ↓\n");
		else
			printf("\n");
		if (tmp_a != NULL)
			tmp_a = tmp_a->next;
		if (tmp_b != NULL)
			tmp_b = tmp_b->next;
	}
	printf(" NULL  NULL\n");
}

void	ft_add(t_list **lst, int i)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	new->val = i;
	new->next = *lst;
	*lst = new;
}

void	choose_algorithm(t_list **a, t_list **b)
{
	avalue_nb(a);
	ft_print_stacks(*a, *b);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	**arg_split;
	int		i;

	a = NULL;
	b = NULL;
	i = argc;
	arg_split = ft_split(argv[1], ' ');
	if (argc == 2)
		i = count_arg(arg_split);
	if (argc > 2)
		while (--i > 0)
			ft_add(&a, ft_atoi_arg(argv[i], &a, arg_split));
	else if (argc == 2)
		while (--i >= 0)
			ft_add(&a, ft_atoi_arg(arg_split[i], &a, arg_split));
	if (duplicate(&a) == true)
		message_error(&a, arg_split);
	if (is_not_sorted(&a) == true)
		choose_algorithm(&a, &b);
	free_stack(&a);
	free_arg(arg_split);
	return (0);
}
