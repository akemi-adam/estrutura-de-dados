#include "search.h"


int i_linear_search(int* array, int length, int target)
{
    for (int i = 0; i < length; i++)
        if (array[i] == target) return i;
    return -1;
}