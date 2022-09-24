// 9. Write a program to print size of an int, a float, a char and a double type variable

#include <stdio.h>
int main()
{
    int a;
    char b;
    float c;
    double d;
    int s = sizeof(a);
    printf("%d\n", s);
    int t = sizeof(b);
    printf("%d\n", t);
    int u = sizeof(c);
    printf("%d\n", u);
    int v = sizeof(d);
    printf("%d", v);
    /* code */
    return 0;
}
