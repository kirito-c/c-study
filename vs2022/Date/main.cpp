#include <iostream>
using namespace std;
#include "Date.h"

int main() {
    Date d1(2006, 2, 14);
    Date d2(2025, 3, 7);

    d1.print();
    d2.print();

    Date d3 = d2 - 10;
    d3.print();

    Date d4;
    d4 = d1 + 10;
    d4.print();

    cout << d2 - d1 << endl;

    system("pause");
    return 0;
}