#include <stdio.h>
int is_leap_year(int n)
{
    if(((n%4==0)&&(n%100 !=0))||(n%400==0))
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n = 1;
    for(n=1000;n<=2000;n++)
    {
        if(is_leap_year(n))
        {
            printf("%d ",n);
        }
    }
    return 0;
}