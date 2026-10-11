#include "pch.h"
#include "CppUnitTest.h"
#include "../laba5.0(2)/laba5.0(2).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            double t;
            t = f(0, 0, 1);
            Assert::AreEqual(t, 1.0, 0.000001);
        }
    };
}