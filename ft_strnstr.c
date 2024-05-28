/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscholz <sscholz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:41:08 by sscholz           #+#    #+#             */
/*   Updated: 2024/04/25 15:41:11 by sscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    char	c;
    char	bc;
    size_t	litlen;
    
    litlen = 0;
    c = *little++;
    bc = *big;
    if(c != '\0')
    {
    	litlen = ft_strlen(little);
    	while (1)
    	{
    		while (1)
    		{
    			if (len-- < 1 || (bc = *big++) == '\0')
    				return(NULL);
    			if (bc == c)
    				break;
    		}
    		if (litlen > len)
    			return (NULL);
    		if (ft_strncmp(big, little, len) == 0)
    			break;
    	}
    	big--;
    }
    return ((char *)big);
}
