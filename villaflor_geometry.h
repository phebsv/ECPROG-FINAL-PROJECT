#ifndef VILLAFLOR_GEOMETRY_H_INCLUDED
#define VILLAFLOR_GEOMETRY_H_INCLUDED

/*
 * Calculate the area of a circle.
 * parameter: radius the radius of the circle. non negative value.
 * return: the area of the circle.
 */
double areaCircle(double radius);

/*
 * Calculate the perimeter (circumference) of a circle.
 * parameter: radius the radius of the circle. non negative value.
 * return: the perimeter of the circle.
 */
double perimeterCircle(double radius);

/*
 * Calculate the area of a rectangle.
 * parameter: length the length of the rectangle. non negative value.
 * parameter: width the width of the rectangle. non negative value.
 * return: the area of the rectangle.
 */
double areaRectangle(double length, double width);

/*
 * Calculate the perimeter of a rectangle.
 * parameter: length the length of the rectangle. non negative value.
 * parameter: width the width of the rectangle. non negative value.
 * return: the perimeter of the rectangle.
 */
double perimeterRectangle(double length, double width);

/*
 * Calculate the area of a triangle.
 * parameter: base the base length of the triangle. non negative value.
 * parameter: height the height of the triangle. non negative value.
 * return: the area of the triangle.
 */
double areaTriangle(double base, double height);

/*
 * Calculate the perimeter of a triangle.
 * parameter: side1 the length of the first side of the triangle. non negative value.
 * parameter: side2 the length of the second side of the triangle. non negative value.
 * parameter: side3 the length of the third side of the triangle. non negative value.
 * return: the perimeter of the triangle.
 */
double perimeterTriangle(double side1, double side2, double side3);

/*
 * Calculate the distance between two points in a 2D plane.
 * parameter: x1 the x-coordinate of the first point.
 * parameter: y1 the y-coordinate of the first point.
 * parameter: x2 the x-coordinate of the second point.
 * parameter: y2 the y-coordinate of the second point.
 * return: the distance between the two points.
 */
double distanceBetweenPoints(double x1, double y1, double x2, double y2);

/*
 * Calculate the volume of a sphere.
 * parameter: radius the radius of the sphere. non negative value.
 * return: the volume of the sphere.
 */
double volumeSphere(double radius);

/*
 * Calculate the surface area of a sphere.
 * parameter: radius the radius of the sphere. non negative value.
 * return: the surface area of the sphere.
 */
double surfaceAreaSphere(double radius);

/*
 * Calculate the volume of a cube.
 * parameter: side the length of a side of the cube. non negative value.
 * return: the volume of the cube.
 */
double volumeCube(double side);

/*
 * Calculate the surface area of a cube.
 * parameter: side the length of a side of the cube. non negative value.
 * return: the surface area of the cube.
 */
double surfaceAreaCube(double side);

/*
 * Calculate the volume of a cylinder.
 * parameter: radius the radius of the base of the cylinder. non negative value.
 * parameter: height the height of the cylinder. non negative value.
 * return: the volume of the cylinder.
 */
double volumeCylinder(double radius, double height);

/*
 * Calculate the surface area of a cylinder.
 * parameter: radius the radius of the base of the cylinder. non negative value.
 * parameter: height the height of the cylinder. non negative value.
 * return: the surface area of the cylinder.
 */
double surfaceAreaCylinder(double radius, double height);

/*
 * Calculate the volume of a cone.
 * parameter: radius the radius of the base of the cone. non negative value.
 * parameter: height the height of the cone. non negative value.
 * return: the volume of the cone.
 */
double volumeCone(double radius, double height);

/*
 * Calculate the surface area of a cone.
 * parameter: radius the radius of the base of the cone. non negative value.
 * parameter: height the height of the cone. non negative value.
 * return: the surface area of the cone.
 */
double surfaceAreaCone(double radius, double height);

/*
 * Calculate the volume of a pyramid.
 * parameter: baseLength the length of the base of the pyramid. non negative value.
 * parameter: baseWidth the width of the base of the pyramid. non negative value.
 * parameter: height the height of the pyramid. non negative value.
 * return: the volume of the pyramid.
 */
double volumePyramid(double baseLength, double baseWidth, double height);

/*
 * Calculate the surface area of a pyramid.
 * parameter: baseLength the length of the base of the pyramid. non negative value.
 * parameter: baseWidth the width of the base of the pyramid. non negative value.
 * parameter: height the height of the pyramid. non negative value.
 * return: the surface area of the pyramid.
 */
double surfaceAreaPyramid(double baseLength, double baseWidth, double height);

#endif // VILLAFLOR_GEOMETRY_H_INCLUDED
