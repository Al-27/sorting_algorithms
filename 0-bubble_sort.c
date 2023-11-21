#include "sort.h"

void bubble_sort(int *array, size_t size)
{
    u_long i, tmp, end = size;
    
    while (end > 0 )
    {
        i = 0;
        for(i = i + 1; i < end; i++)
        {
            tmp = array[i-1];
            
            if(array[i-1] >= array[i] )
            {
                array[i-1] = array[i];
                array[i] = tmp;
                print_array(array,size);
            }
        }
        end--;
    }
    
}