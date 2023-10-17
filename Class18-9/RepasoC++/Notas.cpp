//
// Created by andre on 9/25/2023.
//
#include "iostream"
#include "Notas.h"
using namespace std;













int main(){
    int numGrades;
    double total = 0.0;

    // Input the number of grades
    std::cout << "Enter the number of grades: ";
    std::cin >> numGrades;

    // Input each grade and calculate the total
    for (int i = 1; i <= numGrades; ++i) {
        double grade;
        cout << "Enter grade #" << i << ": ";
        cin >> grade;
        total += grade;
    }

    // Calculate the average
    double average = total / numGrades;

    // Check if the average is 70 or more and provide feedback
    if (average >= 70.0) {
        cout << "Congratulations! Your average is " << average << ". You passed!" << endl;
    } else {
        std::cout << "Your average is " << average << ". You did not pass." << std::endl;
    }
    return 0;
}