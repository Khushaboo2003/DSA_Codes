#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
	{
        cin >> arr[i];
    }

    int largest = arr[0]; // Assume the first element is the largest

    for (int i = 1; i < n; i++) 
	{
        if (arr[i] > largest) 
		{
            largest = arr[i]; // Update largest if current element is greater
        }
    }

    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}

