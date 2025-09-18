#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define SIZE 100

int main(){
    FILE *fp;
    char buffer[SIZE];
    char *array[SIZE];
    char *str;
    int len = 0;

    //Open file
    fp = fopen("strings.txt","r");
    if(fp == NULL){
        exit(1);
    }

    while( (fgets(buffer, SIZE - 1, fp)) != NULL){
        //buffer[strlen(buffer)-1]='\0';
        str = malloc(SIZE);
        strcpy(str, buffer);
        array[len] = str;
        len++;
    }

    fclose(fp);

    for(int index = 0; index < len; index++){
        printf("[%d]: %s\n", index, array[index]);
    }

    return 0;

}