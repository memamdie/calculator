//#include "Driver.h"
#include<iostream>
#include"Expression.h"
#include "Number.h"
#include "HelperFunctions.h"

using namespace std;

int main() {

    //string str = "3+((-3)/4)";
    //string str = "(23+ (5) - 8) /      (2 * 5)";
	//string str = "2+5/6*8-(5/2)*78";
	//Expression* calc = new Expression(str);
	//calc->testmeth(str);
       // string temp = calc->shunting(str);
		//cout << temp << endl;
	//cout << calc->evaluate(temp) << endl;
	//calc->getinput();


	//Fraction* f = new Fraction("256/5634");
    string s = "25";
    
    HelperFunctions* h = new HelperFunctions(s);
    

}
/*double Driver::fractionToDecimal(string input) {

}
*/
