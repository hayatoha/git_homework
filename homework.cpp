#include <iostream>
#include "Calculator.hpp"

using namespace std;


int main()
{
    double a = 0.0;
    double b = 0.0;
    double result = 0.0;
    char op;

    Calculator c;
    while (true)
    {
      cin >> a >> op >> b;
      if(op == '/' && b == 0)
      {
        cout << "Cannot be division by zero" << endl;
        continue;
      }else{
        result = c.Calculate(a, op, b);
      }
        cout << "Result is :" << result << endl; 
    }
    return 0;

}
