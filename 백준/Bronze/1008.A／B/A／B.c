#include<stdio.h>
int main()
{
    int a,b;
    double c;
    scanf("%d %d", &a, &b);
    c= (double)a/b;
    printf("%.9f\n",c);
    return 0;
}