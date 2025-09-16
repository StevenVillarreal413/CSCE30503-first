#include <stdio.h>
#include <stdlib.h>

int main(){

    int *num;
    num = malloc(5 * sizeof(int));
    int i;
    int val = 10;
    //*array = 10; would technically allocate the first slot of the array to 10, neat
    //array[0] = 10; would *also* do that. Memory allocated on heap can be *navigated* using [], but not *initialized*.
    //array++;    This
    //array = 20; and this together would allocate 20 to the 2nd location in the heap array. 

    for(i = 0; i < 5; i++){
        num[i] = val;
        val = val+10;
        printf("%d\n", num[i]);
    }

    free(num);

    return 0;
}