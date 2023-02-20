#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <iostream>
using namespace std;

class Calculator{
private:
    int AddCnt;
    int DivCnt;
    int MinCnt;
    int MulCnt;

public:
    float Add(float a, float b);
    float Div(float a, float b);
    float Min(float a, float b);
    float Mul(float a, float b);
    void ShowOpCount(); 
    void Init();
};

#endif