#include <stdio.h>
#include "p3_3.h"

void set_mode(int * mode)
{
	if(*mode != ME && *mode != US)
	{
		printf("Invailid mode specified. Mode 1(US) used.\n");
		*mode = US;
	}

}

void get_info(int * mode, double * distance, double * fuel)
{
	if(*mode == ME)
	{
		printf("Enter distance traveled in kilometers:");
		scanf("%lf", distance);
		printf("Enter fuel consumed in liters:");
		scanf("%lf", fuel);
	}
	else
	{
		printf("Enter distance traveled in miles:");
		scanf("%lf", distance);
		printf("Enter fuel consumed in gallons:");
		scanf("%lf", fuel);
	}
}

void show_info(int * mode, double * distance, double * fuel)
{
	if(*mode == ME)
		printf("Fule consumption is %.2lf per 100 km.\n", (*fuel) / ((*distance) / 100));
	else
		printf("Fule consumption is %.2lf miles per gallons.\n", *distance/ *fuel);
}
