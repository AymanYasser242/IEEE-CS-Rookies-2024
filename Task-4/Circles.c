#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

    
    double centerX1 = (x1 + x2) / 2.0;
    double centerY1 = (y1 + y2) / 2.0;
    double centerX2 = (x3 + x4) / 2.0;
    double centerY2 = (y3 + y4) / 2.0;

   
    double distance = sqrt(pow(centerX2 - centerX1, 2) + pow(centerY2 - centerY1, 2));

    
    double radius1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) / 2.0;
    double radius2 = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2)) / 2.0;

    
    if (distance > radius1 + radius2) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    return 0;
}
