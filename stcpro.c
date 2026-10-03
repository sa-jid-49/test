#include <stdio.h>

#define PI 3.14159

int main() {
    // Variable declarations for rectangle and circle
    float length, width, rect_area, rect_perimeter;
    float radius, circle_area, circle_circumference;

    // --- Rectangle Calculations ---
    printf("--- Rectangle Calculator ---\n");
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    // Formulas for Rectangle
    rect_area = length * width;
    rect_perimeter = 2 * (length + width);

    // Display Rectangle Results
    printf("Area of the rectangle: %.2f\n", rect_area);
    printf("Perimeter of the rectangle: %.2f\n\n", rect_perimeter);

    // --- Circle Calculations ---
    printf("--- Circle Calculator ---\n");
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    // Formulas for Circle
    circle_area = PI * radius * radius;
    circle_circumference = 2 * PI * radius;

    // Display Circle Results
    printf("Area of the circle: %.2f\n", circle_area);
    printf("Circumference (Perimeter) of the circle: %.2f\n", circle_circumference);

    return 0;
}
