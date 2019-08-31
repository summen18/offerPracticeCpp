#include <iostream>
#include <cmath>

bool g_InvaildInput = false;
bool equal(double num1, double num2);
double PowerWithUnsignedExponent(double base, unsigned int exponent);
using namespace std;

double Power(double base, int exponent)
{
    g_InvaildInput = false;

    if (equal(base, 0.0) && exponent < 0)
    {
        g_InvaildInput = true;
        return 0.0;
    }
    unsigned int absExponent = (unsigned int)(exponent);
    if (exponent < 0)
    {
        absExponent = (unsigned int)(-exponent);
    }
    double result = PowerWithUnsignedExponent(base, absExponent);
    if (exponent < 0)
    {
        result = 1.0 / result;
    }
    return result;
}

double PowerWithUnsignedExponent(double base, unsigned int exponent)
{
    if (exponent == 0)
    {
        return 1;
    }
    if (exponent == 1)
    {
        return base;
    }
    double result = PowerWithUnsignedExponent(base, exponent >> 1);
    result *= result;
    if ((exponent & 0x1) == 1)
    {
        result *= base;
    }
    return result;
}

bool equal(double num1, double num2)
{
    if ((num1 - num2 > -0.0000001) && (num1 - num2 < 0.0000001))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Test(const char *testName, double base, int exponent, double expected, bool expectedFlag)
{
    double result = Power(base, exponent);
    if (equal(result, expected) && g_InvaildInput == expectedFlag)
    {
        cout << testName << " passed " << endl;
    }
    else
    {
        cout << testName << " Failed " << endl;
    }
}

int main(int argc, char* argv[])
{
    Test("Test1", 2, 3, 8, false);

    return 0;
}