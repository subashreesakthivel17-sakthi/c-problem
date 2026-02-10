#include <stdio.h>

int main()
{
    int a;//5
    int b;//3
    scanf("%d %d",&a,&b);
    printf("%d",a&&b);
    int c,d;//0,5
    scanf("%d %d",&c,&d);
    printf("%d",c&&d);
    return 0;
}