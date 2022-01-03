//!https://www.javatpoint.com/daa-dutch-national-flag#:~:text=The%20flag%20of%20the%20Netherlands,not%20consume%20any%20extra%20space.
//!https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1/?category[]=Sorting&category[]=Sorting&page=1&query=category[]Sortingpage1category[]Sorting
//!https://www.geeksforgeeks.org/sort-an-array-of-0s-1s-and-2s/

#include <bits/stdc++.h>
using namespace std;

// Function to sort the input array where the array is assumed to have values in {0, 1, 2}
// We have to take 3 distint or unique elements
void JTP(int arr[], int arr_size)
{
    int low = 0;
    int high = arr_size - 1;
    int mid = 0;
    // We have keep iterating till all the elements are sorted
    while (mid <= high)
    {
        switch (arr[mid])
        {
        // Here mid is 0.
        case 0:
            swap(arr[low++], arr[mid++]);
            break;
        // Here mid is 1.
        case 1:
            mid++;
            break;
        // Here mid is 2.
        case 2:
            swap(arr[mid], arr[high--]);
            break;
        }
    }
}

// Now, we write the function to print array arr[]
void printArray(int arr[], int arr_size)
{
    // To iterate and print every element, we follow these steps
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
}

//Main Code
int main()
{
    int arr[] = {0, 1, 0, 1, 2, 0, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Array before executing the algorithm: ";
    printArray(arr, n);
    JTP(arr, n);
    cout << "\nArray after executing the DNFS algorithm: ";
    printArray(arr, n);
    return 0;
}