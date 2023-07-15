/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 07:17:51 by yut               #+#    #+#             */
/*   Updated: 2023/07/14 23:48:18 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char		*tmp_d;
	const char	*tmp_s;

	tmp_d = (char *)dst;
	tmp_s = (const char *)src;
	if (dst > src)
	{
		while (n > 0)
		{
			tmp_d[n - 1] = tmp_s[n - 1];
			n--;
		}
	}
	else
	{
		while (n > 0)
		{
			*(tmp_d++) = *(tmp_s++);
			n--;
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char str_test7[] = "memmove can be very useful.....";
//     char str_real7[] = "memmove can be very useful.....";
//     memmove(str_real7 + 7, str_real7 + 1, 11);
//     ft_memmove(str_test7 + 7, str_test7 + 1, 11);
//     printf("Real : %s\n", str_real7);
//     printf("Test : %s\n", str_test7);
// }
