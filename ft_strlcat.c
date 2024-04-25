/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscholz <sscholz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 16:09:24 by sscholz           #+#    #+#             */
/*   Updated: 2024/04/17 16:09:26 by sscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t  src_len;
    size_t  dest_len;
    size_t  total;
    size_t  i;

    src_len = ft_strlen(src);
    dest_len = ft_strlen(dest);
    total = src_len + dest_len;
    i = 0;
    if(size <= dest_len || size == 0)
        return (total);
    while(dest_len + i < size -1 && src[i] != '\0')
    {
        dest[dest_len + i] = src[i];
        i++;
    }
    dest[dest_len + i] = '\0';
    return (total);
}
