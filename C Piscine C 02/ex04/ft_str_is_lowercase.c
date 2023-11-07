/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lny-tina <lny-tina@student.42antananarivo. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:53:02 by lny-tina          #+#    #+#             */
/*   Updated: 2023/11/05 23:53:02 by lny-tina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	char	
		c;
	int	response;

	i = 0;
	response = 1;
	while (str[i] != '\0')
	{
		c = str[i];
		if (c > 32 && (c < 97 || c > 122))
		{
			response = 0;
		}
		i++;
	}
	return (response);
}
