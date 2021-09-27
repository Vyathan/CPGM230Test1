// Matt Brundage II
// 9/27/21
// CollegeEnrollment.cpp
// C++ Program to track enrollment across 3 years and 3 semesters

#include <iostream>
#include <iomanip>

using namespace std;

//Function Prototype
void displayArray(int enrollments[3][3]);

int main()
{
    // Declare Array
    int enrollments[3][3] = {0};

    // Store Data in Array
    for (int year = 0; year < 3; year += 1)
        for (int semester =0; semester < 3; semester += 1)
        {
            cout << "Year " << year + 1 << ", Semester " << semester + 1 << " Enrollments: ";
            cin >> enrollments[year][semester];
        } // End For

    //Display Array Contents
    displayArray(enrollments);
    return 0;

} // End of Main Function

//*****Function Definitions*****
void displayArray(int enrollments[3][3])
{
    cout << endl << "Enrollment by Semester: " << endl;
    for (int year = 0; year < 3; year += 1)
    {
        cout << "Year " << year + 1 << ": " << endl;
        for (int semester = 0; semester < 3; semester += 1)
            cout << "  Semester " << semester + 1 << ": " << nums[year][semester] << endl;
        // End for
    } // End for
}  // End of displayArray function