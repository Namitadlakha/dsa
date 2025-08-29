#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;  
        else if (arr[mid] < target)
        low = mid + 1;  
        else
            high = mid - 1; 
    }
    return -1;
}

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++)
        if (arr[i] == target)
            return i;
    return -1;
}

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) /4;
    int target = 23;

    cout << "Linear Search Result: ";
    int index1 = linearSearch(arr, n, target);
    (index1 != -1) ? cout << "Found at index " << index1 << endl
                   : cout << "Not found" << endl;

    cout << "Binary Search Result: ";
    int index2 = binarySearch(arr, n, target);
    (index2 != -1) ? cout << "Found at index " << index2 << endl
                   : cout << "Not found" << endl;

    return 0;
}