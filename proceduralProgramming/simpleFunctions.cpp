#include <iostream>

using namespace std;

void display(int age, string name);

int main()
{
   int age = 0;
   string name = "";

   cout << endl;
   
   cout << "What is your first name?\n";
   cin >> name;

   cout << "How old are you?\n";
   cin >> age;

   display(age, name);

   return 0;
}

void display(int age, string name)
{
   cout << "Hello, " << name << ".\n";
   cout << "You are " << age << " years young.\n";
   cout << endl;
}
