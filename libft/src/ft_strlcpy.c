/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinto-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:34:36 by fpinto-c          #+#    #+#             */
/*   Updated: 2022/02/14 15:59:26 by fpinto-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(const char * restrict c)
{
	size_t	i;

	i = 0;
	while (c[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;

	i =  0;
	while (i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
	{
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

#include <stdio.h>

int main()
{
	char dst[] = "aaaaaa";
	char src[] = "filipe";
	int dstsize = 3;
	printf("%zu", ft_strlcpy(dst, src, dstsize));
	printf("\n%s", dst);
}
