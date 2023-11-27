#include "sort.h"

/**
 * counting_sort - function
 * 
 * @array: Array of ints
 * @size: size
*/
void counting_sort(int *array, size_t size)
{
    int *output = malloc( sizeof(int) * size), *counter = null;
    int max_num = getMax(array, size) , i=0;
    
    counter = malloc( sizeof(int) * (max_num+1) );
    memset(counter,0,max_num);
    if(size > 1 )
    {
        for(; i < (int)size;i++)
        {
            counter[ array[i] ]++;
        }
        for(i=0; i < max_num+1;i++)
        {
            counter[ i ] += counter[i-1];
            printf("%d%s",counter[ i ], i < max_num ? ", ": "");
        }
        
        for(i=0; i < (int)size;i++)
        {
            output[ counter[array[i]]-1 ] = array[i];
            counter[array[i]]--;
        }
        for(i=0; i < (int)size;i++)
        {
            array[i] = output[ i ];
        }
    }
    free(output);
    free(counter);
}

/**
 * getMax - function
 * 
 * @array: Array of ints
 * @size: s
 * 
 * Return: int
*/
int getMax(int *array, size_t s)
{
    int i=0, max=0;
    for( ; i < (int)s ; i++ )
        if(array[i] > max)
            max = array[i];
    
    return max;
}
