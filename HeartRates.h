#include<string>
#ifndef HEARTRATES_H
#define HEARTRATES_H

class HeartRates
{
public:
    HeartRates(std::string, std::string, int, int, int);
    void setFirstName(std::string);
    void setLastName(std::string);
    void setDateOfBirth(int, int, int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    std::string getFirstName() const;
    std::string getLastName() const;
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    int getAge() const;
    int getMaximumHeartRate(int);
    std::string getTargetHeartRate(int);
private:
    std::string firstName;
    std::string lastName;
    int month;
    int day;
    int year;
};

#endif