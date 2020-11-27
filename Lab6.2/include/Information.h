#include <stdio.h>
typedef struct _dates
{
	int years,mouth,day;
}dates;
typedef struct _order
{
	char num[11];
	dates date;
	int amount;
}order;
