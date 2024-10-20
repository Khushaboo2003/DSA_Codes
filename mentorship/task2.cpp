#include <iostream>
using namespace std;

int main() 
{
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n < 2) 
	{
        cout << "Array must contain at least two elements." << endl;
        return 1;
    }

    int arr[n];

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }

    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < n; i++) 
	{
        if (arr[i] > largest) 
		{
            second_largest = largest; // Update second largest
            largest = arr[i]; // Update largest
        } 
		else if (arr[i] > second_largest && arr[i] < largest) 
		{
            second_largest = arr[i]; // Update second largest
        }
    }

    if (second_largest == INT_MIN) 
	{
        cout << "There is no second largest element." << endl;
    }
	else 
	{
        cout << "The second largest element in the array is: " << second_largest << endl;
    }

    return 0;
}

