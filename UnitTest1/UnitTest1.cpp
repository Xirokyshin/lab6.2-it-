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

            // � ��������� 2 ���� ��������: 2 � 4
            Assert::AreEqual(2, CountEven(arr, size));
        }

        TEST_METHOD(TestMinEven)
        {
            const int size = 5;
            int arr[size] = { 1, 3, 5, 7, 9 };

            // ���� ������ ��������, ������� 201
            Assert::AreEqual(201, MinEven(arr, size));

            int arr2[size] = { 2, 4, 6, 8, 10 };
            // �� ���� ��������, ��������� - 2
            Assert::AreEqual(2, MinEven(arr2, size));

            int arr3[size] = { 1, 3, 4, 5, 6 };
            // � ��� ������: 4 � 6, ��������� - 4
            Assert::AreEqual(4, MinEven(arr3, size));
        }
    };
}
