#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    double x1, y1, x2, y2, D;
    
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    
    D = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
    
    printf("%.2lf", D);
    
    return 0;
}
