/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscholz <sscholz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:37:54 by sscholz           #+#    #+#             */
/*   Updated: 2024/04/17 13:37:57 by sscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t    ft_strlcpy(char *dest, const char *src, size_t size)
{
    unsigned int    srclen;
    unsigned int    i;
    
    srclen = 0;
    i = 0;
    while (src[srclen] != '\0')
            srclen++;
    while (i < size -1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    if (size > 0)
        dest[i] = '\0';
    return (srclen);    
}