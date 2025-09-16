#include <stdio.h>

#define SIZE 1024

int Strlen(char *str);

int main(){

    char buffer[SIZE] = "Hello again";
    char yeet[SIZE] = "Ong frfr";
    // char *yeet;
    int len = Strlen(yeet);

}

int Strlen(char *str){
    int cnt = 0;
    while(*str != '\0'){
        cnt++;
        str++;
    }
    printf("String Length: %d\n", cnt);
    return cnt;
}