#include <stdio.h>

int main() {
    int choice;
    float radius, length, width, base, height, area;

    printf("Choose shape to find area:\n");
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Enter radius of circle: ");
        scanf("%f", &radius);
        area = 3.14 * radius * radius;
        printf("Area of Circle = %.2f\n", area);
    }
    else if(choice == 2) {
        printf("Enter length and width of rectangle: ");
        scanf("%f %f", &length, &width);
        area = length * width;
        printf("Area of Rectangle = %.2f\n", area);
    }
    else if(choice == 3) {
        printf("Enter base and height of triangle: ");
        scanf("%f %f", &base, &height);
        area = 0.5 * base * height;
        printf("Area of Triangle = %.2f\n", area);
    }
    else {
        printf("Invalid choice!\n");
    }

}