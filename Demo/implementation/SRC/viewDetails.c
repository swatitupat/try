#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void viewdetails(void)
{
	printf("\e[1;1H\e[2J");
	printf("-----------------------------------------------------------------------------");	
	printf("\nTr.No\tName\t\t\tDestinations\t\tCharges\t\tTime\n");
	printf("-----------------------------------------------------------------------------");
	printf("\n1001\tRed Lines Express\tBoston to Manhattan\tRs.5000\t\t9am");
	printf("\n1002\tRed Lines Express\tManhattan To Boston\tRs.5000\t\t12pm");
	printf("\n1003\tLA City Express\t\tBoston To L.A\t\tRs.4500\t\t8am");
	printf("\n1004\tLA City Express\t\tL.A To Boston\t\tRs.4500\t\t11am");
	printf("\n1005\tIron City Express\tBoston To Chicago\tRs.4000\t\t7am");
	printf("\n1006\tIron City Express\tChicago To Boston\tRs.4000\t\t9.30am");
    printf("\n1007\tKeystone Express\tBoston To Washington\tRs.3500\t\t1pm");	
    printf("\n1008\tKeystone Express\tWashington To Boston\tRs.3500\t\t4pm");
    printf("\n1009\tMeteor Express\t\tBoston To Miami\t\tRs.6000\t\t3.35pm");
    printf("\n1010\tMeteor Express\t\tMiami To Boston\t\tRs.6000\t\t4.15pm"); 
    
}
