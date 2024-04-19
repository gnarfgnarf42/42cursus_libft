/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sscholz <sscholz@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 19:16:35 by sscholz           #+#    #+#             */
/*   Updated: 2024/04/16 19:16:37 by sscholz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void    ft_bzero(void *ptr, size_t num)
{
    unsigned char *data = ptr;
    unsigned int    i;

    i = 0;
    while (i < num)
    {
        data[i] = '\0';
        i++;
    }
}
