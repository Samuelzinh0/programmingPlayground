#include <iostream> // Input Output Stream
using namespace std; // The Standard Library

// Prototype
void greeting();
float getMoney();
float moneyConverter(float money);
void display(float money, float convertedMoney);

/*
  Function: Main.
  Description: It will run the functions getMoney() and moneyConverter().
*/
int main()
{
   greeting();
   
   float money = getMoney();

   float convertedMoney = moneyConverter(money);

   display(money, convertedMoney);
}

/*
  Function: greeting.
  Description: Display a friendly greeting to the user.
*/
void greeting()
{
   cout << "\n\tThis program will convert your US Dollars to GB Pounds.\n\n";
}

/*
  Function: getMoney.
  Description: Prompts the user for the amount of money needed.
*/
float getMoney()
{
   float money = 0.0;

   cout << "What is the amount of money you want to convert: ";
   cin >> money;
   
   return money;
}

/*
  Function: moneyConverter.
  Description: Converts the value the user used as the input.
*/
float moneyConverter(float money)
{
   cout << "\nMost updated conversion percentage. ($1.00 Dollars is equivalent to £0.77 Pounds)\n\n";
   return money * 0.77;
}

/*
  Function: display.
  Description: Formats the display and displays the resulting money convertion.
*/
void display(float money, float convertedMoney)
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   cout << "$" << money << " is the same as £" << convertedMoney << endl;

   cout << endl;
}
