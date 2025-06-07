#include <iostream>
#include "Point.hpp"
#include "Trapezoid.hpp"
#include "Pentagon.hpp"
#include "Rhombus.hpp"
#include "FigureArray.hpp"
#include <memory>
int main()
{

    Point<double> points_trapezoid[4] = {
        Point<double>(0, 0), Point<double>(5, 0), Point<double>(4, 2), Point<double>(1, 2)};

    Point<double> points_pentagon[5] = {
        Point<double>(2.0, 0.0),
        Point<double>(0.6180, 1.9021),
        Point<double>(-1.6180, 1.1756),
        Point<double>(-1.6180, -1.1756),
        Point<double>(0.6180, -1.9021)};

    Point<double> points_rhombus[4] = {
        Point<double>(0, 2), Point<double>(3, 0), Point<double>(0, -2), Point<double>(-3, 0)};

    try
    {
        Trapezoid<double> trapezoid(points_trapezoid);
        Pentagon<double> pentagon(points_pentagon);
        Rhombus<double> rhombus(points_rhombus);

        auto trapezoid_ptr = std::make_shared<Trapezoid<double>>(points_trapezoid);
        auto pentagon_ptr = std::make_shared<Pentagon<double>>(points_pentagon);
        auto rhombus_ptr = std::make_shared<Rhombus<double>>(points_rhombus);

        std::cout << "Trapezoid Information: " << std::endl;
        std::cout << "Type: Trapezoid, Points: ";
        trapezoid.print(std::cout);
        std::cout << std::endl;
        std::cout << "Area: " << static_cast<double>(trapezoid) << std::endl;
        std::cout << "Geometric Center: " << trapezoid.geometricCenter() << std::endl;

        std::cout << "\nPentagon Information: " << std::endl;
        std::cout << "Type: Pentagon, Points: ";
        pentagon.print(std::cout);
        std::cout << std::endl;
        std::cout << "Area: " << static_cast<double>(pentagon) << std::endl;
        std::cout << "Geometric Center: " << pentagon.geometricCenter() << std::endl;
        std::cout << "\nRhombus Information: " << std::endl;
        std::cout << "Type: Rhombus, Points: ";
        rhombus.print(std::cout);
        std::cout << std::endl;
        std::cout << "Area: " << static_cast<double>(rhombus) << std::endl;
        std::cout << "Geometric Center: " << rhombus.geometricCenter() << std::endl;

        FigureArray<Figure<double>> figureArray;
        figureArray.add(trapezoid_ptr);
        figureArray.add(pentagon_ptr);
        figureArray.add(rhombus_ptr);

        std::cout << "\nFigures in Array (Total Area: " << figureArray.totalArea() << "): " << std::endl;
        figureArray.printAll();
    }
    catch (const std::exception &e)
    {
        std::cerr << "An error occurred: " << e.what() << std::endl;
        return 1;
    }

    return 0;
}