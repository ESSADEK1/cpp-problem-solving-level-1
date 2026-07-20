#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name, city, country;
    int age;
    double monthlySalary;
    char gender;
    bool married;

    // Input
    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cin.ignore();

    cout << "Enter your city: ";
    getline(cin, city);

    cout << "Enter your country: ";
    getline(cin, country);

    cout << "Enter your monthly salary: ";
    cin >> monthlySalary;

    cout << "Enter your gender (M/F): ";
    cin >> gender;

    cout << "Are you married? (1 = Yes, 0 = No): ";
    cin >> married;

    // Calculate yearly salary
    double yearlySalary = monthlySalary * 12;

    // Output
    cout << "\n*************************************\n";
    cout << "Name            : " << name << endl;
    cout << "Age             : " << age << " Years" << endl;
    cout << "City            : " << city << endl;
    cout << "Country         : " << country << endl;
    cout << "Monthly Salary  : " << monthlySalary << endl;
    cout << "Yearly Salary   : " << yearlySalary << endl;
    cout << "Gender          : " << gender << endl;
    cout << "Married         : " << married << endl;
    cout << "*************************************\n";

    return 0;
}
