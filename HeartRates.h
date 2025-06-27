#include<string>
#ifndef HEARTRATES.H
#define HEARTRATES.H

class HeartRates
{
public:
    HeartRates(std::string, std::string, int, int, int);
    void setFirstName(std::string);
    void setLastName(std::string);
    void setBirthDate(int, int, int);
    void setMonth(int);
    void setDay(int);
    void setYear(int);
    std::string getFirstName() const;
    std::string getLastName() const;
    int getMonth() const;
    int getDay() const;
    int getYear() const;
    void getAge() const;
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