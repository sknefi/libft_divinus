/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filip <filip@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:03:25 by fkarika           #+#    #+#             */
/*   Updated: 2024/12/25 22:11:48 by filip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dll.h"

/**
 * Initialize node with `data`
 * @param data Integer for node->data
 * @return Initialized node
*/
static t_node	*init_node(int data)
{
	t_node	*new_node;

	new_node = (t_node *)ft_calloc(1, sizeof(t_node));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->cost = -1;
	new_node->index = 0;
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->target_node = NULL;
	return (new_node);
}

/**
 * Create `dll` with initialazing `nodes` with `data`
 * @param argv Pointer to a pointers of char
 * @return Created `Double Linked List` with `nodes`
*/
t_dll	*dll_create(char **argv, char name)
{
	int		i;
	int		num;
	int		err_flag;
	t_node	*new_node;
	t_dll	*dll;

	dll = dll_init(name);
	if (!dll)
		return (NULL);
	i = 0;
	while (argv[i])
	{
		err_flag = 0;
		if (!ft_isnumber(argv[i]))
			return (dll_delete(dll), NULL);
		num = ft_atoii(argv[i], &err_flag);
		if (err_flag == -1)
			return (dll_delete(dll), NULL);
		new_node = init_node(num);
		if (!new_node)
			return (dll_delete(dll), NULL);
		dll_append(dll, new_node);
		i++;
	}
	return (dll);
}
