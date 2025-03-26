#include "Date.h"

// 判断是否是闰年
bool Date::isLeapYear(int y) const {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

// 分配每个月的天数
int Date::DaysInMonth(int year, int month) const {
    static const int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (month == 2 && isLeapYear(year)) {
        return 29;
    }
    return days[month - 1];
}

// 将日期转换为天数
int Date::ToDays() const {
    int days = 0;
    for (int y = 1; y < m_Year; ++y) 
    {
        days += isLeapYear(y) ? 366 : 365;
    }
    for (int m = 1; m < m_Month; ++m) 
    {
        days += DaysInMonth(m_Year, m);
    }
    days += m_Day - 1;
    return days;
}

// 将天数转换为日期
void Date::FromDays(int days) 
{
    m_Year = 1;
    while (days >= (isLeapYear(m_Year) ? 366 : 365)) 
    {
        days -= isLeapYear(m_Year) ? 366 : 365;
        ++m_Year;
    }
    m_Month = 1;
    while (days >= DaysInMonth(m_Year, m_Month)) 
    {
        days -= DaysInMonth(m_Year, m_Month);
        ++m_Month;
    }
    m_Day = days + 1;
}

// 加法
Date Date::operator+(int days) const 
{
    Date result(*this);
    result.FromDays(result.ToDays() + days);
    return result;
}

// 减法
Date Date::operator-(int days) const 
{
    Date result(*this);
    result.FromDays(result.ToDays() - days);
    return result;
}

// 计算两日期天数差
int Date::operator-(const Date& d) const 
{
    return ToDays() - d.ToDays();
}

// 输出流重载
ostream& operator<<(ostream& out, const Date& date) 
{
    out << date.m_Year << "/" << date.m_Month << "/" << date.m_Day << endl;
    return out;
}

// 打印日期
void Date::print() 
{
    cout << m_Year << "/" << m_Month << "/" << m_Day << endl;
}

// 构造函数
Date::Date(int y, int m, int d) : m_Year(y), m_Month(m), m_Day(d) 
{
    if (m_Day < 1 || m_Day > DaysInMonth(m_Year, m_Month)) 
    {
        cerr << "Invalid date! Adjusting to the first day of the month." << endl;
        m_Day = 1;
    }
    if (m_Month < 1 || m_Month > 12) 
    {
        cerr << "Invalid month! Setting to 1 (January)." << endl;
        m_Month = 1;
    }
    if (m_Year < 1) 
    {
        cerr << "Invalid year! Setting to 1." << endl;
        m_Year = 1;
    }
}