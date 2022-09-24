// 10. Write a program to make the last digit of a number stored in a variable as zero. 
// (Example - if x=2345 then make it x=2340)



#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    // b=a%10;
    // c=a-b;
    // printf("%d",10*c);
    a/=10;
 
    printf("%d",   a*=10);
    /* code */
    return 0;
}
