#include <stdio.h>
#include <conio.h>
 
int main()
{
    int year;
    printf("Enter a year for leap year check\n");
    scanf("%d", &year);
    
    if(year%4!=0)
    {
        printf("%d is not a leap year\n", year);
    }   
         else {
            printf("%d is a leapyear\n", year );
        }
    
    getch();
    return 0;
}
