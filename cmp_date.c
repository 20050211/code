#include <stdio.h>
#define MAX_PARTS 10
struct date
{
    int day;
    int month;
    int year;
}p[MAX_PARTS];
int main()
{
    int i=0,count=0;
    for(;;i++)
    {
        printf("Enter a date: ");
        scanf("%d/%d/%d",&p[i].month,&p[i].day,&p[i].year);
        count++;
        if(p[i].month==0&&p[i].day==0&&p[i].year==0)
        {
            break;
        }
    }
    int s=0;
    int maxy=p[0].year;
        //找出最大年份
        for(i=0;i<=count;i++)
        {
            if(p[i].year>=maxy)
            {
                maxy=p[i].year;
            }
        }
        //判断最大年份是否唯一
        for(i=0;i<=count;i++)
        {
            if(p[i].year==maxy)
            {
                s++;
            }
        }
        //如果最大年份唯一
        if(s==0)
        {
            for(i=0;i<=count;i++)
            {
                if(p[i].year==maxy)
                {
                    printf("%d-%d-%d",p[i].month,p[i].day,p[i].year);
                    return 0;
                }
            }
        }
        //如果最大年份不唯一,判断月份
        int maxm=p[0].month;
        int j=0;
        if(s>0)
        {
            //找出最大月份
            for(i=0;i<=count;i++)
            {
                if(p[i].month>=maxm)
                {
                    maxm=p[i].month;
                }
            }
            //判断最大月份是否唯一
            for(i=0;i<=count;i++)
            {
                if(p[i].month==maxm)
                {
                    j++;
                }
            }
            //如果最大月份唯一
            if(j==0)
            {
                for(i=0;i<=count;i++)
                {
                    if(p[i].month==maxm)
                    {   
                        printf("%d-%d-%d",p[i].month,p[i].day,p[i].year);
                        return 0;
                    }
                }
            }
            //如果最大月份不唯一，则判断天
            int maxd=p[0].day;
            int z=0;
            if(j>0)
            {
                //判断最大日期
                for(i=0;i<=count;i++)
                {
                    if(p[i].day>maxd)
                    {
                        maxd=p[i].day;
                    }
                }
                for(i=0;i<=count;i++)
                {
                    if(p[i].day==maxd)
                    {   
                        printf("%d-%d-%d",p[i].month,p[i].day,p[i].year);
                        return 0;
                    }
                }
                
            }
        }
    return 0;
}