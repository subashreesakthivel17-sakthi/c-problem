
#include <stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b,&c,&d);
    printf("%d",a&&b,a||b);
    printf("%d",c&&d,c||d);
    return 0;
}
