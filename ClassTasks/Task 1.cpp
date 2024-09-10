//
//  Task 1.cpp
//  ClassTasks
//
//  Created by Женя Валек on 10.09.2024.
//

#include "Task 1.hpp"
// Программа для вычисления n-го числа Фибоначчи
//

#include <iostream>

using namespace std;

int main()
  {// Пусть последовательность чисел задана реккурентным выражением
   //   f(i)=f(i-1)+f(i-2), f(0)=0, f(1)=1
   // Для заданного n>=0 вычислить f(n)

   int f, f0 = 0, f1 = 1;
   int n;
   cout << "Enter n: ";
   cin >> n;
   if (n == 0)
    f = f0;
   else if (n == 1)
     f = f1;
   else
     for (int i=2; i <=n; ++i)
       {
        f = f1 + f0;
        f0 = f1;
        f1 = f;
       }
   cout << "f(" << n << ") = " << f << endl;
   return 0;
  }

