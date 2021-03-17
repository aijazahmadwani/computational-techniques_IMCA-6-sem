// false position method
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define e 0.001
#define f(x) x*x*x -2*x -5
int main()
{
    int i=0;
    float x1,x2,x3,f1,f2,f3;
    printf("enter the values of x1 and x2");
    scanf("%f%f",&x1,&x2);
    do
    {
    f1=f(x1);
    f2=f(x2);

    x3=((x1*f2)-(x2*f1))/(f2-f1);
     f3=f(x3);
    if( f1*f3<0)
    {
    x2=x3;
    }
    else
    {
    x1=x3;
    }
    i++;
    printf("No of iterations=%d\t",i);
    printf("root=%f\t",x3);
    printf("value of function=%f\n",f3);
    }while(fabs(f3)>e);
    getch();
}
