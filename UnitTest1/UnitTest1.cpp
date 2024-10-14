#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.2(it).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(TestCountEven)
        {
            const int size = 5;
            int arr[size] = { 1, 2, 3, 4, 5 };

            // В очікуванні 2 парні елементи: 2 і 4
            Assert::AreEqual(2, CountEven(arr, size));
        }

        TEST_METHOD(TestMinEven)
        {
            const int size = 5;
            int arr[size] = { 1, 3, 5, 7, 9 };

            // Немає парних елементів, очікуємо 201
            Assert::AreEqual(201, MinEven(arr, size));

            int arr2[size] = { 2, 4, 6, 8, 10 };
            // Всі парні елементи, найменший - 2
            Assert::AreEqual(2, MinEven(arr2, size));

            int arr3[size] = { 1, 3, 4, 5, 6 };
            // Є два парних: 4 і 6, найменший - 4
            Assert::AreEqual(4, MinEven(arr3, size));
        }
    };
}
