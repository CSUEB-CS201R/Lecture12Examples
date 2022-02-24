//tests the procedure bubble sort.

#include <iostream>
using namespace std;

void fillArray(int a[], int size, int& numberUsed);
//Precondition: size is the declared size of the array a.
//Postcondition: numberUsed is the number of values stored in a.
//a[0] through a[numberUsed-1] have been filled with nonnegative integers
//read from the keyboard.

void bubblesort(int arr[], int length);
//Precondition: length <= declared size of the array arr.
//The array elements arr[0] thorugh a[length - 1] have values.
//Postcondition: The values of arr[0] through arr[length - 1] have
//been rearranged so that arr[0] <= arr[1] <= ... <= arr[length - 1]


int main()
{

    cout << "This program uses bubble sort to sort an array.";

    int sampleArray[10], numberUsed;
    fillArray(sampleArray, 10, numberUsed);
    bubblesort(sampleArray, numberUsed);

    cout << "In sorted order the numbers are: \n";
    for (int index = 0; index < numberUsed; index++)
        cout << sampleArray[index] << " ";
    cout << endl;

    return 0;

}


void fillArray(int a[], int size, int& numberUsed)
{
    cout << "Enter up to " << size << " nonnegative whole numbers.\n"
         << "Mark the end of the list with a negative number.\n";

    int next, index = 0;

    cin >> next;

    while ((next >= 0) && (index < size))
    {
        a[index] = next;
        index++;
        cin >> next;
    }

    numberUsed = index;
}

void bubblesort(int arr[], int length)
{
    //Bubble largest number toward the right/bottom of the array
    for (int i = length-1; i > 0; i--)
        for (int j = 0; j < i; j++)
            if (arr[j] > arr[j + 1])
            {
            //swap the numbers
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
}