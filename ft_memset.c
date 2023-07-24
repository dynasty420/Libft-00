/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 06:21:23 by yut               #+#    #+#             */
/*   Updated: 2023/07/24 18:07:00 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	unsigned char	*data;
	size_t			i;

	i = 0;
	data = (unsigned char *)buf;
	while (i < n)
	{
		data[i] = (unsigned char)ch;
		i++;
	}
	return (buf);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// int main()
// {
//     char str11[1024] = "0123456789";
//     char str12[1024] = "0123456789";
//     char dst = 'A';
//     ft_memset(str11, dst, 6);
//     memset(str12, dst, 6);
//     printf("jisaku  : %s\n", str11);
//     printf("library : %s\n", str12);
// }