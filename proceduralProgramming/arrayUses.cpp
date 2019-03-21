#include <iostream>

using namespace std;

//Early declartions of my functions - Prototypes
int getSize();
void getHousesValues(int size, float houses[]);
float computeAverage(int size, float houses[]);
void display(float average);

/*
  Function: main()
  Description: This will run the functions of my program.
*/
int main()
{
   int size = getSize();
   float houses[size];

   getHousesValues(size, houses);
   float average = computeAverage(size, houses);
   display(average);
   
   return 0;
}

/*
  Function: getSize()
  Description: This function will ask the user for the number of houses they are wanting to check.
*/
int getSize()
{
   int size = 0;

   cout << "\nThis is a program to check the average value of houses in a certai neighborhood.\n";
   cout << "Simply say how many houses are you checking and what the value of the given houses.\n";

   cout << "\nHow many houses are you checking? ";
   cin >> size;

   return size;
}

/*
  Function: getHousesValues(size, houses)
  Description: This function will fill in the array from the user input.
*/
void getHousesValues(int size, float houses[])
{
   for(int i = 0; i < size; i++)
   {
      cout << "House " << i + 1 << ": ";
      cin >> houses[i];
   }
}

/*
  Function: computeAverage(size, houses)
  Description: This function will calculate the average value fo the neighborhood for the user.
*/
float computeAverage(int size, float houses[])
{
   float sum = 0.0;
   int validValues = 0;
   
   for (int i = 0; i < size; i++)
   {
      if(houses[i] > 0)
      {
         sum += houses[i];
         validValues++;
      }
   }

   float average = sum / validValues;

   return average;
}

/*
  Function: display(average)
  Description: This function will display to the user the average value of the neighborhood.
*/
void display(float average)
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   cout << "The average of the neighborhood is $" << average << endl;
}
