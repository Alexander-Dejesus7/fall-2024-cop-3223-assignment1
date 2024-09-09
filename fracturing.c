#include <stdio.h>
#include <math.h>
#define PI 3.14159

//This function is used to calculate the distance between two points.
double calculateDistance() {
    //All the variables are declared here
    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
    double distance = 0.0;
    //These ask the user to input the points 
    printf("\nPoint #1:\nEnter x1: ");
    x1 = scanf("%lf",&x1);

    printf("Enter y1: ");
    y1 = scanf("%lf",&y1);

    printf("\nPoint #2:\nEnter x2: ");
    x2 = scanf("%lf",&x1);

    printf("Enter y2: ");
    y2 = scanf("%lf",&y1);

    printf("\nPoint #1 entered: x1 = %.2f, y1 = %.2f",x1,y1);
    printf("\nPoint #2 entered: x2 = %.2f, y2 = %.2f",x2,y2);
    //This uses the distance formula for two points to destinguish how far they are from each other.
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("\nThe distance between the two points is: %.2f\n", distance);

    return distance;
}
// Function to calculate the perimeter (circumference) of a circle
double calculatePerimeter() {
    //declares the variables used in the function
    double distance = 0.0;
    double radius = 0.0;
    double perimeter = 0.0; 
    //This variable calls the caldulateDistance function so that the distance acquired can be used in the rest of the function.
    distance = calculateDistance();
    //This variable is used to calculate the radius of the circle by dividing the distance between the two points by two
    radius = distance / 2.0;
    //This variable is used to calculate the perimeter of the circle by multiplying the radius by two times the defined variable PI 
    perimeter = 2 * PI * radius;

    printf("The perimeter of the city (circle) is: %.2f\n\n", perimeter);

    return 1.5;
}

// Function to calculate the area of a circle
double calculateArea() {
    //declares the variables used in the function
    double distance = 0.0;
    double radius = 0.0;
    double area = 0.0;
    //This variable calls the caldulateDistance function so that the distance acquired can be used in the rest of the function.
    distance = calculateDistance();
    radius = distance / 2.0;
    //This variable is used to calculate the area of a circle by multiplying the defined variable PI by the radius squared.
    area = PI * pow(radius, 2);

    printf("The area of the city (circle) is: %.2f\n\n", area);

    return 1.5;
}

// Function to calculate the width (diameter) of a circle
double calculateWidth() {
    //declares the variables used in the function
    double distance = 0.0;
    //This variable calls the caldulateDistance function so that the distance acquired can be used in the rest of the function.
    distance = calculateDistance();
    // Since it's a circle, the width is the same as the diameter
    printf("The width (diameter) of the city is: %.2f\n\n", distance);

    return 1.0;
}

// Function to calculate the height (diameter) of a circle
double calculateHeight() {
    //declares the variables used in the function
    double distance = 0.0;
    distance = calculateDistance();
    // Since it's a circle, the height is the same as the diameter
    printf("The height (diameter) of the city is: %.2f\n\n", distance);

    return 1.0;
    
}

int main(int argc, char **argv) {
    //declares the variables used in the function
    double distance = 0.0;
    // Calculate distance between two points
    distance = calculateDistance();
    
    // Calculate and display the perimeter, area, width, and height of the circle
    calculatePerimeter(distance);
    calculateArea(distance);
    calculateWidth(distance);
    calculateHeight(distance);

    return 0; 
}