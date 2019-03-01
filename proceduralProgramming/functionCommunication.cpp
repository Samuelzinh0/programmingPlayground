#include <iostream>

using namespace std;

//Early declarations of my functions - Prototypes
float budgetExpenses();
float steadyExpense();
float getIncome();
float getTaxes();
float getPhoneBill();
float getInsurance();
float getGroceries();
void display(float budgetCost, float steadyCost);

/*
  Function: Main.
    Description: This function will run the program.
*/
int main()
{
   float budgetCost = budgetExpenses();
   float steadyCost = steadyExpense();

   display(budgetCost, steadyCost);
   
   return 0;
}

/*
  Function: getIncome.
    Description: This function will get the value of the income.
*/
float getIncome()
{
   return 0.0;
}

/*
  Function: getTaxes.
    Description: This function will get the value of the expenses of the
    taxes.
*/
float getTaxes()
{
   return 0.0;
}

/*
  Function: getPhoneBill.
    Description: This function will get the value of the expenses of the
    phone bill. 
*/
float getPhoneBill()
{
   return 0.0;
}

/*
  Function: getInsurance.
    Description: This function will get the value of the expenses of the
    insurance.
*/
float getInsurance()
{
   return 0.0;
}

/*
  Function: getGroceries.
    Description: This function will get the value of the expenses of the
    groceries.
*/
float getGroceries()
{
   return 0.0;
}

/*
  Function: budgetExpense.
    Description: This function will conceptually add the budget expenses and
    take them away from the value of the users income.
*/
float budgetExpenses()
{
   return getIncome() - (getPhoneBill() + getGroceries());
}

/*
  Function: steadyExpense.
    Description: This function will conceptually add the steady expenses and
    take them away from the value of the users income.
*/
float steadyExpense()
{
   return getIncome() - (getTaxes() + getInsurance());
}

/*
  Function: display.
    Description: This function will let me know I ran the program with 0 errors.
*/
void display(float budgetCost, float steadyCost)
{
   cout << "If the program shows this line of text it means that, ";
   cout << "we are successful with the way the functions are communicating with each other.\n";
}
