#include <iostream>
#include "DLList.h"

int main()
{
    DLNode< int >::debug_printing(true);
    DLList< int >::debug_printing(true);
    
    DLList< int > list0;
    DLList< int > list1;

    for (int i = 0; i < 10; ++i)
    {
        list0.insert_tail(rand() % 10);
        list1.insert_head(rand() % 10);
    }

    return 0;
}