#include "sort.h"

/**
 * shell_sort - function
 * 
 * @array: Array of ints
 * @size: size
*/
void shell_sort(int *array, size_t size)
{
    int len = (int)size, k = 1, tmp, i, j;
    
    while(k < len/3) k = k * 3 + 1;
    
    while(k > 0)
    {
        
        for(i = k; i < len; i++)
        {
            for(j = i; j >= k; j -= k )
            {
                if(array[j] < array[j-k])
                {
                    tmp = array[j];
                    array[j] = array[j-k];
                    array[j-k] = tmp;
                }
                else
                    break;
            }
        }
        
        k /= 3;
        print_array(array,size);
    } 
}