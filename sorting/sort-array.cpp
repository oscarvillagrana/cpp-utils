// Ex.sort-array.cpp

// Ex.5A.cpp

void sortArray(int array[], int size)
{
    bool swapped; //set swapped true if any swap occurs
    do
    {  
        swapped = false;
        for (int i = 0; i < (size-1); i++)
        {
            if (array[i] > array[i+1])
            {
                swapper(array[i], array[i+1]);
                swapped = true;
            }
        }
    } while (swapped);
}

// file input
long int creditCard;

ifstream inputFile;

inputFile.open("creditcard.txt");

if (!inputFile)
{
    cout << "ERROR: Invalid filename\n";
    exit(1);
}

inputFile >> creditCard;
cout << "The credit card number is: " << creditCard << endl;

inputFile.close();

for (i = 0; i < 20 ; i++)
    inputFile >> creditCards[i];

cout << "Enter a card number: " << endl;
cint >> entered_card;

int pos = 0;

bool isFound = false;
while (!isFound && pos < FileSize) 
{
    if (creditCards[pos] == entered_card)
        isFound = true;
    pos++;
}

if


// Exercise 5B: Oscar Villagrana
// This program prints out as many asterisks as the user wants.

#include <fstream>
void sortArray(int array[], int size);
void swapper(int& x, int& y);

int main()
{


    const int NUM = 16;
    
    long int creditCard[NUM_DIGITS];
 
    ifstream inputFile;
    inputFile.open("creditcard.txt");

    inputFile.open("names.txt");
    
    if (!inputFile)
    {
        cout << "ERROR: Invalid filename\n";
        exit(1);
    }
    
    inputFile >> creditCard;
    cout << "The credit card number is: " << creditCard << endl;
    


    inputFile.close();

}

//sorts array of length size using bubblesort algorithm
void sortArray(int array[], int size)
{

    bool swapped; //set swapped true if any swap occurs
 
    do
    {
        
        swapped = false;
        
        for (int i = 0; i < (size-1); i++)
        {
        
            if (array[i] > array[i+1])
            {
                swapper(array[i], array[i+1]);
                swapped = true;
            }
        }
    } while (swapped);
}

//swaps ints passed in by reference
void swapper(int& x, int& y)
{
    int temp;
    
    temp = x;
    x = y;
    y = temp;
}