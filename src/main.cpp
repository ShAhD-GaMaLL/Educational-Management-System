#include <bits/stdc++.h>
#include "Student.h"
#include "Teacher.h"
#include "Course.h"
#include "Admin.h"

using namespace std;

int main()
{
    int choice;
    cout << " Welcome to the Educational Management System\n";
    cout << "Management Students, Enter: 1 \n";
    cout << "Management Teachers, Enter: 2 \n";
    cout << "Management Courses, Enter: 3 \n";
    cout << "Management Admins, Enter: 4 \n";
    cout << "Exit, Enter: 5 \n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Managing Students\n";
        //
        break;
    case 2:
        cout << "Managing Teachers\n";
        //
        break;
    case 3:
        cout << " Managing Courses\n";
        //
        break;
    case 4:
        cout << "Managing Admins\n";
        //
        break;
    case 5:
        cout << "Exiting the system\n";
        break;
    default:
        cout << "invalid choice, please try again";
        return 0;
    }
}