#include "include/linux_homework.h"
#include<stdio.h>
int narcissusNumber()
{
    int n,i,j,k,m,f=0;
    for(n=100;n<1000;n++)
    {
        i=n/100;
        j=n/10-i*10;
        k=n%10;
        m=k*100+j*10+i;
        if(n==m)
            printf("%5d",n);
       f++;
      if(f==1)
         break;
    }

        printf("\n");
     return 0;
   
}
