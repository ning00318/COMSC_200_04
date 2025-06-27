#include<string>
#ifndef HEARTRATES.H
#define HEARTRATES.H

class HeartRates
{
public:
    HeartRates(int, int, int);
    void setFirstName();
    void setLastName();
    void setMonth();
    void setDay();
    void setYear();
    std::string getFirstName() const;
    std::string getLastName() const;
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    int getAge();
    int getMaximumHeartRate();
    int getTargetHeartRate();
private:
    std::string firstName;
    std::string lastName;
    int month;
    int day;
    int year;
};

#endif