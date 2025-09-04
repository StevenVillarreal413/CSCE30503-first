#include <stdio.h>

int Strlen(char *str);

int main(){
    char yeet[] = "Ong frfr";
    // char *yeet;
    Strlen(yeet);

}

int Strlen(char *str){
    int cnt;
    while(*str != '\0'){
        cnt++;
        *str++;
    }
    printf("String length: %d\n", cnt);
}