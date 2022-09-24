// 13. Write a program to take a three-digit number from the user and rotate its digits by 
// one position towards the right

// #include<stdio.h>
// int main()
// { int a,u,t,h,n;
// printf("enter three digit no.");
// scanf("%d",&a);
// u=a%10;
// a/=10;

// t=a%10;
// a/=10;
   
// h=a%10;
// a/=10;   

// n=100*u+10*t+h;
// printf("reverse no. is %d",n);
//     return 0;
// }


#include<stdio.h>
int main()
{
    int n,r;
    printf("enter three digit  no.");
    scanf("%d",&n);
    r=n%10*100+n/10;
    printf("%d",r);
    /* code */
    return 0;
}
