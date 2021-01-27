#include <iostream>
using namespace std;

char gMyVar = 'A';

char myFuncn()
{
 ///cout << "******Value of myVar: " << myVar << endl;
 // This is a local variable
 char lMyVar = 'B';
 return lMyVar;
}

int main()
{
 cout << "Funcn call the return value is : " << myFuncn() << endl; //B

 cout << "Value of myVar: " << gMyVar << endl; //A
 gMyVar = 'Z';
 cout << "Funcn call: " << myFuncn() << endl;  //B
 cout << "Value of myVar: " << gMyVar << endl; //Z

 int a = 10;

 int aa, bb, cc;
 aa = 22;
 bb = 33;

 int aaa = 10, bbb = 5, ccc;

 char b = 'Z';
 float c = 123.456;
 double d = 12345.5555888;
 cout << "int " << a << endl;
 cout << "char " << b << endl;
 cout << "float " << c << endl;
 cout << "double " << d << endl;

 cout << "=====================================" << endl;

 // cout << "num1 + num2: " << (num1 + num2) << endl;
 // cout << "num1 - num2: " << (num1 - num2) << endl;
 // cout << "num1 * num2: " << (num1 * num2) << endl;
 // cout << "num1 / num2: " << (num1 / num2) << endl;
 // cout << "num1 % num2: " << (num1 % num2) << endl;

 cout << "=====================================" << endl;
 int num1 = 240;
 int num2 = 40;
 num2 = num1;
 cout << "= Output: " << num2 << endl;
 num2 += num1; // 480
 cout << "+= Output: " << num2 << endl;
 num2 -= num1;
 cout << "-= Output: " << num2 << endl;
 num2 *= num1;
 cout << "*= Output: " << num2 << endl;
 num2 /= num1;
 cout << "/= Output: " << num2 << endl;
 num2 %= num1;
 cout << "%= Output: " << num2 << endl;

 int addA = 1, addB = 0, addC = 0;
 addB = addA++;
 addC = ++addA;
 cout << "Output A: " << addA << endl;
 cout << "Output B: " << addB << endl;
 cout << "Output C: " << addC << endl;

 return 0;
}
