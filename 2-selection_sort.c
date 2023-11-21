#include "sort.h"

/**
 * selection_sort - Prints an array of integers
 *
 * @array: The array  
 * @size: Number of elements in @array
 */
void selection_sort(int *array, size_t size)
{
    int len = (int)size, i, j, minVal, minIndex, jVal;
    
    for(i = 0; i < len; i++)
    {
        minIndex = i, minVal = array[i];
        
        for(j = i ; j < len; j++)
        {
            jVal = array[j];
            
            if(minVal > jVal)
            {
                minIndex = j;
                minVal = jVal;
            }
        }
        
        array[minIndex] = array[i];
        array[i] = minVal;
        
        if(i != minIndex)
            print_array(array,size);
    }
    
}