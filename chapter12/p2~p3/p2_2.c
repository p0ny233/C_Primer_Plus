#include <stdio.h>
#include "p2_3.h"

static int mode;
static double distance;
static double fuel;

void set_mode(int n)
{
	if(n != ME && n!= US)
	{
		printf("Invailid mode specified. Mode 1(US) used.\n");
		mode = US;
	}
	else
		mode = n;
}

void get_info(void)
{
	if(mode == ME)
	{
		printf("Enter distance traveled in kilometers:");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in liters:");
		scanf("%lf", &fuel);
	}
	else
	{
		printf("Enter distance traveled in miles:");
		scanf("%lf", &distance);
		printf("Enter fuel consumed in gallons:");
		scanf("%lf", &fuel);
	}
}

void show_info(void)
{
	if(mode == ME)
		printf("Fule consumption is %.2lf per 100 km.\n", fuel/(distance/100));
	else
		printf("Fule consumption is %.2lf miles per gallons.\n", distance/fuel);
}
