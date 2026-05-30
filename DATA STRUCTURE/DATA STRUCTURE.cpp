// DATA STRUCTURE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;

struct Student
{
    int id;
    string name;
    float marks;

};

Student s[100];
int total = 0;

// Add Student
void addStudent()
{
    cout << "\nEnter Student ID: ";
    cin >> s[total].id;

    cin.ignore();

    cout << "Enter Student Name: ";
    getline(cin, s[total].name);

    cout << "Enter Marks: ";
    cin >> s[total].marks;

    total++;

    cout << "\nStudent Added Successfully!\n";
}

// Display Students
void displayStudents()
{
    if (total == 0)
    {
        cout << "\nNo Record Found!\n";
        return;
    }

    cout << "\n----- Student Records -----\n";

    for (int i = 0; i < total; i++)
    {
        cout << "\nID: " << s[i].id;
        cout << "\nName: " << s[i].name;
        cout << "\nMarks: " << s[i].marks << endl;
    }
}

// Search Student
void searchStudent()
{
    int id;
    bool found = false;

    cout << "\nEnter Student ID: ";
    cin >> id;

    for (int i = 0; i < total; i++)
    {
        if (s[i].id == id)
        {
            found = true;

            cout << "\nRecord Found\n";
            cout << "ID: " << s[i].id << endl;
            cout << "Name: " << s[i].name << endl;
            cout << "Marks: " << s[i].marks << endl;
        }
    }

    if (!found)
    {
        cout << "\nStudent Not Found!\n";
    }
}

int main()
{
    int choice;

    do
    {
        cout << "\n===== Student Record System =====";
        cout << "\n1. Add Student";
        cout << "\n2. Display Students";
        cout << "\n3. Search Student";
        cout << "\n4. Exit";

        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            searchStudent();
            break;

        case 4:
            cout << "\nProgram Closed";
            break;

        default:
            cout << "\nInvalid Choice";
        }

    } while (choice != 4);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
