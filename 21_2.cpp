 #include <iostream>
using namespace std;

// Function for linear search
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Return the index if target is found
        }
    }
    return -1; // Return -1 if the target is not found
}

int main() {
    int arr[] = {2, 3, 4, 10, 40}; // Unsorted or sorted array
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;
    
    int result = linearSearch(arr, size, target);
    
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in array" << endl;
        
    return 0;
}