/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dll.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filip <filip@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:03:15 by fkarika           #+#    #+#             */
/*   Updated: 2024/12/25 22:11:17 by filip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DLL_H
# define DLL_H

# include "../libft.h"

// structs are defined in libft.h

t_dll	*dll_init(char name);
t_dll	*dll_create(char **argv, char name);
void	*dll_append(t_dll *dll, t_node *new_node);
void	*dll_prepend(t_dll *dll, t_node *new_node);
void	dll_clear(t_dll *dll);
void	dll_iteri(t_dll *dll, void (*f)(t_node *node));
void	dll_printer(t_dll *dll);
void	dll_delete(t_dll *dll);

#endif // DLL_H
