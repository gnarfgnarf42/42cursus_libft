/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscholz <sscholz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 17:19:27 by sscholz           #+#    #+#             */
/*   Updated: 2024/04/17 17:19:29 by sscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    while(*str != '\0')
    {
        if(*str == c)
            return ((char *)str);
        str++;
    }
    return (NULL);
}
