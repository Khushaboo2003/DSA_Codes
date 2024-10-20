#include <iostream>
using namespace std;

int removeDuplicates(int arr[], int n) 
{
    if (n == 0 || n == 1) 
	{
        return n; // No duplicates if array is empty or has one element
    }

    int uniqueIndex = 0; // Index for the unique elements

    for (int i = 1; i < n; i++) 
	{
        // If current element is not equal to the last unique element
        if (arr[i] != arr[uniqueIndex]) 
		{
            uniqueIndex++; // Move to the next position
            arr[uniqueIndex] = arr[i]; // Update the unique element
        }
    }

    return uniqueIndex + 1; // Return the new size of the array
}

int main() 
{
    int n;

    cout << "Enter the number of elements in the sorted array: ";
    cin >> n;

    int arr[n];
    
    cout << "Enter " << n << " sorted elements:\n";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }

    n = removeDuplicates(arr, n);

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < n; i++) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


