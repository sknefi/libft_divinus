/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filip <filip@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:56:03 by fkarika           #+#    #+#             */
/*   Updated: 2024/12/25 15:11:02 by filip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurance;
	size_t	i;
	size_t	len_s;

	i = 0;
	last_occurance = 0;
	len_s = ft_strlen(s);
	while (i <= len_s)
	{
		if (s[i] == (char)c)
			last_occurance = (char *)(s + i);
		i++;
	}
	return (last_occurance);
}
