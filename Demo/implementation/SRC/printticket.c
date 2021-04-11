#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void printticket(char name[],int num_of_seats,int train_num,float charges)
{
	printf("\e[1;1H\e[2J");
	printf("-------------------\n");
	printf("\tTICKET\n");
	printf("-------------------\n\n");
	printf("Name:\t\t\t%s",name);
	printf("\nNumber Of Seats:\t%d",num_of_seats);
	printf("\nTrain Number:\t\t%d",train_num);
	specifictrain(train_num);
	printf("\nCharges:\t\t%.2f",charges);
}
