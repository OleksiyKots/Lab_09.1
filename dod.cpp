//dod.cpp
#include "dod.h"
#include "var.h"
#include <cmath>

using namespace nsVar;

void nsDod::dod() {
    // Обчислення рекурентного доданка
    double R = -(x * x) / ((4 * pow(n, 2)) + (2 * n)); // вираз залежить від умови завдання
    a *= R;
}
