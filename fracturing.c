// Name: Riley Gravelle 
// UCFID: 5631932

#include <stdio.h>
#include <math.h>
#define PI 3.14159

// Function to get user input
double askForUserInput(const char* point, const char* coordinate) {
    double value;
    printf("Enter %s coordinate of %s: ", coordinate, point);
    scanf("%lf", &value);
    return value;
}

// Function to calculate distance between two points
double calculateDistance() {
    double x1 = askForUserInput("Point #1", "x1");
    double y1 = askForUserInput("Point #1", "y1");
    double x2 = askForUserInput("Point #2", "x2");
    double y2 = askForUserInput("Point #2", "y2");

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Point #1 entered: x1 = %.2f; y1 = %.2f\n", x1, y1);
    printf("Point #2 entered: x2 = %.2f; y2 = %.2f\n", x2, y2);
    printf("The distance between the two points is %.2f\n", distance);

    return distance;
}

// Function to calculate perimeter using distance
double calculatePerimeter() {
    double distance = calculateDistance();

    // Assuming the perimeter is 4 times the distance 
    double perimeter = 4 * distance;

    printf("The perimeter of the city encompassed by your request is %.2f\n", perimeter);
    return 2.0;  
}

// Function to calculate area using distance
double calculateArea() {
    double distance = calculateDistance();

    // Assuming the area is the square of the distance 
    double area = pow(distance, 2);

    printf("The area of the city encompassed by your request is %.2f\n", area);
    return 1.0;  
}

// Function to calculate width based on x coordinates
double calculateWidth() {
    double x1 = askForUserInput("Point #1", "x1");
    double x2 = askForUserInput("Point #2", "x2");

    double width = fabs(x2 - x1);

    printf("Point #1 entered: x1 = %.2f; y1 = (not needed)\n", x1);
    printf("Point #2 entered: x2 = %.2f; y2 = (not needed)\n", x2);
    printf("The width of the city encompassed by your request is %.2f\n", width);

    return 2.0;  
}

// Function to calculate height based on y coordinates
double calculateHeight() {
    double y1 = askForUserInput("Point #1", "y1");
    double y2 = askForUserInput("Point #2", "y2");

    double height = y2 - y1;

    printf("Point #1 entered: x1 = (not needed); y1 = %.2f\n", y1);
    printf("Point #2 entered: x2 = (not needed); y2 = %.2f\n", y2);
    printf("The height of the city encompassed by your request is %.2f\n", height);

    return 2.0;  
}

int main() {
    calculateDistance();
    calculatePerimeter();
    calculateArea();
    calculateWidth();
    calculateHeight();

    return 0;
}
