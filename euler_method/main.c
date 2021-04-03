#include <stdio.h>
#include <stdlib.h>


float roundFloat(float f){
    float a = (int)((f*1000)+.5);
    return a/1000;
}



int main()
{
    printf("%f",roundFloat(34.66678));
    float  x,y,step_size,interval_start,interval_end,next_y,next_x;
    printf("Enter value of x and y: ");
    scanf("%f%f",&x,&y);
    printf("Enter step size: ");
    scanf("%f",&step_size);
    printf("Enter start and end interval: ");
    scanf("%f%f",&interval_start,&interval_end);

    while(x<interval_end){
        next_y = y + step_size*(x*y);
        next_x = x + step_size;
        y = roundFloat(next_y);
        x = next_x;
        printf("x = %f\n",x);
        printf("y = %f\n",y);
    }

    return 0;
}
