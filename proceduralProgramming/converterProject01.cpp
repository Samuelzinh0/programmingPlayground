#include <iostream>

using namespace std;

// Early declarations of my functions - Prototypes
float getMoney();
float euro(float money);
float yen(float money);
float poundSterling(float money);
float australianDollar(float money);
void display(float money, float convertedEuro, float convertedYen,
      float convertedPoundSterling, float convertedAustralianDollar);

/*
    Function: Main.
      Description: It will run the functions  of the program.
*/
int main()
{
   float money = getMoney();

   float convertedEuro, convertedYen,
      convertedPoundSterling, convertedAustralianDollar;
   
   convertedEuro = euro(money);
   convertedYen = yen(money);
   convertedPoundSterling = poundSterling(money);
   convertedAustralianDollar = australianDollar(money);

   display(money, convertedEuro, convertedYen,
      convertedPoundSterling, convertedAustralianDollar);
   
   return 0;
}

/*
    Function: getMoney.
      Description: It will promt the user for the money and return it.
*/
float getMoney()
{
   float money = 0.0;
   
   cout << "\tWelcome to the American currency exchange.\n";

   cout << "How many American dollars do you have? ";
   cin >> money;

   return money;
}

/*
    Function: euro.
      Description: It will convert the US dollars to Euros.
*/
float euro(float money)
{
   return money * 1.14;
}

/*
    Function: yen.
      Description: It will convert the US dollars to Japanese Yen.
*/
float yen(float money)
{
   return money * 111;
}

/*
    Function: poundSterling.
      Description: It will convert the US dollars to Pound sterling.
*/
float poundSterling(float money)
{
   return money * 0.756;
}

/*
    Function: australianDollar.
      Description: It will convert the US dollars to Australian dollars.
*/
float australianDollar(float money)
{
   return money * 1.41;
}

/*
    Function: Display.
      Description: It will display the results of the money conversion.
*/
void display(float money, float convertedEuro, float convertedYen,
      float convertedPoundSterling, float convertedAustralianDollar)
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << endl;   

   cout << "The amount of $" << money << " will fetch you a total of: " << endl;

   cout << "€ " << convertedEuro << endl;
   cout << "Y " << convertedYen << endl;
   cout << "£ " << convertedPoundSterling << endl;
   cout << "A " << convertedAustralianDollar << endl;

   cout << endl;

   cout << "Thank you for using my application.\n";
}
