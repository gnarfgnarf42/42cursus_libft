/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscholz <sscholz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 18:58:10 by sscholz           #+#    #+#             */
/*   Updated: 2024/04/17 18:58:12 by sscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    const char  *last_occurence;

    last_occurence = NULL;
    while(*str != '\0')
    {
        if(*str == c)
            last_occurence = str;
        str++;
    }
    return (last_occurence);
}
