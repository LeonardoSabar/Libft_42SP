/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 10:53:21 by leobarbo          #+#    #+#             */
/*   Updated: 2023/10/25 14:27:08 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	size_t	start;
	size_t	end;
	size_t	sub_len;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1) + 1;
	start = 0;
	end = len -1;
	while (s1[start] && ft_strchr(set, s1[start]))
			start++;
	while (end > start && ft_strchr(set, s1[end]))
		end--;
	sub_len = end - start + 1;
	result = (char *)malloc (sub_len + 1);
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1 + start, sub_len + 1);
	return (result);
}	
