#include <iostream>

// Function to define the size of the array
void defineSize(int& size) {
    std::cout << "Enter the size of the array: ";
    std::cin >> size;
}

// Function to insert data into the array
void insertData(int arr[], int size) {
    std::cout << "Enter " << size << " numbers into the array:" << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << "Element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
}

// Function to print the data in the array
void printData(const int arr[], int size) {
    std::cout << "Array contents: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int size;
    int* arr = nullptr;

    int choice;
    bool isInitialized = false;

    do {
        std::cout << "Menu:" << std::endl;
        std::cout << "1. Define the size of the array" << std::endl;
        std::cout << "2. Insert data into the array" << std::endl;
        std::cout << "3. Print the data in the array" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                if (isInitialized) {
                    delete[] arr; // Free the previously allocated memory
                }
                defineSize(size);
                arr = new int[size]; // Allocate memory for the array
                isInitialized = true;
                break;

            case 2:
                if (!isInitialized) {
                    std::cout << "Please define the size of the array first." << std::endl;
                } else {
                    insertData(arr, size);
                }
                break;

            case 3:
                if (!isInitialized) {
                    std::cout << "Please define the size of the array first." << std::endl;
                } else {
                    printData(arr, size);
                }
                break;

            case 4:
                // Clean up and exit
                if (isInitialized) {
                    delete[] arr;
                }
                std::cout << "Exiting the program." << std::endl;
                break;

            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }

    } while (choice != 4);

    return 0;
}
