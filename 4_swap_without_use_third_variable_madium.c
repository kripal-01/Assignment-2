// 4. Write a program to swap values of two int variables without using a third variabl

#include<stdio.h>

int main()
{ int a,b;
printf("enter the value of a and b  ");
 scanf("%d %d",&a,&b);
 //not exchange value we want to exchange data
 a=a+b;
 b=a-b;
  a=a-b;
 printf("value of a is %d and value of b is %d",a,b);
    /* code */
    return 0;
}
