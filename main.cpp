// Study Group 7 (Alex Milanez, John Edwin Karel Delgado, Ronell Sean Rulloda)

#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstring>
#include <cstdlib>


#include "unsortedlist.h" //make and get the .h of unsortedlist

using namespace std;


void PrintList (ofstream & fileOut, UnsortedType & list);

int main ()
{
  ifstream fileIn;		// file with operations
  ofstream fileOut;		// file with output
  string nameIn;		// input name
  string nameOut;		// output name
  string outputLabel;
  string command;		// operation to be executed

  int number;
  ItemType item;
  UnsortedType list;
  bool found;
  int comNum;

// File names should be requested, read, and prepared.
  cout << "Enter the input name: " << endl;
  cin >> nameIn;
  fileIn.open (nameIn.c_str ());

  cout << "Enter the output name " << endl;
  cin >> nameOut;
  fileOut.open (nameOut.c_str ());

  cout << "Enter name of the test run" << endl;
  cin >> outputLabel;
  fileOut << outputLabel << endl;
  if (!fileIn)
    {
      cout << "Error, not found!" << endl;
      exit (2);
    }
  fileIn >> command;

  comNum = 0;
  while (command != "Quit")
    {
      comNum++;		// increment comNum

// based on command perform the operation
      if (command == "GetLength")
	fileOut << "Length: " << list.GetLength () << endl;
      else if (command == "PutItem")
	{
	  fileIn >> number;
	  item.Initialize (number);
	  list.PutItem (item);
	  fileOut << number << " is in list" << endl;
	}
      else if (command == "PrintList")
	{
	  PrintList (fileOut, list);
	}
      else if (command == "GetItem")
	{
	  fileIn >> number;
	  item.Initialize (number);
	  list.GetItem (item, found);
	  if (found)
	    fileOut << number << " found in list" << endl;
	  else
	    fileOut << number << " not in list" << endl;
	}
      else if (command == "IsFull")
	{
	  if (list.IsFull ())
	    fileOut << "List is full." << endl;
	  else
	    fileOut << "List is not full." << endl;
	}
      else if (command == "DeleteItem")
	{
	  fileIn >> number;
	  item.Initialize (number);
	  list.DeleteItem (item);
	  fileOut << number << " is deleted" << endl;
	}
      else if (command == "MakeEmpty")
	list.MakeEmpty ();
      else
	cout << command << " is not a valid command." << endl;
      cout << " Command number " << comNum << " completed." << endl;
      fileIn >> command;
    }

  cout << "Testing completed." << endl;
// closes
  fileIn.close ();
  fileOut.close ();
  return 0;
}

void
PrintList (ofstream & dataFile, UnsortedType & list)
// The list has been initialized.
//The dataFile has been written with each item in the list.
{
  list.ResetList ();		// resets list
  int currPos = 0;
// loop over the list, writing each member to a file.
  while (currPos < list.GetLength ())
    {
      list.GetNextItem ().Print (dataFile);
      currPos++;
    }
  dataFile << endl;

}

//end
