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
    //*(array + 1) = 20; for some reason would *also* allocate it that way. Make sure to ask why.
    // Hightower says that it's the same thing as the thing as array[0] = 10;
    // After allocating the size of the array to the heap, you can just use standard array notation to work with the information instead of having to do a whole lot of other junk. He also suggests that we do the same thing.

    for(i = 0; i < 5; i++){
        num[i] = val;
        val = val+10;
        printf("%d\n", num[i]);
    }

    free(num);

    return 0;
}