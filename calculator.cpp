#include "calculator.hpp"

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
        defalut:
              return 0.0;
    }
}