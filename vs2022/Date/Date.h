#pragma once
#include <iostream>
using namespace std;

class Date {
    friend ostream& operator<<(ostream& out, const Date& date);

public:
    Date(int y = 1, int m = 1, int d = 1);

    void print();
    bool isLeapYear(int y) const;
    int DaysInMonth(int year, int month) const;
    int ToDays() const;
    void FromDays(int days);

    Date operator+(int days) const;
    Date operator-(int days) const;
    int operator-(const Date& d) const;

private:
    int m_Year;
    int m_Month;
    int m_Day;
};