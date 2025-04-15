// Algorithm: 1.Create marks and grade variable.

//            2.Take marks from the user.

//            3.Check if marks are between 0 and 100.

//            4.Assign grade using a ternary operator based on marks.

//            5.Display grade message using switch-case.

//            6.Check and display eligibility using if-else.

//            7.End.

#include <iostream>
using namespace std;

int main()
{
    int marks;
    char grade;

    cout << "Enter your marks (0 - 100): ";
    cin >> marks;

    if (marks >= 0 && marks <= 100)
    {
        cout << "Valid marks." << endl;
    }
    else
    {
        cout << "Invalid marks entered." << endl;
    }

    grade = (marks >= 90 && marks <= 100) ? 'A' : (marks >= 80 && marks <= 89) ? 'B'
                                              : (marks >= 70 && marks <= 79)   ? 'C'
                                              : (marks >= 60 && marks <= 69)   ? 'D'
                                                                               : 'F';

    switch (grade)
    {
    case 'A':
        cout << "Your grade is A.Excellent work!" << endl;
        break;
    case 'B':
        cout << "Your grade is B.Well done!" << endl;
        break;
    case 'C':
        cout << "Your grade is C.Good job." << endl;
        break;
    case 'D':
        cout << "Your grade is D.You Passed but you could do better." << endl;
        break;
    case 'F':
        cout << "Your grade is F.Sorry, you failed." << endl;
        break;
    default:
        cout << "Invalid data entered." << endl;
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D')
    {
        cout << "You are eligible for the next level." << endl;
    }
    else
    {
        cout << "You are not eligible for the next level." << endl;
    }

    return 0;
}
