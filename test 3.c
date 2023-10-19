#include <stdio.h>
int get_max(int x,int y,int z)
{
    if((x>y>z)||(x>z>y))
    {
        return x;
    }
    else if((y>x>z)||(y>z>x))
    {
        return y;
    }
    else
    {
        return z;
    }

}
int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int m = get_max(a,b,c);
    printf("%d",m);
    return 0;
}