#include <iostream>
using namespace std;

void readString();
void readStringObject();

int main(int argc, char const *argv[])
{

 //readString();
 readStringObject();
 return 0;
}

void readString()
{
 char book[50];
 cout << "Enter your favorite book name:";
 //reading user input
 //cin >> book;       //只会读取第一个单词
 cin.get(book, 50); //读取50个字符 使用cin.get捕获用户输入字符串
 cout << "You entered: " << book << endl;
}

void readStringObject()
{
 // This is how we create string object
 string str;
 cout << "Enter a String:";
 /* This is used to get the user input and store it into str  */
 getline(cin, str);
 cout << "You entered: ";
 cout << str << endl;

 /* This function adds a character at the end of the string  */
 str.push_back('A');
 cout << "The string after push_back: " << str << endl;

 /* This function deletes a character from the end of the string*/
 str.pop_back();
 cout << "The string after pop_back: " << str << endl;
}
