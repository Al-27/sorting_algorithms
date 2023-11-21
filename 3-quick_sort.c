#include "sort.h"

/**
 * quick_sort - Prints an array of integers
 *
 * @array: The array  
 * @size: Number of elements in @array
 */
void quick_sort(int *array, size_t size)
{
    int len = (int)size, i, j, hi = len - 1, tmp;
    
    for(j = 0, i = 0;j < hi;j++)
    {
        
        if(array[j] > array[hi])
        {
            tmp = array[hi];
            array[hi] = array[j];
            array[j] = tmp;
            print_array(array,size);
        }
        if(array[j] < array[i] )
        {
            for( i = 0; i < j ; i++){
                
                if(array[j] < array[i] )
                {
                    tmp = array[j];
                    array[j] = array[i];
                    array[i] = tmp;
                    print_array(array,size);
                }
                
            }
        }
        
        
    }
}