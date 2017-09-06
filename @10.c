#include <stdio.h>
int main()
{
    int a=1234,count=0;
     
        do
    {
        a=a%10;
            count++;
        }
        while(a/10==0);
        
      return 0;
}
