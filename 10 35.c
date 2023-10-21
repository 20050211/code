#include <stdio.h>
int my_strlen(char* x)
{
    if(*x !='\0')
    {
        return 1 + my_strlen(x+1);
    }
    else
    return 0;
}
int main()
{
    char arr[]="abcd";
    int ret = my_strlen(arr);
    printf("%d",ret);
    return 0;
}