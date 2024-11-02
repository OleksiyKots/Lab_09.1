// UnitTest.cpp
#include "pch.h"
#include "CppUnitTest.h"
#include "../var.h"  // ������ �� ����� ������ �������
#include "../dod.h"
#include "../dod.cpp"
#include "../var.cpp"
#include "../sum.cpp"
#include "../sum.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsVar;
using namespace nsDod;

namespace UnitTest091 {

    TEST_CLASS(UnitTest091) {

public:

    TEST_METHOD(TestDodCalculation) {
        x = 1.0;   // ������������ �������� ���������
        n = 1;     // ������������ ����� �������
        a = 1.0;   // ��������� �������� �������

        double expected = -(x * x) / ((4 * n * n) + (2 * n));  // ��������� �������� ������������ ������������

        dod(); // ���������� ��������� �������

        Assert::AreEqual(expected, a, 1e-6);
    }
    };
}
