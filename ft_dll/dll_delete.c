/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll_delete.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filip <filip@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:03:27 by fkarika           #+#    #+#             */
/*   Updated: 2024/12/25 22:11:27 by filip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dll.h"

/**
 * Free all `nodes` and `dll`
 * @param dll Double linked list
*/
void	dll_delete(t_dll *dll)
{
	t_node	*temp;
	t_node	*head;

	head = dll->head;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(dll);
}
