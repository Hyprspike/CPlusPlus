#include <iostream>
using namespace std;
int exampleIF()
{
 int a = 1, b = 0;
 // b = a++; //这行代码表示，先执行b=a的赋值操作，再执行a++操作
 // cout << "a 的值是 " << a << endl;
 // cout << "b 的值是 " << b << endl;

 // ///============
 // int c, d = 10; //  测试自增、自减
 // c = ++d;       //这行代码表示，先执行d的增1操作，再执行c=d的赋值操作
 // cout << "c 的值是 " << c << endl;
 // cout << "d 的值是 " << d << endl;

 bool b1 = true;
 bool b2 = true;
 bool b3 = false;
 bool b4 = false;

 cout << "b1 && b2: " << (b1 && b2) << endl;
 cout << "b3 && b4: " << (b3 && b4) << endl;
 cout << "b1 && b3: " << (b1 && b3) << endl;

 cout << "b1 || b2: " << (b1 || b2) << endl;
 cout << "b3 || b4: " << (b3 || b4) << endl;
 cout << "b1 || b3: " << (b1 || b3) << endl;

 cout << "!(b1 && b3): " << !(b1 || b3);

 a = 11;
 b = 12;
 int c = 0;

 cout << "fsdaf:::::" << ~a << endl;
 c = a << 2;
 cout << "CCCC:::::" << c << endl;

 return 0;
}