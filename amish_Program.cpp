#include <iostream>
#include <iomanip>  


int linear_search_roll(const int rolls[], int key, int size) {
    for (int i = 0; i < size; ++i) {
        if (rolls[i] == key) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    const int NUM_STUDENTS = 30;
    
    //arrays with sample data
    int rolls[30] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30};
    int pf_marks[30] = {90, 57, 51, 97, 67, 65, 64, 58, 97, 56, 93, 97, 84, 55, 87, 77, 52, 51, 55, 63, 64, 82, 88, 51, 85, 62, 95, 91, 94, 84};
    int oop_marks[30] = {76, 64, 78, 87, 67, 50, 98, 60, 94, 77, 71, 67, 59, 63, 98, 71, 56, 55, 74, 56, 72, 72, 88, 66, 52, 96, 79, 84, 57, 74};
    int dsa_marks[30] = {55, 85, 68, 90, 89, 73, 86, 62, 95, 54, 52, 92, 64, 99, 68, 55, 64, 56, 74, 67, 79, 90, 73, 60, 73, 72, 63, 92, 67, 94};
    
    //search roll no
    int key;
    std::cout << "Enter the roll number to search: ";
    std::cin >> key;
    
    // Perform search
    int index = linear_search_roll(rolls, key, NUM_STUDENTS);
    
    if (index != -1) {
        // Calculate total and percentage
        int total = pf_marks[index] + oop_marks[index] + dsa_marks[index];
        float percentage = (static_cast<float>(total) / 300) * 100;
        
        
        std::cout << "\nStudent Record Found:" << std::endl;
        std::cout << "Roll Number: " << rolls[index] << std::endl;
        std::cout << "PF Marks: " << pf_marks[index] << std::endl;
        std::cout << "OOP Marks: " << oop_marks[index] << std::endl;
        std::cout << "DSA Marks: " << dsa_marks[index] << std::endl;
        std::cout << "Total Marks: " << total << std::endl;
        std::cout << "Percentage: " << std::fixed << std::setprecision(2) << percentage << "%" << std::endl;
    } else {
        std::cout << "Record Not Found" << std::endl;
    }
    
    return 0;
}