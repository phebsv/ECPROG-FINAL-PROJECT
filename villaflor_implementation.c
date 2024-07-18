#include "villaflor_header.h"
#define PI 3.14159265358979323846

// Function implementations

double areaCircle(double radius){
    return PI * radius * radius;
}

double perimeterCircle(double radius) {
    return 2 * PI * radius;
}

double areaRectangle(double length, double width) {
    return length * width;
}

double perimeterRectangle(double length, double width) {
    return 2 * (length + width);
}

double areaTriangle(double base, double height) {
    return 0.5 * base * height;
}

double perimeterTriangle(double side1, double side2, double side3) {
    return side1 + side2 + side3;
}

double distanceBetweenPoints(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
}

// Helper function to manually compute square root
double sqrt(double number) {
    double x = number;
    double y = 1.0;
    double e = 0.00001; // Define the precision of the result

    while (x - y > e) {
        x = (x + y) / 2;
        y = number / x;
    }
    return x;
}

double volumeSphere(double radius) {
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

double surfaceAreaSphere(double radius) {
    return 4 * PI * radius * radius;
}

double volumeCube(double side) {
    return side * side * side;
}

double surfaceAreaCube(double side) {
    return 6 * side * side;
}

double volumeCylinder(double radius, double height) {
    return PI * radius * radius * height;
}

double surfaceAreaCylinder(double radius, double height) {
    return 2 * PI * radius * (radius + height);
}

double volumeCone(double radius, double height) {
    return (1.0 / 3.0) * PI * radius * radius * height;
}

double surfaceAreaCone(double radius, double height) {
    double slantHeight = sqrt(radius * radius + height * height);
    return PI * radius * (radius + slantHeight);
}

double volumePyramid(double baseLength, double baseWidth, double height) {
    return (1.0 / 3.0) * baseLength * baseWidth * height;
}

double surfaceAreaPyramid(double baseLength, double baseWidth, double slantHeight) {
    double baseArea = baseLength * baseWidth;
    double perimeterBase = 2 * (baseLength + baseWidth);
    return baseArea + (0.5 * perimeterBase * slantHeight);
}
