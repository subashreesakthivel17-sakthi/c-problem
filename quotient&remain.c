#include <stdio.h>

int main(){
     int a,b,e,f,i,j;
     int quotient,remainder;
     scanf("%d%d",&a,&b);
     scanf("%d%d",&e,&f);
     scanf("%d%d",&i,&j);
     int c= a/b;
     int d=a%b;
     int s=e/f;
     int g=e%f;
     int k=i/j;
     int l=i%j;
     printf(" quotient=%d remainder=%d\n",c,d);
     printf(" quotient=%d remainder=%d\n",s,g);
     printf(" quotient=%d remainder=%d ",k,l);
    return 0; 
}