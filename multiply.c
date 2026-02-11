#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    if(num%3==0 && num%7==0){
        printf("multiple of both 3and7");
    }
    else{
        printf("not multiple");
    }
   
    return 0;
}