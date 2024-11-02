//Lab_09.1.cpp
#include <iostream>
#include <iomanip>
#include <cmath>
#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;

int main() {
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-----------------------------------------" << endl;
    cout << "|" << setw(5) << "x" << setw(4) << " |"
        << setw(9) << "sin(x)/x" << setw(3) << " |"
        << setw(6) << "S" << setw(6) << " |"
        << setw(4) << "n" << setw(3) << " |" << endl;
    cout << "-----------------------------------------" << endl;

    x = xp;
    while (x <= xk) {
        sum(); // виклик процедури обчислення суми ряду
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(10) << setprecision(5) << sin(x) / x << " |"
            << setw(10) << setprecision(5) << s << " |"
            << setw(5) << n << " |" << endl;
        x += dx;
    }

    cout << "-----------------------------------------" << endl;
    return 0;
}
