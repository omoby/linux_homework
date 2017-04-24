#include "include/linux_homework.h"
#include<stdio.h>
int oneAddto100()
{
    int i=1,j=0;
    while(i<=100)
    {
        j+=i;
        i++;

    }
 printf("%d",j);
 return 0;
}
