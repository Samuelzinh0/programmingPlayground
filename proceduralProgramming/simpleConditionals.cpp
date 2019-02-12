#include <iostream>

using namespace std;

// Early declarations of my functions - Prototyping
int getTemperature();
bool isHot(int temperature);
bool isWarm(int temperature);
bool isCold(int temperature);
bool isFreezing(int temperature);
void display(int temperature);

/*
  Function: main
  Description: This will run a program which will check the temeprature
               and it will help the user determine on what kind of attire
               that needs to be worn outside.
*/
int main()
{
   int temperature = getTemperature();

   display(temperature);
   
   return 0;
}

/*
  Function: getTemperature
  Description: This integer type function will ask the user for the temperature and then return
               that given temperature to use somewhere else in the program.
*/
int getTemperature()
{
   int temperature = 0;
   cout << "What is the temperature today? ";
   cin >> temperature;
   return temperature;
}

/*
  Function: isHot
  Description: This boolean type function will check if the weather really is hot
               given the temeprature offered by the user.
*/
bool isHot(int temperature)
{
   if(temperature > 85)
      return true;
   else
      return false;

}

/*
  Function: isWarm
  Description: This boolean type function will check if the weather really is warm
               given the temeprature offered by the user.
*/
bool isWarm(int temperature)
{
   if(temperature <= 85 && temperature > 65)
      return true;
   else
      return false;
}

/*
  Function: isCold
  Description: This boolean type function will check if the weather really is cold
               given the temeprature offered by the user.
*/
bool isCold(int temperature)
{
   if(temperature <= 65 && temperature > 45)
      return true;
   else
      return false;
}

/*
  Function: isFreezing
  Description: This boolean type function will check if the weather really is freezing
               given the temeprature offered by the user. 
*/
bool isFreezing(int temperature)
{
   if(temperature <= 45)
      return true;
   else
      return false;
}

/*
  Function: display
  Description: This void type function will display the given options of attire for the user. 
*/
void display(int temperature)
{
   if(isHot(temperature))
      cout << "You might need a lightweight t-shirt and some shorts.\n";
   else if(isWarm(temperature))
      cout << "You might need a normal t-shirt and some lightweight jeans.\n";
   else if(isCold(temperature))
      cout << "You might need a light coat or jacket and some jeans.\n";
   else // if(isFreezing(temperature))
      cout << "You might need a full snowsuit or a heavy parka with jeans and leggings underneath.\n";
}
