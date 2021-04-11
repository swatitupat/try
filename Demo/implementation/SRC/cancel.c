#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include "../unity/unity.h"
#include "../unity/unity_internals.h"


#define BUFFER_SIZE 1000
int deleteLine(FILE *srcFile, FILE *tempFile, char name[]);
void printFile(FILE *fptr);
int num;


void test(void)
{
    TEST_ASSERT_EQUAL(1,num);
}

void cancel(void){
    FILE *srcFile;
    FILE *tempFile;
    int line;
    char name[100];
    srcFile  = fopen("seats_reserved.txt", "r");
    tempFile = fopen("delete-line.txt", "w");
    if (srcFile == NULL || tempFile == NULL)
    {
        printf("Unable to open file.\n");
        printf("Please check you have read/write previleges.\n");
        exit(EXIT_FAILURE);
    }
    printf("\nList of the Booked Tickets.\n\n");
    printFile(srcFile);
    printf("\nEnter Name of the Ticket Holder for Cancellation: ");
    scanf("%s", name);
    rewind(srcFile);
    num=deleteLine(srcFile, tempFile, name);
    fclose(srcFile);
    fclose(tempFile);
    remove("seats_reserved.txt");
    rename("delete-line.txt", "seats_reserved.txt");
    UNITY_BEGIN();
    RUN_TEST(test);
    UNITY_END();
    if(num==0){
        printf("No record found for this Name\n");
        printf("\nPress Enter to go back to  Main menu!");
        getchar();
		getchar();
    }else{
        printf("\nTicket is Cancelled Successfully\n");
        printf("\n\n\nList after Cancellation of ticket .\n\n");
        srcFile = fopen("seats_reserved.txt", "r");
        printFile(srcFile);
        fclose(srcFile);
        printf("\nPress Enter to go back to  Main menu!");
        getchar();
        getchar();
    }    
}

void printFile(FILE *fptr)
{
    char ch;
    while((ch = fgetc(fptr)) != EOF)
        putchar(ch);
}
int deleteLine(FILE *srcFile, FILE *tempFile, char name[])
{
    char buffer[BUFFER_SIZE];
    int count = 1,c=0;
    while ((fgets(buffer, BUFFER_SIZE, srcFile)) != NULL)
    {
        char *pch =strstr(buffer,name);
        if (pch==NULL){
             fputs(buffer, tempFile); 
        }else{
            c++;
        }    
        count++;
    }
    return c;
}


