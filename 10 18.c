#include <stdio.h>
#include <time.h>
void menu()
{
    printf("****1.play****\n");
    printf("****2.exit****\n");
}
void game()
{
    printf("请猜数字\n");
    int i =0;
    int ret = rand()%101;
    do
    {
    scanf("%d",&i);
    if(ret<i)
    {
        printf("猜大了\n");
    }
    else if(ret>i)
    {
        printf("猜小了\n");
    }
    else
    {
        printf("猜对了\n");
        break;
    }
    }while(1);

}
int main()
{
    menu();
    srand((unsigned int)time(NULL));
    int input=0;
    printf("请选择\n");
    scanf("%d",&input);
    switch(input)
    {
        case 1:
        {
            game();
            break;
        }
        case 2:
        {
            printf("退出游戏\n");
            break;
        }
        default :
        {
            printf("输入错误，请重新输入\n");
        }
    }
    return 0;
}