#include <stdio.h>
#include <math.h>

int main() {
    int width = 40;
    int height = 20;
    for (int y = height; y >= -height; y--)
    {
        for (int x = -width; x <= width; x++) 
        {
            double a = pow(x * 0.05, 2) + pow(y * 0.1, 2) - 1;
            if (a * a * a - pow(x * 0.05, 2) * pow(y * 0.1, 3) <= 0.0) 
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}