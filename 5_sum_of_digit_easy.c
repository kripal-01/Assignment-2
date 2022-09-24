// 5. Write a program to input a three-digit number and display the sum of the digits.


#include<stdio.h>

int main()
{ int a;
   scanf("%d",&a);
   int sum=0,rem=0;
   rem=a%10;
   a/=10;
   sum=sum+rem;

   rem=a%10;
   a/=10;
   sum=sum+rem;

   rem=a%10;
   a/=10;
   sum=sum+rem;
   printf("sum is  %d",sum);
    /* code */
    return 0;
}
