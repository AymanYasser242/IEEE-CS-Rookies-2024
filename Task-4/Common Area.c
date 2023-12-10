#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int min(int a, int b)
{
    return (a < b) ? a : b;
}

int commonArea(int rectangles[][4], int n)
{

    int commonX1 = rectangles[0][0];
    int commonY1 = rectangles[0][1];
    int commonX2 = rectangles[0][2];
    int commonY2 = rectangles[0][3];

    for (int i = 1; i < n; i++)
    {
        commonX1 = max(commonX1, rectangles[i][0]);
        commonY1 = max(commonY1, rectangles[i][1]);
        commonX2 = min(commonX2, rectangles[i][2]);
        commonY2 = min(commonY2, rectangles[i][3]);
    }

    int result = (commonX2 > commonX1) ? (commonX2 - commonX1) * (commonY2 > commonY1 ? (commonY2 - commonY1) : 0) : 0;

    return result;
}

int main()
{
    int t;
    scanf("%d", &t);

    for (int testCase = 1; testCase <= t; testCase++)
    {
        int n;
        scanf("%d", &n);

        int rectangles[n][4];

        for (int i = 0; i < n; i++)
        {
            scanf("%d %d %d %d", &rectangles[i][0], &rectangles[i][1], &rectangles[i][2], &rectangles[i][3]);
        }

        int result = commonArea(rectangles, n);
        printf("Case #%d: %d\n", testCase, result);
    }

    return 0;
}
