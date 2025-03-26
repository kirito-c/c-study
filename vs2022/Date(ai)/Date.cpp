#include "Date.h"

// 计算一个月的天数
int Date::daysInMonth(int m, int y) const {
    static const int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (m == 2 && (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)) {
        return 29;
    }
    return days[m - 1];
}

// 将日期转换为自公元以来的天数
int Date::toJulianDay() const {
    int julian = day;
    for (int y = 1; y < year; ++y) {
        julian += 365 + (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0));
    }
    for (int m = 1; m < month; ++m) {
        julian += daysInMonth(m, year);
    }
    return julian;
}

// 从自公元以来的天数转换回日期
void Date::fromJulianDay(int julianDay) {
    year = 1;
    julianDay--;
    while (julianDay >= 365 + (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))) {
        julianDay -= 365 + (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
        year++;
    }
    month = 1;
    while (julianDay >= daysInMonth(month, year)) {
        julianDay -= daysInMonth(month, year);
        month++;
    }
    day = julianDay + 1;
}

// 构造函数
Date::Date(int y, int m, int d) : year(y), month(m), day(d) {
    if (day < 1 || day > daysInMonth(m, y)) {
        day = 1;
    }
    if (month < 1 || month > 12) {
        month = 1;
    }
}

// 日期加法
Date Date::operator+(int days) const {
    Date result(*this);
    result.fromJulianDay(result.toJulianDay() + days);
    return result;
}

Date Date::operator+(const Date& other) const {
    int totalDays = (*this - Date(1, 1, 1)) + (other - Date(1, 1, 1));
    Date result(Date(1, 1, 1) + totalDays);
    return result;
}

// 日期减法
Date Date::operator-(int days) const {
    Date result(*this);
    result.fromJulianDay(result.toJulianDay() - days);
    return result;
}

int Date::operator-(const Date& other) const {
    return toJulianDay() - other.toJulianDay();
}

// 打印日期
void Date::print() const {
    std::cout << year << "-" << std::setw(2) << std::setfill('0') << month
        << "-" << std::setw(2) << std::setfill('0') << day << std::endl;
}