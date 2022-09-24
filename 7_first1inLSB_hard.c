// 7. Write a program to find the position of first 1 in LSB.

#include<stdio.h>

int main()
{ int a;
    int count=1;
scanf("%d",&a);
if(a==0){
    printf("not exist");
}
else{

    while((a|0)==0){
        a=a>>1;  // left shift
        count++;
    }
  printf("No of Count is:%d",count);
}
    /* code */
    return 0;
}



