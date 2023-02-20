#include "calculator.h"

// #include <iostream>

// using namespace std;

float Calculator::Add(float a, float b)
{
    AddCnt++;
    return (a + b);
}

float Calculator::Div(float a, float b)
{
    DivCnt++;
    return (a / b);
}

float Calculator::Min(float a, float b)
{
    MinCnt++;
    return (a- b);
}

float Calculator::Mul(float a, float b)
{
    MulCnt++;
    return (a * b);
}

void Calculator::ShowOpCount()
{
    cout << AddCnt << " " << DivCnt << " " << MinCnt << " " << MulCnt << "\n";
}

void Calculator::Init()
{
    AddCnt = 0;
    DivCnt = 0;
    MinCnt = 0;
    MulCnt = 0;
}

int main()
{
    Calculator cal;
    cal.Init();
    cout << "3.2 + 2.4 = " << cal.Add(3.2 , 2.4) << endl;
    cout << "3.2 - 2.4 = " << cal.Min(3.2 , 2.4) << endl;
    cout << "3.2 * 2.4 = " << cal.Mul(3.2 , 2.4) << endl;
    cout << "3.2 / 2.4 = " << cal.Div(3.2 , 2.4) << endl;

    cal.ShowOpCount();
    return 0;
}