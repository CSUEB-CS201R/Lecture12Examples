#include <iostream>

using namespace std;

void InsertItem(int values[], int startIndex, int endIndex)
// Post: values[0]..values[endIndex] are now sorted.
{
    for (int current = endIndex; current != startIndex; current--) {
        if (values[current] < values[current - 1]) {
            swap(values[current], values[current - 1]);
        } else {
            break;
        }
    }
}

void InsertionSort(int values[], int numValues)
// Post: The elements in the array values are sorted by key.
{
    for (int endIndex = 0; endIndex < numValues; endIndex++)
        InsertItem(values, 0, endIndex);
}

int main() {

    int arr[5] = {3, 6, 8, 10, -1};

    cout << "Before: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    InsertionSort(arr, 5);

    cout << "After: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}