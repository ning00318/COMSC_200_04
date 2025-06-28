#include<iostream>
#include "HeartRates.h"
using namespace std;

// Comment 1: Constructor receives first & last name, month, day, and year of birth as parameters.
HeartRates::HeartRates(string first, string last, int monthOfBirth, int dayOfBirth, int yearOfBirth)
{
    firstName = first;
    lastName = last;
    setDateOfBirth(monthOfBirth, dayOfBirth, yearOfBirth);
}

void HeartRates::setFirstName(string first)
{
    firstName = first;
}

void HeartRates::setLastName(string last)
{
    lastName = last;
}

// Comment 2: Member function receives month, day, and year of birth as parameters,
//            then assigns them to member variables respectively through set functions.
void HeartRates::setDateOfBirth(int m, int d, int y)
{
    setMonth(m);
    setDay(d);
    setYear(y);
}

void HeartRates::setMonth(int m)
{
    month = m;
}

void HeartRates::setDay(int d)
{
    day = d;
}

void HeartRates::setYear(int y)
{
    year = y;
}

string HeartRates::getFirstName() const
{
    return firstName;
}

string HeartRates::getLastName() const
{
    return lastName;
}

int HeartRates::getMonth() const
{
    return month;
}

int HeartRates::getDay() const
{
    return day;
}

int HeartRates::getYear() const
{
    return year;
}

// Comment 3: Member function first prompts the user to enter the current date,
//            then calculates and returns the patient's age.
int HeartRates::getAge() const
{
    int currentMonth, currentDay, currentYear;
    int age;
    cout << "Please enter today's month, day, and year:" << endl;
    cin >> currentMonth >> currentDay >> currentYear;
    
    age = currentYear - getYear();
    if (currentMonth <= getMonth() && currentDay < getDay())
        age--;
    
    return age;
}

// Comment 4: We receive the patientAge as a parameter from the return value of member
//            function getAge(), then calculate and return the maximum heart rate of the patient.
// Comment 5: The reason why we choose to take the parameter to calculate the maximum heart rate
//            instead of using the function getAge() directly, is because we don't need to repeat
//            the prompt again and input new values, we only want the return age.
int HeartRates::getMaximumHeartRate(int patientAge)
{
    int maxRate = 220 - patientAge;   
    return maxRate;
}

// Comment 6: We use the same return value as a parameter from the getAge() and calculate the
//            maximum heart rate, then find out the range of the target heart rate of the 
//            patient (50% - 85%).
string HeartRates::getTargetHeartRate(int patientAge)
{
    int lowRate, highRate;
    string targetRate;
    int maxRate = getMaximumHeartRate(patientAge);
    lowRate = maxRate * 0.5;
    highRate = maxRate * 0.85;

    // Comment 7: After finding out the range, use to_string() to convert and return the target heart rate.
    targetRate = to_string(lowRate) + "-" + to_string(highRate);

    return targetRate;
}