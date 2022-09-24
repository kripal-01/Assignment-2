// 11. Write a program to input a number from the user and also input a digit. Append a 
// digit in the number and print the resulting number. (Example - number=234 and 
// digit=9 then the resulting number is 2349

#include<stdio.h>
int main()
{
    int n,d,b;
    printf("write no.");
    scanf("%d",&n);
     printf("write digit");
     scanf("%d",&d);
    b=n*10+d;
    printf("%d",b);
    /* code */
    return 0;
}
