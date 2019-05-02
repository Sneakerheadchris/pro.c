#include <stdio.h>
#include <math.h>
int x,os,h;
float v0, theta, y;
float g =9.81;
int main()
{
    printf("Enter the magnitude of v0:\n");
    scanf("%f",&v0);
    printf("Enter theta in degree:\n");
    scanf("%f",&theta);
    os = (v0*v0)*sin(2*(theta))/9.81;
    printf("%d\n",os);
    h = sqrt(v0*sin(theta))/(2*9.81);
    printf("%d\n",h);
   y=(tan(theta)*(x))-((0.5*g*x)/(v0*cos(theta)));
    return 0;
}
