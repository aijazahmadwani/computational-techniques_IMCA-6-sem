// lagrangian interpolation program
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x[10],y[10],i=0,size;
    float result=0,X=2.5;
    printf("Enter size\t");
    scanf("%d",&size);

    printf("Enter values of x array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&x[i]);
    }

    printf("Enter values of y array:\n");
    for(i=0;i<size;i++){
        scanf("%d",&y[i]);
    }

    for(i=0;i<size;i++){
    float prod = y[i];
        for(int j=0;j<size;j++){
            if(i==j){
                continue;
            }
            prod *= ((X-x[j])/(x[i]-x[j]));
        }
        result += prod;
    }
    printf("Result = %f",result);

}
