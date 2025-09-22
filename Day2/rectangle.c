#include <stdio.h>

int main() {
    int length, width, area;

    printf("Enter the length: ");
    scanf("%d", &length);

    printf("Enter the width: ");
    scanf("%d", &width);

    area = length * width;

    printf("Area of Rectangle = %d\n", area);

    return 0;
}
