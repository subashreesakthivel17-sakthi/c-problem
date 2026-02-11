
#include <stdio.h>

int main()
{
    int a=10,b=25,c=15;
    scanf("%d",&a,&b,&c);
    printf("%d",a,b,c);
    if(a>=b){
        printf(" is largest");
        
    }
    else if(a<=c){
        printf(" is smallest");
    }
    else{
        printf("none");
    }

    return 0;
}