#include<stdio.h>
double num;
#define g(x) ((3*(x)*(x)))
double f(double x){return (((x)*(x)*(x))-num);}

int main()
{
 double xn,temp,x;
 
 scanf("%lf",&num);
 printf("Cube Root Of %.2f is ",num);
 if(num == 0 ) {printf("0");return 0;}
 if(num < 0 ) num=-num,printf("-");

 for(int i=0;;i++)
    if(f(i)*f(i+1)<=0)
    {temp = (2*i+1)/2;break;}


    xn=((temp)-(f(temp)/g(temp)));

    for(int i=0;x!=xn;i++)
    {
    x=xn;
    xn=((xn)-(f(xn)/g(xn)));
    }
    printf("%f",xn);
    return 0;
}
