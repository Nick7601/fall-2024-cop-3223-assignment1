//********************************************************
// fracture.c
// Author: Nicholas Ferguson
// UCFID: 5583238
// Class: COP 3223, Professor Parra
// Purpose: This program will uses functions to calculate width,
// height, distance, area and perimeter
// Input: None
//
// Output: None
// //********************************************************

// Header file for input output functions
#include <stdio.h>

// Header file for math functions
#include <math.h>

// Preprocessor directive for PI
#define PI 3.14159

//********************************************************
// double getX1()
//
// Purpose:         To set X1 to a value in the distance formula.
// Output:          None
// Precondition:    None
// Postcondition:   None
//********************************************************

double getX1()
{
    double x1;  // Value of x1
    printf("x1? ");
    scanf("%lf", &x1);

    return x1;
}

//********************************************************
// double getX2()
//
// Purpose:         To set X2 to a value in the distance formula.
// Output:          None
// Precondition:    None
// Postcondition:   None
//********************************************************

double getX2()
{
    double x2;  // Value of x2
    printf("x2? ");
    scanf("%lf", &x2);
    return x2;
}

//********************************************************
// double getY1()
//
// Purpose:         To set Y1 to a value in the distance formula.
// Output:          None
// Precondition:    None
// Postcondition:   None
//********************************************************

double getY1()
{
    double y1;  // Value of y1
    printf("y1? ");
    scanf("%lf", &y1);

    return y1;
}

//********************************************************
// double getY2()
//
// Purpose:         To set Y2 to a value in the distance formula.
// Output:          None
// Precondition:    None
// Postcondition:   None
//********************************************************

double getY2()
{
    double y2;  // Value of y2
    printf("y2? ");
    scanf("%lf", &y2);

    return y2;
}


//********************************************************
// double calculateDistance()
//
// Purpose:         To calculate the distance between two points and returns solution
// Output:          Prints out the soultion to the distance formula
// Precondition:    getX1(), getX2(), getY1(), and getY2() returning a value
// Postcondition:   None
//********************************************************

double calculateDistance()
{
    double x1 = getX1();    // Calls to X1 function for value
    double x2 = getX2();    // Calls to X2 function for value
    double y1 = getY1();    // Calls to Y1 function for value
    double y2 = getY2();    // Calls to Y2 function for value

    // Gets the distance with the distance formula

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Prints point #1 and #2
    printf("Point #1 entered: x1 = %.1f ; y1 = %.1f\n", x1, y1);

    printf("Point #2 entered: x2 = %.1f ; y2 = %.1f\n", x2, y2);
    
    // Prints distance solution and skips a line
    printf("The distance between the two points is %.3f\n", distance);
    printf("\n");

    return distance;      
}

//********************************************************
// double calculatePerimeter()
//
// Purpose:         To calculate the perimeter, state the solution, and returns
//                  the difficulty of the function was to create.
// Output:          Prints out the soultion to the perimeter
// Precondition:    getX1(), getX2(), getY1(), and getY2() returning a value
// Postcondition:   None
//********************************************************

double calculatePerimeter()
{
    double x1 = getX1();    // Calls to X1 function for value
    double x2 = getX2();    // Calls to X2 function for value
    double y1 = getY1();    // Calls to Y1 function for value
    double y2 = getY2();    // Calls to Y2 function for value
    
    // Gets perimeter with the perimeter formula
    double perimeter = x1 + x2 + y1 + y2;
    double difficultyRating;

    // Prints point #1 and #2
    printf("Point #1 entered: x1 = %.1f ; y1 = %.1f\n", x1, y1);

    printf("Point #2 entered: x2 = %.1f ; y2 = %.1f\n", x2, y2);

    // Prints perimeter solution and skips a line

    printf("The perimeter of the city encompassed by your request is %.3f\n", perimeter);
    printf("\n");

    printf("How difficult was this function to make (1.0 -5.0)? ");
    scanf("%lf", &difficultyRating);

    return difficultyRating;
}

//********************************************************
// double calculateArea()
//
// Purpose:         To calculate the area, state the solution, and returns
//                  the difficulty of the function was to create.
// Output:          Prints out the soultion to the perimeter
// Precondition:    getX1(), getX2(), getY1(), and getY2() returning a value
// Postcondition:   None
//********************************************************

double calculateArea()
{
    double area = 25;               // Solution for area
    double difficultyRating = 3.0;  // Difficulty rating of function from 1.0 - 5.0

    // Prints area solution and skips a line

    printf("The area of the city encompassed by your request is %.2f\n", area);
    printf("\n");

    return difficultyRating;
}

//********************************************************
// double calculateWidth()
//
// Purpose:         To calculate the width, state the solution, and returns
//                  the difficulty of the function was to create.
// Output:          Prints out the two points and the soultion to the width
// Precondition:    getX1(), getX2(), getY1(), and getY2() returning a value
// Postcondition:   None
//********************************************************

double calculateWidth()
{
    double width = 5;               // Solution for width
    double difficultyRating = 4.0;  // Difficulty rating of function from 1.0 - 5.0

    // Prints width solution and skips a line

    printf("The width of the city encompassed by your request is %.2f\n", width);
    printf("\n");

    return difficultyRating;
}

//********************************************************
// double calculateHeight()
//
// Purpose:         To calculate the height, state the solution, and returns
//                  the difficulty of the function was to create.
// Output:          Prints out the two points and the soultion to the height
// Precondition:    getX1(), getX2(), getY1(), and getY2() returning a value
// Postcondition:   None
//********************************************************

double calculateHeight()
{
    double height = 5;              // Solution for height
    double difficultyRating = 1.0;  // Difficulty rating of function from 1.0 - 5.0

    // Prints height solution and skips a line

    printf("The height of the city encompassed by your request is %.2f\n", height);
    printf("\n");

    return difficultyRating;
}

// main function - shows all outputs from every function

int main(int argc, char **argv)
{
    // Shows output of calculateDistance() function in terminal
    double showDistance = calculateDistance();

    // Shows output of calculatePerimeter() function in terminal
    double showPerimeter = calculatePerimeter();

    // Shows output of calculateArea() function in terminal
    double showArea = calculateArea();

    // Shows output of calculateWidth() function in terminal 
    double showWidth = calculateWidth();

    // Shows output of calculateHeight() functionin terminal
    double showHeight = calculateHeight();

    return 0;
} //main