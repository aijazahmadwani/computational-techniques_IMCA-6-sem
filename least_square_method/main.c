//least square method
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x[10],y[10],x_summation=0,y_summation=0,xy_summation=0,x_square_summation=0,x_summation_square=0;
    int i,n=0;
    float a2,a1;
    printf("Enter size of array");
    scanf("%d",&n);
    printf("Enter values of x array");
    for(i=0;i<n;i++){
        scanf("%f",&x[i]);
    }
    printf("Enter values of y array");
    for(i=0;i<n;i++){
        scanf("%f",&y[i]);
    }
    for(i=0;i<n;i++){
        x_summation += x[i];
        y_summation += y[i];
        xy_summation += x[i]*y[i];
        x_square_summation += x[i]*x[i];
    }
    x_summation_square = x_summation * x_summation;
    //formula
    a2 = (n*(xy_summation)-(x_summation*y_summation))/((n*x_square_summation)-(x_summation_square));
    a1 = ((y_summation*x_square_summation)-(x_summation*xy_summation))/((n*x_square_summation)-(x_summation_square));
    printf("a2 = %f\n",a2);
    printf("a1 = %f\n",a1);


    return 0;
}
