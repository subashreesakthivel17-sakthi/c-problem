
#include <stdio.h>

int main()
{
    int a=5,b=3;
    char operator;
    printf("%c",operator);
    scanf("%c",&operator);
    
    switch(operator){
        case '+':
        printf("Result=%d",a+b);
        break;
        case '-':
        printf("Result=%d",a-b);
        break;
        case '*':
        printf("Result=%d",a*b);
        break;
        case '%':
        printf("Result=%d",a%b);
        break;
        case '/':
        printf("Result=%d",a/b);
        break;
        default:
        printf("invalid");
        
    }
}
    