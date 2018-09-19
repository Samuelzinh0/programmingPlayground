#include <iostream>

using namespace std;

int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   float euro = 0.00;
   float dollar = 0.00;

   cout << "\nHow many dollars do you want to exchange to Euros? \n";
   cin >> dollar;

   euro = dollar * 0.86;

   cout << "This is how many Euros you will get, " << euro << endl;
   cout << endl;
   
   return 0;
}
