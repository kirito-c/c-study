#include "Date.h"

int main() {
    Date date1(2024, 1, 1);
    Date date2(2024, 12, 31);
    Date date3 = date1 + 30;
    Date date4 = date2 - 30;

    std::cout << "Date 1: ";
    date1.print();
    std::cout << "Date 2: ";
    date2.print();
    std::cout << "Date 3 (30 days after Date 1): ";
    date3.print();
    std::cout << "Date 4 (30 days before Date 2): ";
    date4.print();
    std::cout << "Days between Date 1 and Date 2: " << (date2 - date1) << std::endl;

    return 0;
}