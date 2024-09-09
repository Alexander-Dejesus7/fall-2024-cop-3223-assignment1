#include <stdio.h>
#include <math.h>
# define PI 3.14159

double calculateDistance() {

    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
    double distance = 0.0;
    //These ask the user to input the points 
    printf("Point #1: Enter x1: ");
    x1 = scanf("%lf",&x1);

    printf(", Enter y1: ");
    y1 = scanf("%lf",&y1);

    printf("\nPoint #2: Enter x2: ");
    x2 = scanf("%lf",&x1);

    printf(", Enter y2: ");
    y2 = scanf("%lf",&y1);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    
    printf("The distance between the two points is: %.2f\n", distance);

    return distance;

// Function to calculate the perimeter (circumference) of a circle
double calculatePerimeter() {
    double difficulty = 1.0;
    double distance = calculateDistance();
    double radius = 0.0;
    radius = distance / 2.0;
    double perimeter = 0.0; 
    perimeter = 2 * PI * radius;

    printf("The perimeter of the city (circle) is: %.2f\n", perimeter);
    
    difficulty = 2.0

    return difficulty;
}

// Function to calculate the area of a circle
double calculateArea() {
    double difficulty = 1.0;
    double distance = calculateDistance();
    double radius = 0.0;
    double area = 0.0;
    area = distance / 2.0;
    area = PI * pow(radius, 2);

    printf("The area of the city (circle) is: %.2f\n", area);

    difficulty = 2.0

    return difficulty;
}

// Function to calculate the width (diameter) of a circle
double calculateWidth() {
    double distance = calculateDistance();
    double difficulty = 1.0;
    // Since it's a circle, the width and height are equal.
    printf("The width (diameter) of the city is: %.2f\n", distance);

    difficulty = 1.0

    return difficulty;
}

// Function to calculate the height (diameter) of a circle
double calculateHeight() {
    double distance = calculateDistance();
    double difficulty = 1.0;
    // Since it's a circle, the diameter and height are equal.
    printf("The height (diameter) of the city is: %.2f\n", distance);

    difficulty = 1.0;

    return difficulty;
    
}

int main(int argc, char **argv) {
    // Calculate distance between two points
    double distance = calculateDistance();
    
    // Calculate and display the perimeter, area, width, and height of the circle
    calculatePerimeter(distance);
    calculateArea(distance);
    calculateWidth(distance);
    calculateHeight(distance);

    return 0; 
}


}
