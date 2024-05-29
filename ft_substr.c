/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscholz <sscholz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:37:24 by sscholz           #+#    #+#             */
/*   Updated: 2024/05/29 17:45:44 by sscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	slen;
	char	*substr;
	size_t	i;
	size_t	j;
	
	slen = ft_strlen(s);
	i = start;
	j =0;
	
	if (s == NULL)
		return (NULL);
	if (start >= slen)
	{
		substr = (char *)malloc(1);
		if (substr)
			substr[0] = '\0';
        	return substr;
        }
         if (len > slen - start)
         	len = slen - start;
         substr =(char *)malloc(len + 1);
	if (substr == NULL)
		return (NULL);
	while (j < len)
	{
		substr[j] = s[i];
		i++;
		j++;
	}
	substr[j] = '\0';
	return (substr);
}
