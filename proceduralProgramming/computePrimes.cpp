#include <iostream>

using namespace std;

// Early declaration of functions - Prototypes  
void greeting();
int getSize();
void computePrimes(int size);
bool isPrime(int n);

/*
  Function: Main
  Description: This is my main function and it will execute all of the functions in my program.
*/
int main()
{
   greeting();

   int size = getSize();

   computePrimes(size);
   
   return 0;
}

/*
  Function: greeting
  Description: This is my gretting function and it will greet the user with a message.
*/
void greeting()
{
   cout << "Welcome to the Primes Calculator!\n";
   cout << "Just input how many primes you want to display and let the program do the rest!\n";
}

/*
  Function: getSize
  Description: This is my getSize function and it will ask the user for how many numbers they want to display.
*/
int getSize()
{
   int size = 0;

   cout << "How many numbers from 0 to what do you want to check and display as a prime numbers? ";
   cin >> size;
   
   return size;
}

/*
  Function: computePrimes
  Description: This function will compute the prime numbers and display them.
*/
void computePrimes(int size)
{
   
   for (int i = 2; i < size; i++)
   {
      if(isPrime(i))
         cout << i << " ";
   }

   cout << endl;
}

/*
  Function: isPrime
  Description: This function will determine whether a prime number. 
*/
bool isPrime(int n)
{        
   for (int i = 2; i * i <= n; i++)
   {
      if (n % i == 0)
         return false;
   }
   
   return true;         
}
