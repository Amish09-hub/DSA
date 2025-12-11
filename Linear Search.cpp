#include <iostream>
using namespace std;

int linear_search(const int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size]; 

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter the search key: ";
    cin >> key;

    int result = linear_search(arr, size, key);

    if (result != -1) {
        cout << "Element " << key << " found at index " << result << ".\n";
    } else {
        cout << "Element " << key << " not found in the array.\n";
    }

    delete[] arr; 

    return 0;
}
