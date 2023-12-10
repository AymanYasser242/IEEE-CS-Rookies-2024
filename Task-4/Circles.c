#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX_N 10001

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
    double r1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)) / 2;
    double r2 = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2)) / 2;
    double d = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
    if (d > r1 + r2) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
    return 0;
}
