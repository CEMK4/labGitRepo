#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

bool IsLeapYear(int year)
{
    if (year % 4 == 0)
        if (year % 100 == 0)
            if (year % 400 == 0)
                return true;
            else
                return false;
        else
            return true;
    else return false;
}

int LaterInYear(int d1, int d2)
{
    return d1 > d2 ? d1 : d2;
}

int DaysInYear(int year)
{
    return IsLeapYear(year) ? 366 : 365;
}

int DaysInYearRange(int y1, int y2)
{
    int res = 0;
    for (int i = y1; i <= y2; i++)
    {
        res += DaysInYear(i);
    }
}