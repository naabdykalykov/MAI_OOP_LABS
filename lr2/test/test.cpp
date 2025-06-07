#include <gtest/gtest.h>
#include <stdexcept>
#include "../include/four.hpp"

// Тест конструктора по умолчанию
TEST(FourTest, DefaultConstructor)
{
    Four numberDefault;

    ASSERT_EQ(numberDefault.getSize(), 0);
    ASSERT_EQ(numberDefault.getData(), nullptr);
}

// Тест конструктора с некорректной цифрой
TEST(FourTest, IncorrectDigitConstructor)
{
    EXPECT_THROW(Four number(1, '4'), std::invalid_argument); // '4' недопустима в 4-ой системе
    EXPECT_THROW(Four number(1, 'a'), std::invalid_argument); // 'a' недопустима
}

// Тест конструктора с некорректной длиной
TEST(FourTest, IncorrectLengthConstructor)
{
    EXPECT_THROW(Four number(0, '0'), std::invalid_argument); // Длина 0 недопустима
}

// Тест конструктора с инициализацией списка
TEST(FourTest, InitListConstructor)
{
    Four expected("123");

    Four number{1, 2, 3};

    ASSERT_TRUE(number == expected);
}

// Тест конструктора с инициализацией списка с некорректными цифрами
TEST(FourTest, IncorrectDigitInitListConstructor)
{
    EXPECT_THROW(Four({'4'}), std::invalid_argument);                       // '4' недопустима
    EXPECT_THROW(Four({'1', '2', '4', '0'}), std::invalid_argument);        // '4' недопустима
    EXPECT_THROW(Four({'1', '4', '3', '0', '2'}), std::invalid_argument);   // '4' недопустима
}

// Тест конструктора из строки
TEST(FourTest, StringConstructor)
{
    Four expected{2, 2, 3};

    Four number("223");

    ASSERT_TRUE(number == expected) << "number -> " << number << " expected -> " << expected;
}

// Тест конструктора из строки с некорректными цифрами
TEST(FourTest, IncorrectDigitStringConstructor)
{
    EXPECT_THROW(Four("4"), std::invalid_argument);        // '4' недопустима
    EXPECT_THROW(Four("12340"), std::invalid_argument);    // '4' недопустима
    EXPECT_THROW(Four("14302"), std::invalid_argument);    // '4' недопустима
}

// Тест копирующего конструктора
TEST(FourTest, CopyConstructor)
{
    Four number1("1233");

    Four number2{number1};

    ASSERT_TRUE(number1 == number2);
}

// Тест конструктора перемещения
TEST(FourTest, MoveConstructor)
{
    Four numberOriginal("1231");
    Four expected{numberOriginal};

    Four number{std::move(numberOriginal)};

    ASSERT_TRUE(number == expected);
    ASSERT_EQ(numberOriginal.getSize(), 0); // После перемещения размер должен быть 0
    ASSERT_EQ(numberOriginal.getData(), nullptr); // После перемещения данные должны быть nullptr
}

// Тест оператора присваивания
TEST(FourTest, AssignmentOperator)
{
    Four number2("3223");

    Four number1;
    number1 = number2;

    ASSERT_TRUE(number1 == number2);
}

// Тест на оператор "==": проверка равенства одинаковых чисел
TEST(FourTest, Equality_SameNumbers)
{
    Four number1({2, 3});   // Представляет число 32 в 4-ой системе (развернуто: 23)
    Four number2({2, 3});   // Представляет число 32 в 4-ой системе

    ASSERT_TRUE(number1 == number2) << "Ожидалось, что числа равны.";
}

// Тест на оператор "==": проверка неравенства разных чисел
TEST(FourTest, Equality_DifferentNumbers)
{
    Four number1({2, 3});   // 32 в 4-ой системе
    Four number3({2, 1});   // 12 в 4-ой системе

    ASSERT_FALSE(number1 == number3) << "Ожидалось, что числа не равны.";
}

// Тест на оператор "<": проверка, что число не меньше самого себя
TEST(FourTest, LessThan_SameNumbers)
{
    Four number1({2, 3});   // 32 в 4-ой системе
    Four number2({2, 3});   // 32 в 4-ой системе

    ASSERT_FALSE(number1 < number2) << "Ожидалось, что число не меньше самого себя.";
}

// Тест на оператор "<": проверка, что большее число не меньше меньшего
TEST(FourTest, LessThan_GreaterNumber)
{
    Four number1({2, 3});   // 32 в 4-ой системе
    Four number3({2, 1});   // 12 в 4-ой системе

    ASSERT_FALSE(number1 < number3) << "Ожидалось, что большее число не меньше меньшего.";
}

// Тест на оператор "<": проверка, что меньшее число меньше большего
TEST(FourTest, LessThan_LessNumber)
{
    Four number3({1, 1});   // 21 в 4-ой системе
    Four number1({3, 3});   // 23 в 4-ой системе

    ASSERT_TRUE(number3 < number1) << "Ожидалось, что меньшее число меньше большего.";
}

// Тест на оператор ">": проверка, что число не больше самого себя
TEST(FourTest, GreaterThan_SameNumbers)
{
    Four number1({2, 3});   // 32 в 4-ой системе
    Four number2({2, 3});   // 32 в 4-ой системе

    ASSERT_FALSE(number1 > number2) << "Ожидалось, что число не больше самого себя.";
}

// Тест на оператор ">": проверка, что большее число больше меньшего
TEST(FourTest, GreaterThan_GreaterNumber)
{
    Four number1{3, 3};   // 33 в 4-ой системе
    Four number3{1, 1};   // 11 в 4-ой системе

    ASSERT_TRUE(number1 > number3) << "Ожидалось, что большее число больше меньшего.";
}

// Тест на оператор ">": проверка, что меньшее число не больше большего
TEST(FourTest, GreaterThan_LessNumber)
{
    Four number3({2, 1});   // 12 в 4-ой системе
    Four number1({2, 3});   // 32 в 4-ой системе

    ASSERT_FALSE(number3 > number1) << "Ожидалось, что меньшее число не больше большего.";
}
