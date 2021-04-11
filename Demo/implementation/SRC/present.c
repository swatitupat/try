#include "../function.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool present(char name[]){
    FILE *fp;
    bool flag = false;
    fp = fopen("seats_reserved.txt", "r");
    char buf[100];
    while((fgets(buf, 100, fp)!=NULL)){
        if(strstr(buf, name)!=NULL) {
            printf("%s",buf);
            flag=true;
        }
    }
    fclose(fp);
    if(!flag){
        return false;
    }else{
        return true;
    } 
    return false;
}
