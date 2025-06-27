#include<iostream>
#include<string>
#include "HeartRates.h"
using namespace std;

int main()
{
    string firstName, lastName;
    int month, day, year;

    cout << "Please enter first and last name (separated by spaces):" << endl;
    cin >> firstName >> lastName;
    cout << "Please enter month, day, and year of birth (separated by spaces):" << endl;
    cin >> month >> day >> year;

    HeartRates hRates(firstName, lastName, month, day, year);

    cout << "First Name: "<< hRates.getFirstName() << endl;
    cout << "Last Name: "<< hRates.getLastName() << endl;
    cout << "Date of Birth: " << hRates.getMonth() << "/" << hRates.getDay() << "/" << hRates.getYear() << endl;
    int age = hRates.getAge();
    cout << "Age: " << age << endl;
    cout << "Maximum Heart Rate: " << hRates.getMaximumHeartRate(age) << endl;
    cout << "Target Heart Rate: " << endl;
    return 0;
}