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
    size_t little_len = ft_strlen(little);
    size_t  i;
    size_t  j;

    i = 0;
    if (little_len == 0)
        return ((char *)big);
    while(i < len && big[i] != 0 && little[i] != 0)
    {
        if (big[i] == little[0])
            {
                j = 0;
                while (j < little_len && i + j < len && big[i + j] == little[j])
                {
                    if (j == little_len)
                        return ((char *)&big[i]);
                    j++;
                }
            }
        i++;
    }
    return (NULL);     
}