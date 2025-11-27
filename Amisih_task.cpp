#include <iostream>
#include <vector>


int linear_search(const std::vector<int>& arr, int key) {
    for (size_t i = 0; i < arr.size(); ++i) {
        if (arr[i] == key) {
            return static_cast<int>(i);  
        }
    }
    return -1; 
}

int main() {
    
    int size;
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
    
  
    std::vector<int> arr(size);
    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
    
   
    int key;
    std::cout << "Enter the search key: ";
    std::cin >> key;
    

    int result = linear_search(arr, key);
    
    if (result != -1) {
        std::cout << "Element " << key << " found at index " << result << "." << std::endl;
    } else {
        std::cout << "Element " << key << " not found in the array." << std::endl;
    }
    
    return 0;
}