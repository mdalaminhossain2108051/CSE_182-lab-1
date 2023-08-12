#include<stdio.h>
main()
{
    float a,b,c,p,s,area;
    a=7;
    b=9;
    c=4;
    p=a+b+c;
    s=p/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
     printf("The perimeter of triangle=%f\n",p);
      printf("The area of triangle=%f\n",area);
}
