//sum.cpp
#include "sum.h"
#include "dod.h"
#include "var.h"
#include <cmath>

using namespace nsDod;
using namespace nsVar;

void nsSum::sum() {
    n = 0;
    a = 1; // початкове значення доданка
    s = a; // початкова сума ряду

    do {
        n++;
        dod(); // виклик функції обчислення доданка
        s += a;
    } while (fabs(a) >= eps); // умова точності
}
