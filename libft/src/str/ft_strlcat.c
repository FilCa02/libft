/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fpinto-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:59:47 by fpinto-c          #+#    #+#             */
/*   Updated: 2022/02/14 16:28:01 by fpinto-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlen(char * restrict dst)
{
	size_t	i;

	i = 0;
	while (dst[i])
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t	i;

	i = ft_strlen(dst);
	while (i < dstsize - i - 1)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize != 0)
	{
		dst[i] = '\0';
	}
	return (i);
}

#include <stdio.h>

int main()
{
	char dst[30] = "Filipe";
	char src[] = " Carvalho";
	int	dstsize = 6;
	printf("%zu", ft_strlcat(dst, src, dstsize));
	printf("%s", dst);
}
