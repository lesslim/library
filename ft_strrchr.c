/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rberon-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 21:03:57 by rberon-s          #+#    #+#             */
/*   Updated: 2018/11/22 21:03:58 by rberon-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	int		i;
	int		j;

	i = 0;
	j = -1;
	cc = (char)c;
	while (s[i])
	{
		if (s[i] == cc)
			j = i;
		i++;
	}
	if (s[i] == cc)
		j = i;
	if (j >= 0)
		return ((char *)&s[j]);
	return (0);
}
