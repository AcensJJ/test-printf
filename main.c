/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: jacens <jacens@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/11/18 10:29:41 by jacens       #+#   ##    ##    #+#       */
/*   Updated: 2019/12/10 19:19:21 by jacens      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "includes/ft_printf.h"
#include <stdio.h>

int		main(void)
{
	int ret;
	int i;

	i = -1;

	ret = ft_printf("Moi : |%16.2x|", -24);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%16.2x|", -24);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%16.4X|", -24);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%16.4X|", -24);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%3%|");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%3%|");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%16.2u|", -24);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%16.2u|", -24);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%16.2u|", 24);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%16.2u|", 24);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%16.2u|", 2468);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%16.2u|", 2468);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%16.2u|", 2);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%16.2u|", 2);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%-45.0u|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-45.0u|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%45.0u|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%45.0u|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0.0u|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0.0u|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
//10
	ret = ft_printf("Moi : |%0.0d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0.0d|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0.0x|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0.0x|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%-10.8X|%d|%5.4d|%x|%X|d|", -1, 123, 456, 7, 8);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-10.8X|%d|%5.4d|%x|%X|d|", -1, 123, 456, 7, 8);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%-10.8X|%-10.8d|%5.4d|%x|%X|d|", -1, 123, 456, 7, 8);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-10.8X|%-10.8d|%5.4d|%x|%X|d|", -1, 123, 456, 7, 8);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%-10.8X|", -1);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-10.8X|", -1);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%.x|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.x|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%-10.8X|", -12354);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-10.8X|", -12354);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%10d|", -12354);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%10d|", -12354);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%10.6d|", -12354);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%10.6d|", -12354);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%10.7d|", -12354);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%10.7d|", -12354);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
//20	
	ret = ft_printf("Moi : |%10.8d|", -12354);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%10.8d|", -12354);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%-10.8d|", -12354);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-10.8d|", -12354);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%10c|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%10c|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%.s|", NULL);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.s|", NULL);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.s|", "NULL");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.s|", "NULL");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.d|", 10);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.d|", 10);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.d|", 1230);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.d|", 1230);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.d|", -1230);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.d|", -1230);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.p|", (void *)123456);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.p|", (void *)123456);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%p|", (void *)123456);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%p|", (void *)123456);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
//30
	ret = ft_printf("Moi : |%.p|", NULL);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.p|", NULL);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%c|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%c|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%5c|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%5c|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%10x|", 12399);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%10x|", 12399);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%x|", 12354);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%x|", 12354);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%d|", 12354);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%d|", 12354);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%*.17d|", 25, 12354);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*.17d|", 25, 12354);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.15d|", 10);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.15d|", 10);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%2d|", 10142);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%2d|", 10142);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
//40
	ret = ft_printf("Moi : |%*d|", 10, 10142);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*d|", 10, 10142);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%.2s|", NULL);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.2s|", NULL);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%s|", "NULL");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%s|", "NULL");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%10s|", "NULL");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%10s|", "NULL");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%d|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.d|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%x|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%x|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.x|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.x|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%p|", (void *)0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%p|",  (void *)0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.p|",  (void *)0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.p|",  (void *)0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
//50

	ret = ft_printf("Moi : |%0d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0d|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%01d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%01d|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%010d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%010d|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%010x|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%010x|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%1.10d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%1.10d|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	
	ret = ft_printf("Moi : |%*.*d|", -12, 7, 12);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*.*d|", -12, 7, 12);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
	
	ret = ft_printf("Moi : |%*.*d|", -12, -7, 12);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*.*d|", -12, -7, 12);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%*.*d|", 12, -7, 12);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*.*d|", 12, -7, 12);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%*.*d|", 54, 0, 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*.*d|", 54, 0, 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);


	

	ret = ft_printf("Moi : |%.2s|", "NULL");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.2s|", "NULL");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
//60
	ret = ft_printf("Moi : |%s|", "NULL");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%s|", "NULL");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%10s|", "NULL");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%10s|", "NULL");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
	


	ret = ft_printf("Moi : |%.46s|", NULL);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.46s|", NULL);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%54.0d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%54.0d|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%010.0d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%010.0d|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%20s|", "fvTymR0e24eqIVl9OqR7F6gUKPQFjG1I5b8JHUL1");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%20s|", "fvTymR0e24eqIVl9OqR7F6gUKPQFjG1I5b8JHUL1");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%20s|", "Ai0S3P6gQ6zK18MhR21ZQUHo7dfPnNyGr7yXbS0ohPhKYIHM9DObr");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%20s|", "Ai0S3P6gQ6zK18MhR21ZQUHo7dfPnNyGr7yXbS0ohPhKYIHM9DObr");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%-2s|",  "bonjour");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-2s|",  "bonjour");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%54.0s|", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%54.0s|", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%54.1s|", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%54.1s|", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
//70
	ret = ft_printf("Moi : |%54.10s|", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%54.10s|", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%20s|", "fvTymR0e24eqIVl9OqR7F6gUKPQFjG1I5b8JHUL1");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%20s|", "fvTymR0e24eqIVl9OqR7F6gUKPQFjG1I5b8JHUL1");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.20s|", "Ai0S3P6gQ6zK18MhR21ZQUHo7dfPnNyGr7yXbS0ohPhKYIHM9DObr");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.20s|", "Ai0S3P6gQ6zK18MhR21ZQUHo7dfPnNyGr7yXbS0ohPhKYIHM9DObr");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%54.0s|", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%54.0s|", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%54.1s|", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%54.1s|", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%54.10s|", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%54.10s|", "7q4ZwnFmXmIivQFRMgxXDRy1pL6BNElfmac");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
	
	ret = ft_printf("Moi : |%.2s|", "NULL");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.2s|", "NULL");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%s|", "NULL");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%s|", "NULL");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%10s|", "NULL");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%10s|", "NULL");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%20s|", NULL);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%20s|", NULL);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
//80


	ret = ft_printf("Moi : |%.s|" , "aEyXaFRbMJtoGq");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.s|" , "aEyXaFRbMJtoGq");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
	


	
	ret = ft_printf("Moi : |%20s|",  "1C2XevyByWDGBi33KHXw");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%20s|",  "1C2XevyByWDGBi33KHXw");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.s|",  "1C2XevyByWDGBi33KHXw");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.s|",  "1C2XevyByWDGBi33KHXw");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%10.1i|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%10.1i|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%54.0d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%54.0d|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%54.0d|", 1423385165);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%54.0d|", 1423385165);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%0.0x|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0.0x|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0.0d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0.0d|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	

	ret = ft_printf("Moi : |%.0x|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.0x|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.0d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.0d|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
//90


	ret = ft_printf("Moi : |%*.0x|", -45, 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*.0x|", -45, 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%3i|", -388);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%3i|", -388);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%3i|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%3i|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%3i|", -69);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%3i|", -69);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%*.0X|", -45, 5);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*.0X|", -45, 5);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%*.0X|", -45, 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*.0X|", -45, 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%*.0d|", -20, 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*.0d|", -20, 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%*.0X|", 45, 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*.0X|", 45, 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%*.0d|", -45, 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*.0d|", -45, 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0.*d|", -45, -1);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0.*d|", -45, -1);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
//100
	ret = ft_printf("Moi : |%0.*d|", -45, -9);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0.*d|", -45, -9);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0.*d|", -45, -11);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0.*d|", -45, -11);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%*d|", -45, -11);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*d|", -45, -11);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0.54d|", 38);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0.54d|", 38);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0.54d|", -38);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0.54d|", -38);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%0.*d|", -45, 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0.*d|", -45, 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%54.0d|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%54.0d|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%--45u|", 50);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%--45u|", 50);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%--45d|", 50);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%--45d|", 50);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : [%05d]", -38);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : [%05d]", -38);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
//110
	ret = ft_printf("Moi : [%4.s]", "salut");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : [%4.s]", "salut");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : [%20.10s]", "salut");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : [%20.10s]", "salut");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : [%5.X]", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : [%5.X]", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	
	
	
	ret = ft_printf("Moi : |%*d|", 0, 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*d|", 0, 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0*d|", -10, 42);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0*d|", -10, 42);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.*s|", -3, "Hello");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.*s|", -3, "Hello");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%.*s|", 3, "Hello");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.*s|", 3, "Hello");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);




	ret = ft_printf("Moi : |%0*d|", -10, 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0*d|", -10, 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
	
	ret = ft_printf("Moi : |%.*d|", -10, 42);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.*d|", -10, 42);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
	
	ret = ft_printf("Moi : |%.*d|", -10, 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%.*d|", -10, 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
//120
	ret = ft_printf("Moi : |%*.*d|", 0, -5, 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*.*d|", 0, -5, 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%*.*d|", -5, 0, 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*.*d|", -5, 0, 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%*.*d|", 5, 0, 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*.*d|", 5, 0, 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%-1i|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-1i|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%-5.0s|", "Hello");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-5.0s|", "Hello");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%-3.0s|", "Hello");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-3.0s|", "Hello");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%*.*s|", 0, -5, "Hello");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%*.*s|", 0, -5, "Hello");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%-10.0i|", 0);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-10.0i|", 0);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%-10.0x|", 65535);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-10.0x|", 65535);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%-10.0x|", 655);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-10.0x|", 655);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
//130



	ret = ft_printf("Moi : |%-010d|", 42);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%-010d|", 42);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%0*d|", -10, 42);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%0*d|", -10, 42);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%p|", (void *)1);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%p|", (void *)1);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%p|", (void *)321);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%p|", (void *)321);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%p|", (void *)-1);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%p|", (void *)-1);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);



	ret = ft_printf("Moi : |%5.s|", (char *)42);
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%5.s|", (char *)42);
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);

	ret = ft_printf("Moi : |%5.s| |%5.s|", (char *)42, "SLT");
	ft_printf("MoiR : ret = |%d|\n", ret);
	ret = printf("Lui : |%5.s| |%5.s|", (char *)42, "SLT");
	printf("LuiR : ret = |%d|", ret);
	i++;ft_printf("i = %d\n\n-------------------\n\n", i);
	return (0);
}
