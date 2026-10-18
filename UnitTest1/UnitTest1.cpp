#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_05_5.cpp"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace NsdUnitTests
{
    TEST_CLASS(NsdTests)
    {
    public:
        TEST_METHOD(TestNsd48And18)
        {
            maxDepth = 0;

            int result = nsdRecursive(48, 18, 1);

            Assert::AreEqual(6, result);
            Assert::AreEqual(4, maxDepth);
        }

        TEST_METHOD(TestEqualNumbers)
        {
            maxDepth = 0;

            int result = nsdRecursive(15, 15, 1);

            Assert::AreEqual(15, result);
            Assert::AreEqual(2, maxDepth);
        }

        TEST_METHOD(TestCoprimeNumbers)
        {
            maxDepth = 0;

            int result = nsdRecursive(7, 3, 1);

            Assert::AreEqual(1, result);
            Assert::AreEqual(3, maxDepth);
        }

        TEST_METHOD(TestFirstNumberSmaller)
        {
            maxDepth = 0;

            int result = nsdRecursive(3, 12, 1);

            Assert::AreEqual(3, result);
            Assert::AreEqual(3, maxDepth);
        }

        TEST_METHOD(TestNsd100And25)
        {
            maxDepth = 0;

            int result = nsdRecursive(100, 25, 1);

            Assert::AreEqual(25, result);
            Assert::AreEqual(2, maxDepth);
        }
    };
}
