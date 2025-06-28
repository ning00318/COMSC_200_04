#include<iostream>
#include<string>
#include "HeartRates.h"
using namespace std;

void patientInfo(string&, string&, int&, int&, int&);

int main()
{
    string firstName, lastName;
    int month, day, year;

    patientInfo(firstName, lastName, month, day, year);

    // Comment 9: After getting the information (arguments) from what the user entered,
    //            we create an object, hRates, to access member functions from the class.
    HeartRates hRates(firstName, lastName, month, day, year);

    cout << "First Name: "<< hRates.getFirstName() << endl;
    cout << "Last Name: "<< hRates.getLastName() << endl;
    cout << "Date of Birth: " << hRates.getMonth() << "/" << hRates.getDay() << "/" << hRates.getYear() << endl;

    // Comment 10: Store the return value of getAge() in the variable age, so that when we can reuse it as an
    //             argument, pass it into both getMaximumHeartRate() and getTargetHeartRate() member functions.
    int age = hRates.getAge();
    cout << "Age: " << age << endl;
    cout << "Maximum Heart Rate: " << hRates.getMaximumHeartRate(age) << endl;
    cout << "Target Heart Rate: " << hRates.getTargetHeartRate(age) << endl;
    
    return 0;
}

// Comment 8: Use reference parameters to store the patient's info directly.
void patientInfo(string &firstName, string &lastName, int &month, int &day, int &year)
{
    cout << "Please enter first and last name (separated by spaces):" << endl;
    cin >> firstName >> lastName;
    cout << "Please enter month, day, and year of birth (separated by spaces):" << endl;
    cin >> month >> day >> year;
}