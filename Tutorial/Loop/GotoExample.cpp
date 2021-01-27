#include <iostream>
using namespace std;
int main()
{
 int num = 20;

print:
 cout << "===================" << endl;

 if (num % 2 == 0)
 {
  cout << "Even Number" << endl;
  num = num - 1;
  goto print;
 }
 else
 {
  cout << "Odd Number" << endl;
 }

 return 0;
}
