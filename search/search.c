#include "./search.h"


int i_linear_search(int* array, int length, int target)
{
    for (int i = 0; i < length; i++)
        if (array[i] == target) return i;
    return -1;
}

int r_linear_search(int* array, int length, int target)
{
    length--;

    if (length > NOT_FOUND_INDEX)
    {
        if (array[length] == target) return length;
        return r_linear_search(array, length, target);
    }

    return NOT_FOUND_INDEX;
}