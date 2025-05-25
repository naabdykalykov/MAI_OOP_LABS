#include "gtest/gtest.h"
#include "Trapezoid.hpp"
#include "Pentagon.hpp"
#include "Rhombus.hpp"
#include "FigureArray.hpp"

// Тесты для класса Trapezoid
TEST(TrapezoidTest, ConstructorCopy)
{
    Point<double> points[4] = {Point<double>(0, 0), Point<double>(5, 0), Point<double>(4, 2), Point<double>(1, 2)};
    Trapezoid<double> t1(points);
    Trapezoid<double> t2 = t1;
    EXPECT_EQ(t1, t2);
}

TEST(TrapezoidTest, ConstructorMove)
{
    Point<double> points[4] = {Point<double>(0, 0), Point<double>(5, 0), Point<double>(4, 2), Point<double>(1, 2)};
    Trapezoid<double> t1(points);
    Trapezoid<double> t2 = std::move(t1);
    EXPECT_NEAR(static_cast<double>(t2), 8.0, 1e-6);
}

TEST(TrapezoidTest, OperatorDouble)
{
    Point<double> points[4] = {Point<double>(0, 0), Point<double>(5, 0), Point<double>(4, 2), Point<double>(1, 2)};
    Trapezoid<double> t(points);
    double area = static_cast<double>(t);
    EXPECT_NEAR(area, 8.0, 1e-6);
}

TEST(TrapezoidTest, GeometricCenter)
{
    Point<double> points[4] = {Point<double>(0, 0), Point<double>(5, 0), Point<double>(4, 2), Point<double>(1, 2)};
    Trapezoid<double> t(points);
    Point<double> center = t.geometricCenter();
    EXPECT_NEAR(center.x_, 2.5, 1e-6);
    EXPECT_NEAR(center.y_, 1.0, 1e-6);
}

TEST(TrapezoidTest, EqualityOperator)
{
    Point<double> points1[4] = {Point<double>(0, 0), Point<double>(5, 0), Point<double>(4, 2), Point<double>(1, 2)};
    Trapezoid<double> t1(points1);
    Trapezoid<double> t2(points1);
    EXPECT_TRUE(t1 == t2);
}

TEST(TrapezoidTest, ConstructorNoThrow)
{
    Point<double> points[4] = {Point<double>(0, 0), Point<double>(5, 0), Point<double>(4, 2), Point<double>(1, 2)};
    ASSERT_NO_THROW({
        Trapezoid<double> t(points);
    });
}

// Тесты для класса Pentagon
TEST(PentagonTest, ConstructorCopy)
{
    Point<double> points[5] = {
        Point<double>(2.0, 0.0),
        Point<double>(0.6180, 1.9021),
        Point<double>(-1.6180, 1.1756),
        Point<double>(-1.6180, -1.1756),
        Point<double>(0.6180, -1.9021)};
    Pentagon<double> p1(points);
    Pentagon<double> p2 = p1;
    EXPECT_EQ(p1, p2);
}

TEST(PentagonTest, ConstructorMove)
{
    Point<double> points[5] = {
        Point<double>(2.0, 0.0),
        Point<double>(0.6180, 1.9021),
        Point<double>(-1.6180, 1.1756),
        Point<double>(-1.6180, -1.1756),
        Point<double>(0.6180, -1.9021)};
    Pentagon<double> p1(points);
    Pentagon<double> p2 = std::move(p1);
    EXPECT_NEAR(static_cast<double>(p2), 9.5104394, 1e-6);
}

TEST(PentagonTest, OperatorDouble)
{
    Point<double> points[5] = {
        Point<double>(2.0, 0.0),
        Point<double>(0.6180, 1.9021),
        Point<double>(-1.6180, 1.1756),
        Point<double>(-1.6180, -1.1756),
        Point<double>(0.6180, -1.9021)};
    Pentagon<double> p(points);
    double area = static_cast<double>(p);
    EXPECT_NEAR(area, 9.5104394, 1e-6);
}

TEST(PentagonTest, GeometricCenter)
{
    Point<double> points[5] = {
        Point<double>(2.0, 0.0),
        Point<double>(0.6180, 1.9021),
        Point<double>(-1.6180, 1.1756),
        Point<double>(-1.6180, -1.1756),
        Point<double>(0.6180, -1.9021)};
    Pentagon<double> p(points);
    Point<double> center = p.geometricCenter();
    EXPECT_NEAR(center.x_, 0.0, 1e-4);
    EXPECT_NEAR(center.y_, 0.0, 1e-4);
}

