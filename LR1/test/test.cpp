#include <gtest/gtest.h>
#include "../include/functions.hpp"



TEST(countVowelLetters, BasicTests) {
    EXPECT_EQ(countVowelLetters(""), 0);  // пустая строка
    EXPECT_EQ(countVowelLetters("bcdfghjklmnpqrstvwxyz"), 0);  // нет гласных
    EXPECT_EQ(countVowelLetters("aeiou"), 5);  // все символы гласные
    EXPECT_EQ(countVowelLetters("a e i o u"), 5);  // пробелы игнорируются
    EXPECT_EQ(countVowelLetters("hello world"), 3);  // перемешанные буквы
}

TEST(countVowelLetters, HandlesSpacesAndSpecialCharacters) {
    EXPECT_EQ(countVowelLetters("a e! i@ o# u$"), 5);  // пробелы и спецсимволы игнорируются
    EXPECT_EQ(countVowelLetters("h@e^l*lo w!or$ld"), 3);  // игнорирование спецсимволов, 3 гласные
    EXPECT_EQ(countVowelLetters("!!a@e#o$%u^"), 4);  // спецсимволы игнорируются, 4 гласные
    EXPECT_EQ(countVowelLetters("a\nb\to\tc\n"), 2);  // игнорируются \n и \t, 2 гласные (a и o)
}

TEST(countVowelLetters, HandlesMultipleSpacesAndTabs) {
    EXPECT_EQ(countVowelLetters("asdd            kek"), 2);  // пробелы между словами игнорируются, 3 гласные (a, e, e)
    EXPECT_EQ(countVowelLetters("hello\tworld"), 3);  // табуляция игнорируется, 3 гласные (e, o, o)
    EXPECT_EQ(countVowelLetters("aeiou\t    \t"), 5);  // табуляция игнорируется, все гласные
    EXPECT_EQ(countVowelLetters("a   b    e    i \t o"), 4);  // пробелы и табуляции игнорируются, 5 гласных
}
