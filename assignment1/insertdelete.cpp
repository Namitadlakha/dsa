#include <iostream>
using namespace std;

void insertElement(int arr[], int &n, int capacity, int element, int position) {
    if (n >= capacity) {
        cout << "Insertion failed. Array is full.\n";
        return;
    }
    if (position < 0 || position > n) {
        cout << "Invalid position.\n";
        return;
    }
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    n++;
}

void deleteElement(int arr[], int &n, int position) {
    if (position < 0 || position >= n) {
        cout << "Invalid position.\n";
        return;
    }
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;
}

void printArray(int arr[], int n) {
    cout << "Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}


int main() {
    int capacity = 100;
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;

    cout << "Initial ";
    printArray(arr, n);

    insertElement(arr, n, capacity, 25, 2);
    cout << "After Insertion (25 at position 2): ";
    printArray(arr, n);

    deleteElement(arr, n, 4);
    cout << "After Deletion (position 4): ";
    printArray(arr, n);

    return 0;
}

