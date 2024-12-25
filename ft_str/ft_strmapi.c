/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: filip <filip@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 18:55:22 by fkarika           #+#    #+#             */
/*   Updated: 2024/12/25 15:11:02 by filip            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	size_t			len_s;
	unsigned int	i;

	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	str = malloc((len_s + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < len_s)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
