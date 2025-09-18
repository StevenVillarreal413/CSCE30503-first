#include <stdio.h>

#define SIZE 1024


int main(){

    FILE *ptr = fopen("/home/student/projects/CSCE30503-first/strings.txt","r");
    char *string[SIZE];
    char input[SIZE];
    char *output[SIZE];
    int i = 0;
    if(ptr == NULL){
        printf("File returned null value, check path.");
        return 1;
    }

    while(i < 2){
        char newout[SIZE];
        fgets(newout, SIZE, ptr);
        printf(newout);
        output[0] = &newout;
        char read[SIZE];
        read[0] = output[0];
        printf(output);
        i++;
    }




    fclose(ptr);


    return 0;
}
