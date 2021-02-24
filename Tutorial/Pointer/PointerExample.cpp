#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
void fundamentalPointer();
void increasePointerAddress();
void decreasePointerAddress();
void nullPointer();
void pointerPointToArray();
void anArrayOfPinters();
void pointerAsParameter(unsigned long *);
int *returnPointerForGetRandom();
const int MAX = 3;

int main(int argc, char const *argv[])
{
    //cout << sizeof(int) << endl;

    // fundamentalPointer();
    increasePointerAddress();
    // decreasePointerAddress();
    // nullPointer();
    // pointerPointToArray();
    /*
 anArrayOfPinters();
 unsigned long mySecond = 1000;
 unsigned long *mySecondPointer = &mySecond;
 pointerAsParameter(mySecondPointer);
 //pointerAsParameter(&mySecond);
 cout << "The new value of parameter: " << mySecond << endl;
 cout << "The new value of parameter: " << *mySecondPointer << endl;

 // 一个指向整数的指针
 int *p;
 p = returnPointerForGetRandom();
 for (int i = 0; i < 10; i++)
 {
  cout << "*(p + " << i << ") : ";
  cout << *(p + i) << endl;
 }
 */
}

void printSymbol()
{
    char symbol = '=';
    for (int i = 0; i < 50; i++)
    {
        cout << symbol;
    }
    cout << endl;
}

void fundamentalPointer()
{
    printSymbol();
    int varA;
    char varB[10];

    cout << "varA 变量的地址： ";
    cout << &varA << endl;

    cout << "varB 变量的地址： ";
    cout << &varB << endl;

    int var = 20; // 实际变量的声明
    int *ip;      // 指针变量的声明

    ip = &var; // 在指针变量中存储 var 的地址

    cout << "Value of var variable: ";
    cout << var << endl;

    // 输出在指针变量中存储的地址
    cout << "Address stored in Pointer variable: " << endl;
    cout << ip << endl;
    cout << &var << endl;

    // 访问指针中地址的值
    cout << "Value of *ip variable: ";
    cout << *ip << endl;
}
//===================================================================
void increasePointerAddress()
{
    printSymbol();
    int var[MAX] = {10, 888, 200};
    int *ptr;

    // var++;
    ptr = var;
    *var = 40;
    cout << var[0] << endl;

    // *ptr = 100;
    // cout << *ptr << endl;
    ptr++;
    cout << ptr << endl;  //this is the address of 888
    cout << *ptr << endl; // this is the value that pointer points to
    return;
    //================================================================

    // 指针中的数组地址
    ptr = var;
    for (int i = 0; i < MAX; i++)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // 移动到下一个位置
        ptr++;
    }
}

void decreasePointerAddress()
{
    printSymbol();
    int var[MAX] = {10, 100, 200};
    int *ptr;
    // 指针中的数组地址
    ptr = var;
    ptr = ptr + 2;
    for (int i = (MAX - 1); i >= 0; i--)
    {
        cout << "Address of var[" << i << "] = ";
        cout << ptr << endl;
        cout << "Value of var[" << i << "] = ";
        cout << *ptr << endl;

        // 移动到上一个位置
        ptr--;
     }
}

void nullPointer()
{
    printSymbol();
    int *ptr = NULL;
    cout << "NUll ptr 的值是: " << ptr << endl;

    int a = 3;
    int *p = &a;
    cout << "ptr=&a:" << p << '\t' << "The value of ptr:" << *p << endl;

    //p = NULL;
    //cout << "ptr=&a:" << p << '\t' << "The value of ptr:" << *p << endl;
}

void pointerPointToArray()
{
    printSymbol();
    int var[MAX] = {10, 100, 200};
    int *ptr;
    // 指针中的数组地址
    ptr = var;

    cout << "The array variable address is " << var << endl;
    cout << "The array pointer  address is " << ptr << endl;
    cout << "The address of the first element is " << &var[0] << endl;
    cout << "The first value of the array is " << var[0] << endl;
    cout << "The value of the array's pointer is " << *ptr << endl;

    printSymbol();
    for (int i = 0; i < MAX; i++)
    {
        cout << "var[" << i << "] memory address(&var[i]): " << &var[i] << endl;
        cout << "var[" << i << "] value(var[i]):  " << var[i] << endl;

        cout << "var[" << i << "] memory address(ptr): " << ptr << endl;
        cout << "var[" << i << "] value(*ptr):  " << *ptr << endl;

        // 移动到下一个位置
        ptr++;
    }
}

void anArrayOfPinters()
{
    printSymbol();
    int myVar[MAX] = {10, 100, 200};
    int *ptr[MAX] = {&myVar[0], &myVar[1], &myVar[2]};
    for (int i = 0; i < MAX; i++)
    {
        cout << "The Value of ptr[" << i << "] = " << ptr[i] << endl;
    }

    for (int i = 0; i < MAX; i++)
    {
        ptr[i] = &myVar[i]; // 赋值为整数的地址
    }

    for (int i = 0; i < MAX; i++)
    {
        cout << "Value of var[" << i << "] = ";
        cout << *ptr[i] << endl;
    }
}

void pointerAsParameter(unsigned long *ptr)
{
    printSymbol();
    cout << "The original value of parameter : " << *ptr << endl;
    *ptr = time(NULL);
}

// 要生成和返回随机数的函数
int *returnPointerForGetRandom()
{
    printSymbol();
    static int sArr[10];
    // 设置种子
    srand((unsigned)time(NULL));
    for (int i = 0; i < 10; ++i)
    {
        sArr[i] = rand();
        //cout << sArr[i] << endl;
    }
    return sArr;
}