TEST(PentagonTest, EqualityOperator)
{
    Point<double> points1[5] = {
        Point<double>(2.0, 0.0),
        Point<double>(0.6180, 1.9021),
        Point<double>(-1.6180, 1.1756),
        Point<double>(-1.6180, -1.1756),
        Point<double>(0.6180, -1.9021)};
    Pentagon<double> p1(points1);
    Pentagon<double> p2(points1);
    EXPECT_TRUE(p1 == p2);
}

TEST(PentagonTest, ConstructorNoThrow)
{
    Point<double> points[5] = {
        Point<double>(2.0, 0.0),
        Point<double>(0.6180, 1.9021),
        Point<double>(-1.6180, 1.1756),
        Point<double>(-1.6180, -1.1756),
        Point<double>(0.6180, -1.9021)};
    ASSERT_NO_THROW({
        Pentagon<double> p(points);
    });
}

// Тесты для класса Rhombus
TEST(RhombusTest, ConstructorCopy)
{
    Point<double> points[4] = {Point<double>(0, 2), Point<double>(3, 0), Point<double>(0, -2), Point<double>(-3, 0)};
    Rhombus<double> r1(points);
    Rhombus<double> r2 = r1;
    EXPECT_EQ(r1, r2);
}

TEST(RhombusTest, ConstructorMove)
{
    Point<double> points[4] = {Point<double>(0, 2), Point<double>(3, 0), Point<double>(0, -2), Point<double>(-3, 0)};
    Rhombus<double> r1(points);
    Rhombus<double> r2 = std::move(r1);
    EXPECT_NEAR(static_cast<double>(r2), 12.0, 1e-6);
}

TEST(RhombusTest, OperatorDouble)
{
    Point<double> points[4] = {Point<double>(0, 2), Point<double>(3, 0), Point<double>(0, -2), Point<double>(-3, 0)};
    Rhombus<double> r(points);
    double area = static_cast<double>(r);
    EXPECT_NEAR(area, 12.0, 1e-6);
}

TEST(RhombusTest, GeometricCenter)
{
    Point<double> points[4] = {Point<double>(0, 2), Point<double>(3, 0), Point<double>(0, -2), Point<double>(-3, 0)};
    Rhombus<double> r(points);
    Point<double> center = r.geometricCenter();
    EXPECT_NEAR(center.x_, 0.0, 1e-6);
    EXPECT_NEAR(center.y_, 0.0, 1e-6);
}

TEST(RhombusTest, EqualityOperator)
{
    Point<double> points1[4] = {Point<double>(0, 2), Point<double>(3, 0), Point<double>(0, -2), Point<double>(-3, 0)};
    Rhombus<double> r1(points1);
    Rhombus<double> r2(points1);
    EXPECT_TRUE(r1 == r2);
}

TEST(RhombusTest, ConstructorNoThrow)
{
    Point<double> points[4] = {Point<double>(0, 2), Point<double>(3, 0), Point<double>(0, -2), Point<double>(-3, 0)};
    ASSERT_NO_THROW({
        Rhombus<double> r(points);
    });
}

// Тесты для класса FigureArray
TEST(FigureArrayTest, AddAndTotalArea)
{
    FigureArray<Figure<double>> array;
    Point<double> pentagon_points[5] = {
        Point<double>(2.0, 0.0),
        Point<double>(0.6180, 1.9021),
        Point<double>(-1.6180, 1.1756),
        Point<double>(-1.6180, -1.1756),
        Point<double>(0.6180, -1.9021)};
    auto p_shared = std::make_shared<Pentagon<double>>(pentagon_points);
    array.add(p_shared);
    EXPECT_NEAR(array.totalArea(), static_cast<double>(*p_shared), 1e-4);
}

TEST(FigureArrayTest, Remove)
{
    FigureArray<Figure<double>> array;
    Point<double> pentagon_points[5] = {
        Point<double>(2.0, 0.0),
        Point<double>(0.6180, 1.9021),
        Point<double>(-1.6180, 1.1756),
        Point<double>(-1.6180, -1.1756),
        Point<double>(0.6180, -1.9021)};
    auto p_shared = std::make_shared<Pentagon<double>>(pentagon_points);
    array.add(p_shared);
    array.remove(0);
    EXPECT_EQ(array.size(), 0);
}

TEST(FigureArrayTest, Size)
{
    FigureArray<Figure<double>> array;
    EXPECT_EQ(array.size(), 0);

    Point<double> pentagon_points[5] = {
        Point<double>(2.0, 0.0),
        Point<double>(0.6180, 1.9021),
        Point<double>(-1.6180, 1.1756),
        Point<double>(-1.6180, -1.1756),
        Point<double>(0.6180, -1.9021)};

    auto p_shared = std::make_shared<Pentagon<double>>(pentagon_points);
    array.add(p_shared);
    EXPECT_EQ(array.size(), 1);
    array.remove(0);
    EXPECT_EQ(array.size(), 0);
}