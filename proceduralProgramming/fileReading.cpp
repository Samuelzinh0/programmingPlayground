#include <iostream>
#include <fstream>

using namespace std;

//Early declarations of my functions - Prototypes
void getFileName(char fileName[]);
int readFile(char fileName[]);
void display(int size);

/*
  Function: main
  Description: This function will run my program executing the needed functions.
*/
int main()
{
   char fileName[256];
   getFileName(fileName);

   int size = readFile(fileName);

   display(size);
   
   return 0;
}

/*
  Function: getFileName
  Description: This function will get the name of the file the user wnats to read.
*/
void getFileName(char fileName[])
{
   cout << "What is the name of the file? ";
   cin >> fileName;
}

/*
  Function: readFile
  Description: This function will read the file and compute how many characters are in the file.
*/
int readFile(char fileName[])
{
   ifstream fin(fileName);

   if(fin.fail())
   {
      cout << "Error reading file \"" << fileName << "\".";
      return 0;
   }

   int size = 0;
   char data[256];
   
   while(fin >> data[size])
   {
      size++;
   }

   fin.close();

   return size;
}

/*
  Function: display 
  Description: This will display to the user the number of characters in a file.
*/
void display(int size)
{
   cout << "There are " << size << " characters in this file.\n";
}
