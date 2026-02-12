#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a>=0&&a<=9){
        printf("Digits");
    }
    else{
        printf("non digits");
    }

    return 0;
}