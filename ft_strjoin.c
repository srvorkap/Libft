/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srvorkap <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 10:29:16 by srvorkap          #+#    #+#             */
/*   Updated: 2019/10/05 19:52:02 by srvorkap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concatenation;
	int		len;

	if (s1 && s2)
		len = ft_strlen(s1) + ft_strlen(s2);
	else if (s1)
		len = ft_strlen(s1);
	else if (s2)
		len = ft_strlen(s2);
	else
		return (NULL);
	if (!(concatenation = (char *)malloc(sizeof(char) * len)))
		return (NULL);
	if (s1)
		concatenation = ft_strcpy(concatenation, (s1));
	else
		concatenation = ft_strcpy(concatenation, (s2));
	if (s1 && s2)
		concatenation = ft_strcat(concatenation, (s2));
	return (concatenation);
}
