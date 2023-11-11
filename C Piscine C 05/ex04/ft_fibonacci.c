/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lny-tina <lny-tina@student.42antananarivo. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 12:25:35 by lny-tina          #+#    #+#             */
/*   Updated: 2023/11/11 12:25:35 by lny-tina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
    if (index <= 1)
        return index;
    if (index == 0)
        return 0;
    if (index == 1)
        return 1;

    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

int main()
{
    int index;

    index = 9;

    int resultat = ft_fibonacci(index);
    printf("Le terme à l'indice %d dans la suite de Fibonacci est : %d\n", index, resultat);

    return 0;
}