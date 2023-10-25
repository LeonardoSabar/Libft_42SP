/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:16:49 by leobarbo          #+#    #+#             */
/*   Updated: 2023/10/20 08:14:00 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	idx;

	idx = 0;
	while (idx < n)
	{
		((unsigned char *)dest)[idx] = ((unsigned char *)src)[idx];
		idx++;
	}
	return (dest);
}
