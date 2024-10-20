#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) 
{
    int expectedSum = (n * (n + 1)) / 2; // Sum of first n natural numbers
    int actualSum = 0;

    for (int i = 0; i < n - 1; i++) 
	{
        actualSum += arr[i]; // Calculate the sum of the array elements
    }

    return expectedSum - actualSum; // The missing number is the difference
}

int main() 
{
    int n;

    cout << "Enter the total number of elements (including the missing one): ";
    cin >> n;

    int arr[n - 1]; // Array of size n-1 because one number is missing

    cout << "Enter " << n - 1 << " elements (1 to " << n << "):\n";
    for (int i = 0; i < n - 1; i++) 
	{
        cin >> arr[i];
    }

    int missingNumber = findMissingNumber(arr, n);
    cout << "The missing number is: " << missingNumber << endl;

    return 0;
}

