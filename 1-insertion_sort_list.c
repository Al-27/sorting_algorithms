#include "sort.h"

void insertion_sort_list(listint_t **list)
{
    listint_t  *curElm = null, *prevElm = null, *nextElm = null, *tmp = null;
    
    if( list )
    {
        if(*list)
        {
            curElm = *list;
            
            while( curElm )
            {
                prevElm = curElm->prev;
                nextElm = curElm->next;
                
                while (prevElm)
                {
                    tmp = null;
                    if( curElm->n < prevElm->n)
                    {
                        tmp = prevElm->prev;
                        prevElm->prev = curElm;
                        prevElm->next = nextElm;
                        
                        curElm->next = prevElm;                        
                        curElm->prev = tmp;
                        if(tmp)
                            tmp->next = curElm;

                        if(nextElm)
                            nextElm->prev = prevElm;
                            
                        if(curElm->prev == null)
                            *list = curElm;
                        print_list(*list);  
                    }
                    else
                        break;
                    
                    nextElm = curElm->next;
                    prevElm = tmp ? tmp : prevElm->prev;
                }
                
                curElm = nextElm;
            }
        }
    }
    
}