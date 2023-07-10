#include "search_algos.h"

int linear_search(int *array, size_t size, int value){
    int index;
    if (array == NULL)
        return (-1);

    for (index = 0; index < (int) size; index++){
        // if(index + 1 == size || array[index] == NULL){ return (-1); }
        printf("Value checked array[%d] = [%d]\n",index, array[index]);
        if (array[index] == value){
            return index;
        }
    }
    return(-1);
}
