#include <stdio.h>
#include "villaflor_geometry.h"

int main(){
    double radius = 5.0;
    double length = 10.0;
    double width = 4.0;
    double base = 6.0;
    double height = 8.0;
    double side1 = 3.0, side2 = 4.0, side3 = 5.0;
    double x1 = 1.0, y1 = 1.0, x2 = 4.0, y2 = 5.0;
    double side = 3.0;

    // Circle calculations
    printf("Circle \n");
    printf("Area: %.2f\n", areaCircle(radius));
    printf("Perimeter: %.2f\n", perimeterCircle(radius));

    // Rectangle calculations
    printf("\nRectangle \n");
    printf("Area: %.2f\n", areaRectangle(length, width));
    printf("Perimeter: %.2f\n", perimeterRectangle(length, width));

    // Triangle calculations
    printf("\nTriangle \n");
    printf("Area: %.2f\n", areaTriangle(base, height));
    printf("Perimeter: %.2f\n", perimeterTriangle(side1, side2, side3));

    // Distance between two points
    printf("\nDistance between points: \n");
    printf("Distance: %.2f\n", distanceBetweenPoints(x1, y1, x2, y2));

    // Sphere calculations
    printf("\nSphere \n");
    printf("Volume: %.2f\n", volumeSphere(radius));
    printf("Surface Area: %.2f\n", surfaceAreaSphere(radius));

    // Cube calculations
    printf("\nCube \n");
    printf("Volume: %.2f\n", volumeCube(side));
    printf("Surface Area: %.2f\n", surfaceAreaCube(side));

    // Cylinder calculations
    printf("\nCylinder \n");
    printf("Volume: %.2f\n", volumeCylinder(radius, height));
    printf("Surface Area: %.2f\n", surfaceAreaCylinder(radius, height));

    // Cone calculations
    printf("\nCone \n");
    printf("Volume: %.2f\n", volumeCone(radius, height));
    printf("Surface Area: %.2f\n", surfaceAreaCone(radius, height));

    // Pyramid calculations
    double baseLength = 6.0, baseWidth = 6.0;
    printf("\nPyramid \n");
    printf("Volume: %.2f\n", volumePyramid(baseLength, baseWidth, height));
    printf("Surface Area: %.2f\n", surfaceAreaPyramid(baseLength, baseWidth, height));

    return 0;
}


