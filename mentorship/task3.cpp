#include <iostream>
using namespace std;

bool isSortedAndRotated(int arr[], int n) 
{
    int count = 0;

    for (int i = 0; i < n; i++) 
	{
        // Check if current element is greater than the next element
        if (arr[i] > arr[(i + 1) % n]) 
		{
            count++;
        }
    }

    // The array is sorted and rotated if there is at most one point where
    // the order breaks (the count should be 0 or 1)
    return count <= 1;
}

int main() 
{
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }

    if (isSortedAndRotated(arr, n)) 
	{
        cout << "The array is sorted and rotated." << endl;
    } 
	else 
	{
        cout << "The array is not sorted and rotated." << endl;
    }

    return 0;
}

