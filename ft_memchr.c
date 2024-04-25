/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscholz <sscholz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 12:56:29 by sscholz           #+#    #+#             */
/*   Updated: 2024/04/25 12:56:41 by sscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t num)
{
    const unsigned char *ptr;
    size_t     i;

    ptr = (const unsigned char *) s;
    i = 0;
    while(i < num)
    {
        if(*ptr == c)
            return((void *)ptr);
        i++;
        ptr++;        
    }
    return NULL;
}
