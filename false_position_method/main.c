// False Position Method

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define e 0.0001
#define f(x) x*x*x-2*x-5
int main()
{
    int i=0;
    float x1,x2,x3,f1,f2,f3;
    printf("Enter the value of x1 and x2: ");
    scanf("%f%f",&x1,&x2);

    do{
       f1 = f(x1);
       f2 = f(x2);
       x3 = ((x1*f(2))-(x2*f(1)))/f(2)-f(1);
       f3 = f(x3);

       if(f1*f3>0){
        x1=x3;
       }
       else{
        x2=x3;
       }
       i++;
       printf("No. of iterations = %d", i);
       printf("Root = %f",x3);
       printf("Value of function = %f \n", f3);



    }while(fabs(f3)>e);

}
