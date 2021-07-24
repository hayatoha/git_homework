#include <iostream>
#include "Calculator.hpp"

using namespace std;


int main()
{
  //変数の設定
    double a = 0.0;
    double b = 0.0;
    double result = 0.0;
    char op;

    Calculator c;

    while (true)
    {
      //式の読み取り
      cin >> a >> op >> b;

      if(op == '/' && b == 0)                         //割り算における0の扱い
      {
        cout << "Cannot be division by zero" << endl; //エラーメッセージ
        continue;
      }else{
        result = c.Calculate(a, op, b);               //四則演算
        }
        
      cout << "Result is :" << result << endl;        //結果の表示
    }
    return 0;
}
