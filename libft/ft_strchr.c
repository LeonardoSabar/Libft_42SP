/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:37:15 by leobarbo          #+#    #+#             */
/*   Updated: 2023/10/20 16:30:24 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int	idx;

	idx = 0;
	while (str[idx])
	{
		if (str[idx] != c)
			idx++;
		else
			return ((char *)str + idx);
	}
	if (c == '\0')
		return ((char *)str + idx);
	return ((void *)0);
}
