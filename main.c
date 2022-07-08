#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    double x1,x2,y1,y2,d;
    printf("give x1:");
    scanf("%lf",&x1);
    printf("give x2:");
    scanf("%lf",&x2);
    printf("give y1:");
    scanf("%lf",&y1);
    printf("give y2:");
    scanf("%lf",&y2);
    d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("%lf",d);
    return 0;
}
