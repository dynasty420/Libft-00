/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 06:21:23 by yut               #+#    #+#             */
/*   Updated: 2023/07/22 16:50:11 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*data;

	data = (unsigned char *)buf;
	while (n > 0)
	{
		*(data++) = (unsigned char)ch;
		n--;
	}
	return (buf);
}
