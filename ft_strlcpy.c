/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yut <yut@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 00:44:12 by yut               #+#    #+#             */
/*   Updated: 2023/07/14 23:59:52 by yut              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;

	src_len = ft_strlen(src);
	if (src == NULL || dst == NULL)
		return (0);
	if (dstsize == 0)
		return (src_len);
	if (src_len + 1 < dstsize)
		ft_memcpy(dst, src, src_len + 1);
	else
	{
		ft_memcpy(dst, src, dstsize - 1);
		dst[dstsize - 1] = '\0';
	}
	return (src_len);
}

// int main()
// {
//     char *dst = "abcdefghi";
//     const char *src = "12345";

//     dst = (char *)malloc(sizeof(char)*1000);
//     if (!dst)
//         return (0);

//     ft_strlcpy(dst, src , 0);
//     printf("dst = %s", dst);
//     return (0);
// }
