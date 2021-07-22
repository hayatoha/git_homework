#include "calculator.hpp"
#include "cmath"
using namespace std;

double Calculator::Calculate(double a,char op ,double b)
{
    switch(op)
    {
        case '+':
              return a + b;
        case '-':
              return a - b;
        case '*':
              return a * b;
        case '/':
              return a / b;
        case '^':
              return pow(a,b);
        defalut:
              return 0.0;
    }
}