#pragma once
#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <iomanip>

class Date {
private:
    int year;
    int month;
    int day;

    // 辅助函数，用于计算一个月的天数
    int daysInMonth(int m, int y) const;

    // 将日期转换为自公元以来的天数
    int toJulianDay() const;

    // 从自公元以来的天数转换回日期
    void fromJulianDay(int julianDay);

public:
    // 构造函数
    Date(int y = 1, int m = 1, int d = 1);

    // 日期加法
    Date operator+(int days) const;
    Date operator+(const Date& other) const;

    // 日期减法
    Date operator-(int days) const;
    int operator-(const Date& other) const;

    // 打印日期
    void print() const;

    // 获取日期
    int getYear() const { return year; }
    int getMonth() const { return month; }
    int getDay() const { return day; }
};

#endif // DATE_H