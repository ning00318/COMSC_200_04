#include<iostream>
#include "HeartRates.h"
using namespace std;

HeartRates::HeartRates(string first, string last, int monthOfBirth, int dayOfBirth, int yearOfBirth)
{
    firstName = first;
    lastName = last;
    setBirthDate(monthOfBirth, dayOfBirth, yearOfBirth);
}
void HeartRates::setFirstName(string first)
{
    firstName = first;
}
void HeartRates::setLastName(string last)
{
    lastName = last;
}
void HeartRates::setBirthDate(int m, int d, int y)
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
int HeartRates::getAge() const
{
    int month, day, year;
    int age;
    cout << "Please enter today's month, day, and year:" << endl;
    cin >> month >> day >> year;
    year -= getYear();
    if (month <= getMonth() && day < getDay())
        age = year - 1;
    else
        age = year;

    return age;
}
int HeartRates::getMaximumHeartRate()
{

}
int HeartRates::getTargetHeartRate()
{

}