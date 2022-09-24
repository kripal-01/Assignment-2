// 8. Write a program to check whether the given number is even or odd using a bitwise operator.

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a&1==1)
    printf("odd");
    else
    printf("even");
    /* code */
    return 0;
}
