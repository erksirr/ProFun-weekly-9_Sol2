#include <stdio.h>
void swap(float* x, float* y)
{
    *x = *x * *y;
    *y = *x / *y;
    *x = *x / *y;
}
int main()
{
    float x, y;
    scanf_s("%f %f", &x, &y);
    swap(&x, &y);
    printf("%.f %.f", x, y);
    return 0;
}
