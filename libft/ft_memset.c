/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkajanek <tkajanek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 15:33:27 by tkajanek          #+#    #+#             */
/*   Updated: 2023/01/11 17:33:47 by tkajanek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	int		i;
	char	*p;

	p = (char *)s;
	i = 0;
	while (n--)
		p[i++] = (char) c;
	return (s);
}