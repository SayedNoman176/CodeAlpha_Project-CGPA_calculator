#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numCourses;
    float grade, creditHours;
    float totalCredits = 0;
    float totalPoints = 0;
    float cgpa;

    cout << "===== CGPA CALCULATOR =====" << endl;
    cout << endl;

    cout << "Enter number of courses: ";
    cin >> numCourses;

    // loop for each course
    for (int i = 1; i <= numCourses; i++)
    {
        cout << endl;
        cout << "Course " << i << ":" << endl;

        cout << "Enter grade points (0.0 - 4.0): ";
        cin >> grade;

        cout << "Enter credit hours: ";
        cin >> creditHours;

        // check if input is wrong
        while (grade < 0 || grade > 4 || creditHours <= 0)
        {
            cout << "Invalid input! Please enter again." << endl;
            cout << "Enter grade points (0.0 - 4.0): ";
            cin >> grade;
            cout << "Enter credit hours: ";
            cin >> creditHours;
        }

        totalCredits = totalCredits + creditHours;
        totalPoints = totalPoints + (grade * creditHours);

        cout << "Grade Points for this course: " << grade * creditHours << endl;
    }

    cout << endl;
    cout << "---------------------------" << endl;
    cout << "Total Credit Hours: " << totalCredits << endl;
    cout << "Total Grade Points: " << totalPoints << endl;

    // CGPA calculation
    if (totalCredits > 0)
    {
        cgpa = totalPoints / totalCredits;
        cout << fixed << setprecision(2);
        cout << "Your CGPA is: " << cgpa << endl;
    }
    else
    {
        cout << "No courses entered." << endl;
    }

    cout << "---------------------------" << endl;
    cout << "Thank you!" << endl;

    return 0;
}