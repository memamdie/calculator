#ifndef LOG_H
#define LOG_H
#include <iostream>
#include <string>
#include <exception>

using namespace std;
class Log

{
private:
	double base;
	double number;
public:
	Log(string);
	//Will this generalize and be compatible with all number types? Log of a log solved?
	//Log(Number a, Number b) : base(a), pure(b) {}
    Log(double, double);
	string logb(double, double);
	//Log operator+(Log&);
	//Log operator-(Log&);
	//Log operator*(Log&);
	//Log operator/(Log&);

};



#endif