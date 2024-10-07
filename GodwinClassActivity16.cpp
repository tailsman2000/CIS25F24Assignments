#include <iostream>
#include <string>
#include <iomanip> // for setting precision

using namespace std;

// Function to calculate the average grade
double calculateAverage(double grades[], int numberOfStudents) {
    double sum = 0.0;
    for (int i = 0; i < numberOfStudents; i++) {
        sum += grades[i];
    }
    return sum / numberOfStudents;
}

// Function to find the highest grade
double findHighestGrade(double grades[], int numberOfStudents) {
    double highest = grades[0];
    for (int i = 1; i < numberOfStudents; i++) {
        if (grades[i] > highest) {
            highest = grades[i];
        }
    }
    return highest;
}

// Function to find the lowest grade
double findLowestGrade(double grades[], int numberOfStudents) {
    double lowest = grades[0];
    for (int i = 1; i < numberOfStudents; i++) {
        if (grades[i] < lowest) {
            lowest = grades[i];
        }
    }
    return lowest;
}

// Function to display students above the average grade
void studentsAboveAverage(string names[], double grades[], int numberOfStudents, double average) {
    cout << "Students above average grade (" << setprecision(2) << fixed << average << "):\n";
    for (int i = 0; i < numberOfStudents; i++) {
        if (grades[i] > average) {
            cout << names[i] << " with grade " << grades[i] << endl;
        }
    }
}

// Function to compare grades between two students
void compareGrades(string names[], double grades[], int numberOfStudents) {
    string student1, student2;
    cout << "Enter the name of the first student to compare: ";
    cin >> student1;
    cout << "Enter the name of the second student to compare: ";
    cin >> student2;

    int index1 = -1, index2 = -1;
    for (int i = 0; i < numberOfStudents; i++) {
        if (names[i] == student1) {
            index1 = i;
        }
        if (names[i] == student2) {
            index2 = i;
        }
    }

    if (index1 != -1 && index2 != -1) {
        cout << student1 << "'s grade: " << grades[index1] << endl;
        cout << student2 << "'s grade: " << grades[index2] << endl;
        if (grades[index1] > grades[index2]) {
            cout << student1 << " has a higher grade than " << student2 << ".\n";
        } else if (grades[index1] < grades[index2]) {
            cout << student2 << " has a higher grade than " << student1 << ".\n";
        } else {
            cout << "Both students have the same grade.\n";
        }
    } else {
        cout << "One or both of the students were not found.\n";
    }
}

int main() {
    int numberOfStudents;
    cout << "Enter the number of students: ";
    cin >> numberOfStudents;

    string names[numberOfStudents];
    double grades[numberOfStudents];

    // Input student names and grades
    for (int i = 0; i < numberOfStudents; i++) {
        cout << "Enter the name of student " << (i + 1) << ": ";
        cin >> names[i];
        cout << "Enter the grade of " << names[i] << ": ";
        cin >> grades[i];
    }

    double average = calculateAverage(grades, numberOfStudents);
    double highest = findHighestGrade(grades, numberOfStudents);
    double lowest = findLowestGrade(grades, numberOfStudents);

    cout << "\nGrade Analysis:\n";
    cout << "Average grade: " << setprecision(2) << fixed << average << endl;
    cout << "Highest grade: " << highest << endl;
    cout << "Lowest grade: " << lowest << endl;

    studentsAboveAverage(names, grades, numberOfStudents, average);

    char compareChoice;
    cout << "\nDo you want to compare grades between two students? (y/n): ";
    cin >> compareChoice;

    if (compareChoice == 'y' || compareChoice == 'Y') {
        compareGrades(names, grades, numberOfStudents);
    }

    return 0;
}
