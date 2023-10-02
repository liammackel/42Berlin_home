/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liammackel <liammackel@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:56:04 by liammackel        #+#    #+#             */
/*   Updated: 2023/10/02 20:05:56 by liammackel       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void    ft_div_mod(int a, int b, int *div, int *mod)
{   
    div = a / b;
    mod = a % b;
}

int main(void)
{
    printf("===== ex03 =====\n");
    int a = 13;
    int b = 5;
    int div = -1;
    int mod = -1;

    ft_div_mod(a, b, &div, &mod);
    printf("%d is divided by %d \nRESULT: %d\nREMAINDER: %d\n", a, b, div, mod);
}