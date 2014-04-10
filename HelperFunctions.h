#include <iostream>
#include <string>
#include <sstream>
#include "Number.h"
using namespace std;
#ifndef HELPERFUNCTIONS_H
#define	HELPERFUNCTIONS_H
class HelperFunctions {
    HelperFunctions(string);
    bool isPolynomial(string);
    bool isIrrational(string);
    bool isInteger(string);
    bool isFraction(string);
    bool isLog(string);
};
#endif