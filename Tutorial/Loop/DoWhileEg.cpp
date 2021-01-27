#include <iostream>
using namespace std;
int main()
{
 int b = 0;
 for (int i = 0; i < 10; i++)
 {
  b = i;
  if (i == 5)
  {
   break;
  }
  cout << "The value of i is: " << i << endl;
 }

 int j = 0;
 while (j < 10)
 {
  cout << "The value of J is : " << j << endl;
  if (j == 5)
  {
   break;
  }
  j++;
 }

 return 0;
}
