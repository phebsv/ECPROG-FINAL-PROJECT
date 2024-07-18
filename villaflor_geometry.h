#ifndef VILLAFLOR_GEOMETRY_H_INCLUDED
#define VILLAFLOR_GEOMETRY_H_INCLUDED

/*
 * Calculate the area of a circle.
 * @param radius The radius of the circle.
 * @return The area of the circle.
 */
double areaCircle(double radius);

/*
 * Calculate the perimeter (circumference) of a circle.
 * @param radius The radius of the circle.
 * @return The perimeter of the circle.
 */
double perimeterCircle(double radius);

/*
 * Calculate the area of a rectangle.
 * @param length The length of the rectangle.
 * @param width The width of the rectangle.
 * @return The area of the rectangle.
 */
double areaRectangle(double length, double width);

/*
 * Calculate the perimeter of a rectangle.
 * @param length The length of the rectangle.
 * @param width The width of the rectangle.
 * @return The perimeter of the rectangle.
 */
double perimeterRectangle(double length, double width);

/*
 * Calculate the area of a triangle.
 * @param base The base length of the triangle.
 * @param height The height of the triangle.
 * @return The area of the triangle.
 */
double areaTriangle(double base, double height);

/*
 * Calculate the perimeter of a triangle.
 * @param side1 The length of the first side of the triangle.
 * @param side2 The length of the second side of the triangle.
 * @param side3 The length of the third side of the triangle.
 * @return The perimeter of the triangle.
 */
double perimeterTriangle(double side1, double side2, double side3);

/*
 * Calculate the distance between two points in a 2D plane.
 * @param x1 The x-coordinate of the first point.
 * @param y1 The y-coordinate of the first point.
 * @param x2 The x-coordinate of the second point.
 * @param y2 The y-coordinate of the second point.
 * @return The distance between the two points.
 */
double distanceBetweenPoints(double x1, double y1, double x2, double y2);

/*
 * Calculate the volume of a sphere.
 * @param radius The radius of the sphere.
 * @return The volume of the sphere.
 */
double volumeSphere(double radius);

/*
 * Calculate the surface area of a sphere.
 * @param radius The radius of the sphere.
 * @return The surface area of the sphere.
 */
double surfaceAreaSphere(double radius);

/*
 * Calculate the volume of a cube.
 * @param side The length of a side of the cube.
 * @return The volume of the cube.
 */
double volumeCube(double side);

/*
 * Calculate the surface area of a cube.
 * @param side The length of a side of the cube.
 * @return The surface area of the cube.
 */
double surfaceAreaCube(double side);

/*
 * Calculate the volume of a cylinder.
 * @param radius The radius of the base of the cylinder.
 * @param height The height of the cylinder.
 * @return The volume of the cylinder.
 */
double volumeCylinder(double radius, double height);

/*
 * Calculate the surface area of a cylinder.
 * @param radius The radius of the base of the cylinder.
 * @param height The height of the cylinder.
 * @return The surface area of the cylinder.
 */
double surfaceAreaCylinder(double radius, double height);

/*
 * Calculate the volume of a cone.cone.
 * @param radius The radius of the base of the cone.
 * @param height The height of the cone.
 * @return The volume of the cone.
 */
double volumeCone(double radius, double height);

/*
 * Calculate the surface area of a cone.
 * @param radius The radius of the base of the cone.
 * @param height The height of the cone.
 * @return The surface area of the cone.
 */
double surfaceAreaCone(double radius, double height);

/*
 * Calculate the volume of a pyramid.
 * @param baseLength The length of the base of the pyramid.
 * @param baseWidth The width of the base of the pyramid.
 * @param height The height of the pyramid.
 * @return The volume of the pyramid.
 */
double volumePyramid(double baseLength, double baseWidth, double height);

/*
 * Calculate the surface area of a pyramid.
 * @param baseLength The length of the base of the pyramid.
 * @param baseWidth The width of the base of the pyramid.
 * @param height The height of the pyramid.
 * @return The surface area of the pyramid.
 */
double surfaceAreaPyramid(double baseLength, double baseWidth, double height);

#endif // VILLAFLOR_GEOMETRY_H_INCLUDED
