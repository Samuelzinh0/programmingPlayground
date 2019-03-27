#include <iostream>

using namespace std;

// Forward declarations of my functions - Prototypes
void getText(char text[]);
int countSymbols(char text[]);
void display(char text[], int numAlpha);

/*
  Function: main()
  Description: This function will run the rest of my functions.
*/
int main()
{
   char text[256];

   getText(text);
   
   int numAlpha = countSymbols(text);

   display(text, numAlpha);
   
   return 0;
}

/*
  Function: getText(text)
  Description: Greeting and will ask the user for the text as the input.
*/
void getText(char text[])
{
   cout << "This is a program to check how many letters pertaining to the "
        << "alphabet exist in the line of text given by you the user.\n\n";
   cout << "Enter some text please: ";
   cin.getline(text, 256);
}

/*
  Function: countSymbols(text)
  Description: This function will check if any of the text characters non alphabetical.
*/
int countSymbols(char text[])
{
   int numAlpha = 0;

   for(int i = 0; text[i]; i++)
   {
      if(isalpha(text[i]) && text[i] != " ")
      {
         numAlpha++;
      }
   }
   
   return numAlpha;
}

/*
  Function: display(text, numAlpha)
  Description: This function will show the given text by the user with the right number of alphabetical characters counted.
*/
void display(char text[], int numAlpha)
{
   cout << "\nThe text you initially entered: ";

   for(int i = 0; text[i]; i++)
   {
      cout << text[i];
   }

   cout << "\nIn your text there was " << numAlpha << " non-alphabetical symbols.\n\n";
}

   
   
