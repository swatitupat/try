#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void display(void){
    FILE *fp;
    fp = fopen("seats_reserved.txt", "r");
    if(fp == NULL)
    {
        printf("No Record Found.....\n");
        printf("\nPress Enter to go back to  Main menu!");
        getchar();
    }
    printf("\nList of the Booked Tickets.\n\n");
    char ch;
    while((ch = fgetc(fp)) != EOF)
        putchar(ch);
    fclose(fp);
    printf("\nPress Enter to go back to  Main menu!");
    getchar();
    getchar();
}
