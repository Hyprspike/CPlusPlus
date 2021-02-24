#include <iostream>
using namespace std;

class Car
{
public:
 string brand;
 string model;
 int year;

public:
 void myMethod()
 {
  cout << brand << endl;
 };
 void myMethod2();
 int speed(int speedup);
};

void Car::myMethod2()
{
 cout << "anything" << endl;
};

int Car::speed(int aaa)
{
 return aaa + 5;
};

int main(int argc, char const *argv[])
{
 Car toyota;
 toyota.brand = "Toyata";
 toyota.model = "camery";
 toyota.year = 1999;
 toyota.myMethod();
 toyota.myMethod2();
 cout << toyota.speed(10) << endl;

 Car bmw;
 bmw.brand = "BMW";
 bmw.model = "X5";
 bmw.year = 2000;
 bmw.myMethod();
 bmw.myMethod2();
 cout << bmw.speed(20) << endl;

 /* code */
 return 0;
}
