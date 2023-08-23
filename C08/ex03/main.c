#include "ft_point.h"
#include <stdio.h>

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

int main(void)
{
	t_point	point;
	set_point(&point);
	printf("x: %d y: %d\n", point.x, point.y);
	t_point *p = &point;
	printf("now with arrows:\nx: %d, y: %d\n", p->x, p->y);
	return (0);
}
